%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%TEST CASE ID: 3DVisualization_2

%TEST CASE DESCRIPTION :

%This test case has the Camera view point, Aspect ratio & Axis limits,Object Manipulation and Region of interest keywords from the matlab - 3D visualization keywords

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

%Camera Viewpoint keywords

camdolly(dx(i),dy(i),0)
mode = cameratoolbar('GetMode')
camlookat(gca)
camorbit(10,0,'data',[0 1 0])
campan(dtheta,dphi,'coordsys','direction')
campos([x,5,10])
camproj('orthographic')
camroll(10)
camtarget([xt(i),30,0])
camup([1 0 0]);
camva(camva)
camzoom(zoom_factor)
m = makehgtform('xrotate',pi/2)*makehgtform('yrotate',pi/2);
view(az, el);
T = viewmtx(az,el,phi)

%Aspect Ratio and Axis Limits keywords

daspect([1 1 1])
pbaspect([1 1 1])
xlim([-1.75 3.25])
ylim([-1.75 3.25])
zlim([-1.75 3.25])

%Object Manipulation
h = pan;
reset(gca)
rotate(h12,zdir,25)
h = rotate3d;
A = selectmoveresize 
h = zoom;
reset(gca);

%Region of Interest

[r2] = dragrect(rect)
finalRect = rbbox;    




