classdef (Abstract) Animation < hgsetget
    
    properties
        terminalAction
    end
    
    properties ( SetAccess = immutable, GetAccess = public, Hidden = false )
        key = [];
    end
    
    
    methods
        
        function obj = Animation()            
            Key = StimServer.ReadAck();
            assert(Key>0, 'Could not create animation')
            obj.key = Key;   
            obj.terminalAction = [0 0 0 0 1 0 0 0];
        end
        
        function delete(obj)
            StimServer.Command(obj.key, 0);
        end
        
        function set.terminalAction(obj, bitmask)
                        %[ka 0 a] define the terminal action for the animation. a is a uint8 bit mask. 
            % The bits have the following meaning:
            %   1 disable the assigned stimulus
            %   2
            %   4 toggle the photodiode signal1
            %   8 signal an event (see section 3 on page 4)
            %   16 restart animation (cyclic execution)
            %   32 reverse animation2
            %   64 goto initial state2
            %   128 end deferred mode
            % Setting a to 0 restores the default behaviour of deassigning 
            % the animation from the stimulus.
            action = sum(bitmask .* 2.^(0:7));
            StimServer.Command(obj.key, [0, action]);
            obj.terminalAction = action;
        end
        
        
    end
    
end