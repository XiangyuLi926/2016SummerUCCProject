%this matlab program counts the number of occurences of data analysis keywords in Matlab

brush on;

cumprod(1:5);

cumsum(1:5);

linkdata on;

M = magic(3);
B = prod(M);

B = sort(B);

B = sortrows(B);

x = randn(30,4);    
x(:,4) = sum(x,2);  
[r,p] = corrcoef(x); 

A = [-1 1 2 ; -2 3 1 ; 4 0 3];
v = diag(cov(A));

X = [2 8 4; 7 3 9];
max(X,[],1);

A = [1 2 3; 3 3 6; 4 6 8; 4 7 7];
mean(A);

median(A) ;

C = min(A);

C = mode(A);

C = std(A);

c = var(A);

w = conv(u,v);

A = rand(3); 
B = rand(4); 
C = conv2(A,B);

C = convn(A,B);

u = [1   2   3   4]
v = [10   20   30]
c = conv(u,v);
[q,r] = deconv(c,u);

sig = [0 1 -2 1 0 1 -2 1 0];
trend = [0 1 2 3 4 3 2 1 0]; 
x = sig+trend;   
y = detrend(x,'linear',5);

Y = filter(h,X);

Y = filter2(h,X);

x = 0:10; 
y = sin(x); 
xi = 0:.25:10; 
yi = interp1(x,y,xi); 

[X,Y] = meshgrid(-3:.25:3);
Z = peaks(X,Y);
[XI,YI] = meshgrid(-3:.125:3);
ZI = interp2(X,Y,Z,XI,YI);

[x,y,z,v] = flow(10); 
[xi,yi,zi] = meshgrid(.1:.25:10, -3:.25:3, -3:.25:3);
vi = interp3(x,y,z,v,xi,yi,zi);

VI = interpn(V,ntimes);

A = magic(3);
b = [1;2;3]
x=A\b;
x = A/b;

x = (0: 0.1: 2.5)';
y = erf(x); 
p = polyfit(x,y,6);

polyval(x,y,6);

abs(-5);

theta = angle(Z);

c = complex(a,b);

B = cplxpair(A);

Y = fft(X);

Y = fft2(X);

Y = fftn(X);

Y = fftshift(X);

t=0:.001:5;
x = sin(2*pi*50*t)+sin(2*pi*120*t);
y = x + 2*randn(size(t));
Y = fftw(y,1458);

y = ifft(X);

Y = ifft2(X);

Y = ifftn(X);

ifftshift(X);

A = [1 2 3 4 5 9 519]
nextpow2(A);

Q = unwrap(P);

Y = [0 1 2; 3 4 5];
cumtrapz(Y,1);

L = del2(U);

v = -2:0.2:2;
[x,y] = meshgrid(v);
z = x .* exp(-x.^2 - y.^2);
[px,py] = gradient(z,.2,.2);

polyder();

X = sort(rand(1,101)*pi);
Y = sin(X);
Z = trapz(X,Y);

ts1 = timeseries(rand(5,1),[1 2 3 4 5]);
ts2 = timeseries(rand(5,1),[6 7 8 9 10]);
ts3 = append(ts1, ts2)

ts1 = timeseries(rand(5,1),[1 2 3 4 5], 'Name', 'MyTimeseries');
get(ts1);

ts = timeseries(rand(5,1),[1 2 3 4 5]);
samples = getdatasamples(ts, [2 3]);

count_ts = timeseries(count,[1:24],'Name','VehicleCount');
getdatasamplesize(count_ts);

ts = timeseries([3; 4.2; 5; 6.1; 8], 1:5, [1; 0; 1; 0; 1]);
ts.QualityInfo.Description = {'good' 'bad'};
getqualitydesc(ts);

ts = timeseries(rand(5,1),[1 2 3 4 5]);
ts1 = getsamples(ts, ts.time([2 3]));

isempty(ts1);

length(ts1);

plot(ts1);

ts1 = timeseries(rand(5,1),[1 2 3 4 5]);
set(ts1, 'Name', 'mytimeseries');

size(ts1);

tsdata.event('AMCommute',8);

tstool();

ts = addsample('Time',3,'Data',420);

ctranspose(ts1);

ts = timeseries(rand(5,1),[10 20 30 40 50]);
ts1 = delsample(ts,'Index', 1);

ts1 = detrend(ts, method);

filter_count = filter(count1, b, a);

ts.TimeInfo.StartDate = '10/27/2005 07:05:36';
getabstime(ts)

getinterpmethod(ts1);

getsampleusingtime(ts1);

idealfilter(ts1);

resample(ts1);

setabstime(ts1);

setinterpmethod(ts1);

setuniformtime(ts1);

synchronize(ts1);

transpose(ts1);

vertcat(ts1);

addevent(count1, e1);

ts = delevent(ts,'test');

ts1 = gettsafteratevent(ts,event);

ts1 = gettsafterevent(ts,event);

ts1 = gettsatevent(ts,event);

ts1 = gettsbeforeatevent(ts,event);

tsc = addsampletocollection(tsc,'time',3.5,'acceleration',10,'speed',{5 1});

tsc = addts(tsc, ts2);

tsc = delsamplefromcollection(tsc,'Index',N);

tsc = tscollection(timeseries([3 6 8 0 10]));

getabstime(tsc);

tsc2=getsampleusingtime(tsc1,Time) ;

names = gettimeseriesnames(tsc);

tsc=horzcat(tsc1,tsc2);

tsc=removets(tsc,Name);

tsc=resample(tsc,Time);

tsc = setabstime(tsc,Times);

tsc=settimeseriesnames(tsc,old,new);

tsc=vertcat(tsc1,tsc2);
