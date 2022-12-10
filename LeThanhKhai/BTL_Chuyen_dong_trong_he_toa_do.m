function BTL_Chuyen_dong_trong_he_toa_do

clc

sympref('FloatingPointOutput',true)
%% INPUT Data Nh?p d? li?u ??u vào

disp('M?i b?n nh?p th?i gian ??u vào');

t1 = input('t1= ');
t2 = input('t2= ');

x = 0;

y = 0;

t = 0;

dt = 0.005;

%% VE do thi 
figure('name','Qu? ??o c?a v?t trong h? t?a ??','color','white','numbertitle','off');

hold on

fig_honda = plot(x,y,'ro','MarkerSize',10,'markerfacecolor','r');

ht = title(sprintf('t=%0.2fs',t));


axis equal

axis ([-100 10 0 50]);

%% CALCULATION Ph??ng trình chuy?n ??ng c?a v?t


while t<=t2

    t = t+dt;

    x = 3*t^2-(4/3)*t^3; 

    y = 8*t;

    plot(x,y,'o','markersize',2,'color','k');

    set(fig_honda,'xdata',x,'ydata',y);

    set(ht,'string',sprintf('t =%0.2fs',t));

    pause(0.002);

end
%% Tính v?n t?c, gia t?c và bán kính cong
t = sym('t');
disp('Nhap thoi diem t: '); 
t1 = input('t='); 
%% Tính v?n t?c
x1 = 3*t^2-(4/3)*t^3;
y1 = 8*t; 
vx = diff(x1);
vy = diff(y1); 
v = (vx.^2 + vy.^2)^(1/2);
s = subs(v,t,t1);
disp('Do lon van toc cua chat diem tai thoi diem t la: ');
disp(s);    
%% Tính gia t?c
ax = diff(x1,2); 
ay = diff(y1,2); 
a = sqrt(ax.^2+ ay.^2); 
s1 = subs(a,t,t1); 
disp('Do lon gia toc tai thoi diem t la: '); 
disp(s1); 
%% Tính bán kính cong 
at = diff(v); 
an = sqrt(a.^2 - at.^2); 
r = v.^2/an; 
s2 = subs(r,t,t1); 
disp('Ban kinh cong cua quy dao tai thoi diem t la: '); 
disp(s2); 
end