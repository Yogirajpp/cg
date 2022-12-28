#include<iostream>
#include<graphics.h>
using namespace std;

static int TOP=1,BOTTOM=2, LEFT=3, RIGHT=4, xmin, xmax, ymin, ymax;

int gc(int x, int y)
{
    int code=0;
    if(y>ymax)
    {
        code|=TOP;
    }
    else if(y<ymin)
    {
        code|=BOTTOM;
    }
    else if(x>xmax)
    {
        code|=RIGHT;
    }
    else if(x<xmin)
    {
        code|=LEFT;
    }
    return code;
};

int main()
{
    int gd= DETECT, gm;
    initgraph(&gd,&gm,NULL);
    int x1, x2, y1, y2;
    setcolor(WHITE);
    cout<<"Enter the minimum and maximum values of rectangle ";
    cin>>xmin>>ymin>>xmax>>ymax;
    rectangle(xmin,ymin,xmax,ymax);
    cout<<"enter the coordinates ";
    cin>>x1>>x2>>y1>>y2;
    line(x1,y1,x2,y2);
    int o1=gc(x1,y1);
    int o2=gc(x2,y2);
    int accept=0;
    while(1)
    {
       float m=(float)(y2-y1)/(x2-x1);
       if ( o1==0 && o2==0)
       {
           accept=1;
           break;
       }
       else if((o1& o2)!=0)
       {
           break;
       }
       else
        {
            int x, y, temp;
            if(o1==0)
            {
                temp=o1;
            }
            else
            {
                temp=o2;
            }

            if(temp & TOP)
            {
                x=x1+(ymax-y1)/m;
                y=ymax;
                }
            if(temp & BOTTOM)
            {
                x=x1+(ymin-y1)/m;
                y=ymin;
                }
            if(temp & LEFT)
            {
                x=xmin;
                y=y1+m*(xmin-x1);
                }
            if(temp & RIGHT)
            {
                x=xmax;
                y=y1+m*(xmax-x1);
                }
            if(temp == o1)
            {
                x1=x;
                y1=y;
                o1=gc(x1,y1);
                }
            if(temp == o2)
            {
                x2=x;
                y2=y;
                o2=gc(x2,y2);
                }
            }
    }
 cout<<"after clipping";
        if(accept)
            cleardevice();
            rectangle(xmin,ymin,xmax,ymax);
            setcolor(RED);
            line(x1,y1,x2,y2);
        closegraph;
        delay(10000);
        return 0;








}
