#include<iostream>
#include<graphics.h>
using namespace std;

static int LEFT = 1, RIGHT= 2, BOTTOM = 4, TOP = 8,xmin, ymin, xmax, ymax;
int gc(int x, int y)
{
    int code=0;
    if(y>ymax) code|=TOP;
    if(y<ymin) code|=BOTTOM;
    if(x<xmin) code|=LEFT;
    if(x>xmax) code|=RIGHT;
    return code;
}
int main()
{
    int gd= DETECT, gm;
    initgraph(&gd,&gm,NULL);
    int x1,y1,x2,y2,x,y;
    cout<<"Enter xmin and ymin of rectangle :";
    cin>>xmin>>ymin;
    cout<<"Enter xmax and ymax of rectangle :";
    cin>>xmax>>ymax;
    rectangle(xmin,ymin,xmax,ymax);
    cout<<"Enter x1 and y1 :";
    cin>>x1>>y1;
    cout<<"Enter x2 and y2 :";
    cin>>x2>>y2;
    line(x1,y1,x2,y2);
    int o1=gc(x1,y1),o2=gc(x2,y2);
    float m=(float)(y2-y1)/(x2-x1);
    int accept =0;
    while(1)
    {
        if(o1==0 && o2==0)
        {
            accept=1;
            break;
        }
        else if(o1 & o2 !=0)
        {
            break;
        }
        else
        {
            int temp;
            if(o1==0)
            {
                temp=o1;
            }
            else
            {
                temp=o1;
            }

            if( temp &TOP)
            {
                x=(ymax-y1)/m+x1;
                y=ymax;
            }
            if( temp &BOTTOM)
            {
                x=(ymin-y1)/m+x1;
                y=ymin;
            }
            if(temp & RIGHT)
            {
                x=xmax;
                y=y1+m*(xmax-x1);
            }

            if(temp & LEFT)
            {
                x=xmin;
                y=y1+m*(xmin-x1);
            }
            if(temp == o1)
            {
                x1=x;
                y1=y;
                o1=gc(x1,y1);
            }
            else
            {
                x2=x;
                y2=y;
                o2=gc(x2,y2);
            }
        }
    }
            if (accept)
                cleardevice();
                rectangle(xmin,ymin,xmax,ymax);
                setcolor(RED);
                line(x1,y1,x2,y2);
             closegraph();
             delay(500);

}
