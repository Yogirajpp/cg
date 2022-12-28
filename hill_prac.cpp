#include<iostream>
#include<graphics.h>
#include<math.h>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

void move(int j,int h, int &x, int &y)
{
    if (j==1)
    {
        y=y-h;
    }
    else if(j==2)
    {
        x=x+h;
    }
    else if(j==3)
    {
        y=y+h;
    }
    else
    {
        x=x-h;
    }
    lineto(x,y);
}

void hilbert (int d, int r, int u, int l, int n, int h, int &x, int &y)
{
    if (n>0)
    {
        n--;
        hilbert(r,d,l,u,n,h,x,y);
        move(d,h,x,y);
        hilbert(d,r,u,l,n,h,x,y);
        move(r,h,x,y);
        hilbert(d,r,u,l,n,h,x,y);
        move(u,h,x,y);
        hilbert(l,u,r,d,n,h,x,y);

    }
}

int main()
{
    int gd= DETECT ,gm;
    initgraph(&gd,&gm,NULL );
    int x=50,y=150,h=10,n,u=1,r=2,d=3,l=4;
    cout<<"Enter number of loop :";
    cin>>n;
    moveto(x,y);
    hilbert(d,r,u,l,n,h,x,y);
    delay(5000);
    closegraph();
}
