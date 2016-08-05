% Test case to check for the occurences of Matlab GUI development program. 

out = dialog('WindowStyle', 'normal', 'Name', 'My Dialog');
errordlg('File not found','File Error');

A = randn(10,1);
checkLabels = {'Save sum of A to variable named:' ...
               'Save mean of A to variable named:'}; 
varNames = {'sumA','meanA'}; 
items = {sum(A),mean(A)};
export2wsdlg(checkLabels,varNames,items,...
             'Save Sums to Workspace');

helpdlg('Choose 10 points from the figure','Point Selection');

prompt = {'Enter matrix size:','Enter colormap name:'};
dlg_title = 'Input for peaks function';
num_lines = 1;
def = {'20','hsv'};
answer = inputdlg(prompt,dlg_title,num_lines,def);

d = dir;
str = {d.name};
[s,v] = listdlg('PromptString','Select a file:',...
                'SelectionMode','single',...
                'ListString',str);

h = msgbox("Hi");

printdlg();

printpreview();

button = questdlg('qstring','title');

uigetdir(matlabroot,'MATLAB Root Directory')

[FileName,PathName] = uigetfile('*.m','Select the MATLAB code file');

pref_value = uigetpref(group,pref,title,question,pref_choices);

uiopen('filename')

[file,path] = uiputfile('animinit.m','Save file name');

h = 365;
g = 52;
uisave({'h','g'},'var1');

c = uisetcolor(...,'dialogTitle');

h = text(.5,.5,'Figure Annotation');
uisetfont(h,'Update Font');

h = waitbar(0,'Please wait...');

warndlg('Pressing OK will clear memory','!! Warning !!');

data = guidata(a);

handles = guihandle;

movegui(handle,'north');

openfig('filename.fig');

f = figure('Position',[300 300 300 200]);
p = uipanel('Position',[.2 .2 .6 .6]);
h1 = uicontrol(p,'Style','PushButton','Units','normalized',...
               'String','Push Button','Position',[.1 .1 .5 .2]);
pos1 = getpixelposition(h1);
setpixelposition(h1,pos1 + [10 10 25 25]);

values = getappdata(h);

[x,y] = ginput(4);

guide('filename.fig');

h = actxserver('excel.application');
inspect(h);

isappdata(h,name);

rmappdata(h,name);

setappdata(h,'name',value);

waitfor(h,'PropertyName');

k = waitforbuttonpress ;

choice = menu('Choose a color','Red','Blue','Green');

h = uibuttongroup('visible','off','Position',[0 0 .2 1]);

hcmenu = uicontextmenu;

uicontrol('Style', 'popup',...
           'String', 'hsv|hot|cool|gray',...
           'Position', [20 340 100 50],...
           'Callback', @setmap);

handle = uicontrol;

f = uimenu('Label','Workspace');

hp = uipanel('Title','Main Panel','FontSize',12,...
             'BackgroundColor','white',...
             'Position',[.25 .1 .67 .67]);

hpt = uipushtool(ht,'CData',icon,...
                 'TooltipString','uipushtool',...
                 'ClickedCallback','disp(''Hello World!'')');

f = figure('Position',[200 200 400 150]);
dat = rand(3); 
cnames = {'X-Data','Y-Data','Z-Data'};
rnames = {'First','Second','Third'};
t = uitable('Parent',f,'Data',dat,'ColumnName',cnames,... 
            'RowName',rnames,'Position',[20 20 360 100]);

h = figure('ToolBar','none');
ht = uitoolbar(h);
a = rand(16,16,3);
htt = uitoggletool(ht,'CData',a,'TooltipString','Hello');

align(h, 'distribute','bottom');

fig = gcbf;

h = gcbo;

uistack(h) ;

uiwait;

uiresume(h);

ispref('mytoolbox','version');

set(gca,'ButtonDownFcn','selectmoveresize');

