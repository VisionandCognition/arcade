classdef Circle < Ellipse 
    % CIRCLE < ELLIPSE < Shape < Stimulus - Circle stimulus for ARCADE
    %
    % 
    % PROPERTIES
    % -----------
    %   diameter : diameter of circle (pixel)     
    %      
    % USAGE
    % -----
    %   c = Circle();
    %
    % For more information, see <a href="matlab:doc('arcade')">the ARCADE guide</a> and the superclasses.
    %
    % See also Ellipse, Shape, Stimulus

    properties ( Access = public, Dependent = true, Transient = true )
        diameter = 100;
    end
    
        
    methods
        function obj = Circle(varargin)
            obj = obj@Ellipse();            

            % set defaults (trigger set methods)
            % obj.set_all_properties()                    
        end
        
        function set.diameter(obj, r)
           obj.width = r;
           obj.height = r;
        end
        
        function r = get.diameter(obj)            
            if abs(obj.width - obj.height) > eps
                warning('Width and height of Circle object are not identical anymore.')
            end
            r = obj.width;
        end
        
    end
end