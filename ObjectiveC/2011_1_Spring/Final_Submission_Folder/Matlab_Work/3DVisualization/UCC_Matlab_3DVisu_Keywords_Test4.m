%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%TEST CASE ID: 3DVisualization_4

%TEST CASE DESCRIPTION :

%This test case tests the occurrences of few of the 3D visualization keywords in a matlab program.

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

%prepare your data
Z = peaks(20);
%select window and position plot region within window
figure(1)subplot(2,1,2)
%call 3-D graphing function
h = surf(Z);
%Add lighting
light('Position',[-2,2,20])
lighting phong
material([0.4,0.6,0.5,30])
set(h,'FaceColor',[0.7 0.7 0],'BackFaceLighting','lit')
%Add viewpoint
view([30,25])
set(gca,'CameraViewAngleMode','Manual')
%set axis limits and tick marks
axis([5 15 5 15 -8 8])
set(gca,'ZTickLabel','Negative||Positive')
%set aspect ratio
set(gca,'PlotBoxAspectRatio',[2.5 2.5 1])
%Annotate the graph with axis labels, legend and text
xlabel('X Axis')
ylabel('Y Axis')
zlabel('Function Value')
title('Peaks')
%print graph
set(gcf,'PaperPositionMode','auto')
print -dps2
