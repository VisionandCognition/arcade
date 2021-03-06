classdef Ellipse < Shape
    % ELLIPSE < Shape < Stimulus - Ellipse stimulus for ARCADE
    %
    % 
    % PROPERTIES
    % -----------
    %   width  : width of ellipse (pixel) for rotation angle=0
    %   height : heigth of ellipse (pixel) for rotation angle=0
    %
    %      
    % USAGE
    % -----
    %   e = Ellipse();
    %
    % For more information, see <a href="matlab:doc('arcade')">the ARCADE guide</a> and the superclasses.
    %
    % See also Shape, Stimulus

    properties ( Access = public, Transient = true )
        width = 100; % width of ellipse in px for angle=0
        height = 100; % height of ellipse in px for angle=0      
    end       
        
    methods
        function obj = Ellipse            
            StimServer.Command(0, uint8(28));
            obj = obj@Shape();            

            % set defaults (trigger set methods)
            obj.set_all_properties()

        end
        
        function set.width(obj, width)
            StimServer.Command(obj.key, [uint8([1,1]), typecast(uint16([width, obj.height]),'uint8')]);
            obj.width = width;
        end
        
        function set.height(obj, height)
            StimServer.Command(obj.key, [uint8([1,1]), typecast(uint16([obj.width, height]),'uint8')]);
            obj.height = height;
        end
                      
        function delete(obj)            
        end
        
    end

    
end