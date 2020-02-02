#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void main()
{
 int gd,gm;
 int dx,dy,x,y,x1,x2,y1,y2,p;
 clrscr();

 printf("Enter the starting coordinates:");
 scanf("%d %d",&x1,&y1);

 printf("Enter the ending coordinates:");
 scanf("%d %d",&x2,&y2);
  detectgraph(&gd,&gm);
 initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");

 x=x1;
 y=y1;
 dx=x2-x1;
 dy=y2-y1;
 p=2*dy-dx;
 while(x<=x2)
 {
	putpixel(x,y,GREEN);
	x++;

	delay(50);
	if(p<0)
	{
	 p=p+2*dy;
	}
	else
	{
	 p=p+2*dy-2*dx;
	 y++;
	}
 }
 getch();
 closegraph();
 }