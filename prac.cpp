#include<iostream>
#include<graphics.h>

using namespace std;

class point
{
    public:
    int x, y;
};

class poly
{
    private:
    point p[20];
    int inter[20];
    int v,xmax,ymax,xmin,ymin;
    void read();
    void display();
    void calc();
    void ints(float);
    void sort(int);

};

void poly:: read()
{
    int i;
    cout<<"Enter number of vertices";
    cin>>v;

    if(v>2)
    {
        for(i=0;i<v;i++)
        {
            cout<<"Enter the coordinates ";
            cout<<"For x"<<i+1;
            cin>>p[i].x;
            cout<<"For y"<<i+1;
            cin>>p[i].y;
        }

        p[i].x=p[0].x;
        p[i].y=p[0].y;
        xmin=xmax=p[0].x;
        ymin=ymax=p[0].y;


    }

    else{
        cout<<"Wrong";
    }

}

void poly :: calc()
{
    for(int i=0; i<v;i++)
    {
    if (xmin>p[i].x)
    {
        xmin=p[i].x;
    }
     if (xmax<p[i].x)
    {
        xmax=p[i].x;
    }
     if (ymin>p[i].y)
    {
        ymin=p[i].y;
    }
     if (ymax<p[i].y)
    {
        ymaxp[i].y;
    }
    }
}

void poly:: display()
{
    int ch;

    do{
   cout<<"\n\nMENU:";
 cout<<"\n\n\t1 . Scan line Fill ";
 cout<<"\n\n\t2 . Exit ";
 cout<<"\n\nEnter your choice:";
 cin>>ch1;

    switch(ch)
    {
        case 1: s=ymin+0.01;
        delay(100);
        closegraph();

        while(s<=ymax)
        {
        ints(s);
        sort(s);
        s++;
        }

        case 2:
        exit(0);
    }
    }while(ch!=2);
}

void poly:: ints(float z)
{
    int x1,x2,y1,y2,temp;
    int c=0;
    for(int i=0;i<v;i++)
    {
        
    }
    
} 