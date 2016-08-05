%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%TEST CASE ID: 3DVisualization_3

%TEST CASE DESCRIPTION :

%This test case has the lighting, Transparency and volume visualization keywords from the matlab - 3D visualization keywords

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%


%lighting

camlight(h,'left')
R = diffuse(Nx,Ny,Nz,S)
light('Position',[1 0 0],'Style','infinite');
lightangle(h,az,30)
lighting none
material([ka kd ks])
R = specular(Nx,Ny,Nz,S,V)
light('Position',[1 0 0],'Style','infinite');

%Transparency
alim([0 .15])
alpha(0.5);
alphamap('vup')

%Volume Visualization

hcones = coneplot(x,y,z,u,v,w,cx,cy,cz,5);
h = contourslice(x,y,z,v,[1:9],[],[0],linspace(-8,2,10));
cav = curl(x,y,z,u,v,w);
div = divergence(x,y,z,u,v,w);
v = flow
iverts = interpstreamspeed(x,y,z,u,v,w,verts,.2);
p1 = patch(isosurface(D, 5),'FaceColor','red','EdgeColor','none');
isocolors(x,y,z,cdata,p);
isonormals(x,y,z,data,p);
p = patch(isosurface(x,y,z,v,-3));
reducepatch(p2,0.15)
[x,y,z,D] = reducevolume(D,[4,4,1]);
p2 = patch(shrinkfaces(fv,.3));
slice(x,y,z,v,xslice,yslice,zslice)
data = smooth3(data,'box',5);
streamline(stream2(x(:,:,5),y(:,:,5),u(:,:,5),v(:,:,5),sx,sy));
streamline(stream3(x,y,z,u,v,w,sx,sy,sz))
streamparticles(iverts,35,'animate',10,'ParticleAlignment','on')
streamribbon(x,y,z,u,v,w,sx,sy,sz);
streamslice(x,y,z,u,v,w,[],[],[5])
streamtube(x,y,z,u,v,w,sx,sy,sz);
[x,y,z,D] = subvolume(D,[60,80,nan,80,nan,nan]);
patch(surf2patch(s))
axis(volumebounds(x,y,z,v))



