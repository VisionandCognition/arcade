classdef (Sealed) SGLBehaviouralStore < AUXEditableVariables & AUXOutputDataFile
    % [SINGLETON]
    
    % user variable changes
    % user input variables
    
    % *** code optional data output, debugging
    % *** should not produce a behavioural file
    
    % INHERITANCE:
    % SGLBehaviouralStore <  ...
    %   AUXEditableVariables < handle
    %   AUXOutputDataFile < handle
    
    % PROPERTIES:
    %   + fid         % file handle
    %   + fid_hdr     % header file handle
    %   + bhvFilename % base filename
    
    % METHODS:
    %   + mOpenFile
    %   + mCloseFile
    %   + mWriteFile
    %   + mESIRead
    %   + mSetEdVarCfg
    
    
    %---------------------------------------------%
    % unknown   - Jarrod, wrote class
    %  4.3.2015 - Jarrod,
    %  - edited the file destination for the behavioural data
    % 11.3.2015 - Jarrod, added in cfg passed in on instance creation
    %           - changed the way user variables are stored
    % 10.4.2015 - Jarrod, added in trial selection functions
    % 24.4.2015 - Jarrod,
    % - changed filepath for behavioural data output
    % - added error if user trial selection functiosn return an invalid value
    % - fixed condition selection typo
    %  6.7.2015 - Jarrod, implemented a temporary fix for writing the last
    %   trial in the BHV. Until now the last trial was not written to the BHV.
    % 21.4.2016 - Jarrod, added some documentation/notes
    
    
    % all project data
    % /session_log/"subject"/"Experiment"/"Session"/[all files]
    % session_log
    
    properties
        currentTrial      = 0;
        current           = zeros(1,3);
        
        sessionConditions = nan(1);
        sessionBlocks     = nan(1);
        
        reactionTime      = nan(1);
        trialError        = nan(1);
        trialErrorTime    = nan(1);
        
        userVariables     = [];
        
        % time in ms it takes to write the behavioural output
        writeTime         = 0;
        
        % ongoing copy of config parameters
        cfg = [];
    end
    
    properties (SetAccess = immutable)
        dataFileString = [];
        writeDirectory = [];
    end
    
    methods (Static)
        %# "constructor" or "fetcher"
        function this = launch(varargin) % pass in cfg
            persistent thisObj
            if (isempty(thisObj) || ~isvalid(thisObj)) && ~isempty(varargin{1})
                thisObj = SGLBehaviouralStore(varargin{1});
            end
            this = thisObj;
        end
    end
    
    methods (Access = private)
        %# true constructor
        function this = SGLBehaviouralStore(cfg)
            
            this.dataFileString =  [cfg.Subject '_' today() '_' cfg.Experiment '_' cfg.Session];
            % set cfg  structure
            this.cfg = cfg;
            behavDir = this.cfg.filepaths.Behaviour;
            
            this.writeDirectory = behavDir;
        end
    end
    
    methods
        function [curCond,curBlock] = mCallTrialSelectionFcns(this,currentTrial)
            persistent condSelFcn blockSelFcn
            
            if this.currentTrial==0
                % get selection functions
                if ~isempty(this.cfg.Files.ConditionSelection)
                    [~,condSelFile,~] = fileparts(this.cfg.Files.ConditionSelection);
                    condSelFcn = str2func(condSelFile);
                else
                    condSelFcn = @(x) ones(1);
                end
                if ~isempty(this.cfg.Files.BlockSelection)
                    [~,blockSelFile,~] = fileparts(this.cfg.Files.BlockSelection);
                    blockSelFcn = str2func(blockSelFile);
                else
                    blockSelFcn = @(x) ones(1);
                end
            end
            
            % call user functions
            curBlock = blockSelFcn(currentTrial);
            
            % handle nargin of condition selection function
            nCondSelFcnArgs = nargin(condSelFcn);
            
            % (currentTrial, currentBlock) | (currentTrial, currentBlock, varargin)
            if (nCondSelFcnArgs == 2) || nCondSelFcnArgs < -3
                curCond = condSelFcn(currentTrial, curBlock);
                % (currentTrial) | (currentTrial, varargin)
            elseif nCondSelFcnArgs == 1 || nCondSelFcnArgs == -2;
                curCond = condSelFcn(currentTrial);
            else
                error('Bad structure of input arguments of trial selecton function %s', ...
                    this.cfg.Files.ConditionSelection);
            end
            
            
            % return values should be positive integers
            if curCond~=floor(curCond) && ~isscalar(curCond)
                Error('Condition selection function returned invalid condition number.');
            end
            
            if curBlock~=floor(curBlock) && ~isscalar(curBlock)
                Error('Block selection function returned invalid block number.');
            end
            
        end
        
        %# create a new trial
        % create trial could return TrialData
        function mCreateTrialData(this)
            
            % increment trial
            currentTrial     = this.currentTrial+1; %#ok<*PROP>
            
            % get the condition and block for this trial
            [currentCondition, currentBlock] = this.mCallTrialSelectionFcns(currentTrial);
            
            % set 'dummy' values for the current trial
            this.sessionBlocks(currentTrial)     = currentBlock;
            this.sessionConditions(currentTrial) = currentCondition;
            
            this.reactionTime(currentTrial)      = nan(1);    % def: nan
            this.trialError(currentTrial)        = inf(1);    % def: indeterminate
            this.trialErrorTime(currentTrial)    = nan(1);    % def: nan
            
            % set current
            current = [currentCondition, currentBlock, currentTrial];
            this.current      = current;
            this.currentTrial = currentTrial;
            
            % create an empty user variables
            %this.userVariables{currentTrial} = ''; % **change this to a vector of structs
            %this.userVariables{currentTrial} = []; % **change this to a vector of structs
            % *** TODO if is all one class on read, then convert to that vector
            this.userVariables{currentTrial} = []; % **change this to a vector of structs
            
            %userVariables{1} = {};
            if currentTrial==1
                trlData      = nan(1,4); %#ok<*NASGU>
                % open trial behavioural data file
                this.mOpenFile();
                
            else
                
                trialError      = this.trialError(currentTrial-1);
                reactionTime    = this.reactionTime(currentTrial-1);
                trialErrorTime  = this.trialErrorTime(currentTrial-1);
                writeTime       = this.writeTime;
                
                trlData = [trialError, reactionTime, trialErrorTime, writeTime]; % previous trial
                
                % write trial
                %t = tic;
                %this.mWriteTrialData(currentTrial-1);
                %this.writeTime = round(toc(t)*1000);
                
            end
            
            %--------------------------------------------%
            % determined at the start of a trial
            % [currentcondition,currentblock,currentTrial];
            
            % set during trial, by loner functions
            % [trialError, reactionTime, trialErrorTime]; % previous trial
            % trialErrorTime < set by trialerror loner function
            
            % write data to pipe
            if SGLTrialDataPipe.GetConnectionStatus
                SGLTrialDataPipe.WriteTrialData(current, trlData)
            end
            
        end
        
        %# Temporary write behvaioural data
        % *implemented to fix the problem of not writing the last trial
        % should be called at the end of the trial
        % thus operates on current trial
        function tmpWriteBinaryBHV(this, currentTrial)
            % only needed for the timing
            % write trial
            t = tic;
            this.mWriteTrialData(currentTrial);
            this.writeTime = round(toc(t)*1000);
        end
        
        %# get TrialData structure for user referece
        function TrialData = mGetTrialData(this)
            current = this.current;
            
            TrialData = [];
            TrialData.currentCondition = current(1);
            TrialData.currentBlock     = current(2);
            TrialData.currentTrial     = current(3);
            
            %TrialData.reactiontime = this.reactionTime;
            %TrialData.trialerror   = this.trialError;
        end
        
        %# get editable variables
        function strct = mGetEditableVariables(this)
            strct = this.mCellmat2Struct(this.cfg.EditableVariables);
        end
        
        %# output trial data
        function mWriteTrialData(this, writeTrial)
            % write the trial data every trial incase of catasrophic failure
            % create a trial data structure
            fields = {...
                'sessionConditions';....
                'sessionBlocks';....
                'reactionTime';....
                'trialError';....
                'trialErrorTime';....
                'userVariables'};
            
            thisTrial = [];
            thisTrial.trialNumber = writeTrial;
            for k = 1:length(fields)
                % read from this
                thisTrial.(fields{k}) = this.(fields{k})(writeTrial);
            end
            
            % write trial
            this.mWriteFile(thisTrial);
        end
    end
end
