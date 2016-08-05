%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%TEST CASE ID: OOPS_3

%TEST CASE DESCRIPTION :

%This test case has the events,listeners, meta-class and heterogenous arrays keywords from the matlab - OOPS Keywords

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%



event.EventData
lh = event.listener(Hobj,'EventName',@CallbackFunction)
event.PropertyEvent
lh = event.proplistener(Hobj,Properties,'PropEvent',@CallbackFunction)

events('handle')

%meta-class keywords
obmeta = meta.class.fromName('MyClass');
mcls = meta.class.fromName(clname);
meta.DynamicProperty
meta.EnumeratedValue
meta.event

meta.MetaData
>> class(m(2))

meta.method
meta.package 

mev = meta.package.fromName('event');

P = meta.package.getAllPackages
meta.property
mc = metaclass(obj);


%heterogenous arrays

C = cat(dim,A,B)
C = horzcat(A1,A2,...)
classdef HierarchyRoot < matlab.mixin.Heterogeneous
C = vertcat(A1,A2,...)

