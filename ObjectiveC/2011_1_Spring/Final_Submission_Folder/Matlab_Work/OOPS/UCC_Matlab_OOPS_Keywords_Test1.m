%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%TEST CASE ID: OOPS_1

%TEST CASE DESCRIPTION :

%This test case has the Classes & Objects and Enumeration keywords from the matlab - OOPS Keywords

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%


%class keyword
import java.lang.*;
obj = String('mystring');
class(obj)

class(obj2)
%classdef, properties and methods keywords
classdef TensileData
  enumeration
      No  (0)
      Yes (1)
      Off (0)
      On  (1)
   end

   properties
      Material = 'carbon steel';
      SampleNumber = 0;
      Stress
      Strain
      Modulus
   end % properties
   methods
      function obj = set.Material(obj,material)
         if ~(strcmpi(material,'aluminum') ||... 
            strcmpi(material,'stainless steel') ||... 
            strcmpi(material,'carbon steel'))
            error('Material must be aluminum, stainless steel, or carbon steel')
         end
      obj.Material = material;
      end % set.Material
   end% methods
end% classde


exist('matlab/general/mkdir.m')

inferiorto('class_a')

%ismethod keyword is not included in the keyword list - please note
if ismethod(obj1,'eq') && ismethod(obj2,'eq')
   tf = obj1 == obj2;
end

%isobject keyword
isobject(h)

%isprop keyword is not included in the keyword list - please note
if isprop(h,'XDataSource')
   set(h,'XDataSource','x')

b = loadobj(a)
methodsview java.awt.MenuItem
sobj = saveobj(obj)

A = subsasgn(A, S, B)

ind = subsindex(A)
B = subsref(A,S)
S = substruct('()',{3,5},'.','field')
superclasses('hgsetget')
superiorto('class_a')

