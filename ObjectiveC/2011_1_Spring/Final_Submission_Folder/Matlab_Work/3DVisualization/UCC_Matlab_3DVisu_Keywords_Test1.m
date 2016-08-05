%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

%TEST CASE ID: 3DVisualization_1

%TEST CASE DESCRIPTION :

%This test case has the surface and mesh creation, Domain Generation and Color operations keywords from the matlab - 3D visualization keywords



%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

hidden on
hidden off
hidden

mesh(X,Y,Z)

meshc(X,Y,Z);

meshz(X,Y,Z) 

Z = peaks;
Z = peaks(n);
Z = peaks(V);
Z = peaks(X,Y);


surfc(X,Y,Z)
surf(x,y,z,c);
surface(peaks,flipud(X),...
   'FaceColor','texturemap',...
   'EdgeColor','none',...
   'CDataMapping','direct')
surfl(peaks)

tetramesh(Tes,X);

trimesh(tri,x,y,z)

triplot(dt)
trisurf(tri,x,y,z)

beta = .5;
brighten(beta);

caxis([-1 0])
colorbar('location','southoutside')
h = colordef('new',color_option)
colormap(hsv(128))
colormapeditor

whitebg('g')
whitebg('green')
whitebg([0 1 0]);

set(gcf,'Color',[1,0.4,0.6])

cmap = contrast(X);
graymon
M = hsv2rgb(H)
cmap = rgb2hsv(M)
rgbplot(copper)

shading flat
spinmap(t)
surfnorm(x,y,z)
whitebg([0 .5 .6])


