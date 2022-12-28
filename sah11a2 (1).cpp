#include<iostream>
#include<stdlib.h>
#include<graphics.h>
#include<math.h>
void drawCircle(int x1, int y1, int x, int y)
{
    putpixel(x1+x, y1+y,BLUE);
    putpixel(x1-x, y1+y, YELLOW);
    putpixel(x1+x, y1-y, RED);
    putpixel(x1-x, y1-y, YELLOW);
    putpixel(x1+y, y1+x, RED);
    putpixel(x1-y, y1+x, WHITE);
    putpixel(x1+y, y1-x, GREEN);
    putpixel(x1-y, y1-x, YELLOW);
}

void circleBres(int x1, int y1, int r)
{
    int x = 0, y = r;
    int d = 3 - 2 * r;
    drawCircle(x1, y1, x, y);
    while (y >= x)
    {
        
        x++;

        if (d > 0)
        {
            y--;
            d = d + 4 * (x - y) + 10;
        }
        else
            d = d + 4 * x + 6;
        drawCircle(x1, y1, x, y);
        delay(50);
    }
}

void ddaAlg(int x1,int y1,int x2,int y2)
{
    int dx=x2-x1;
    int dy=y2-y1;
    int steps=dx>dy?dx:dy;
    float xInc=dx/(float)steps;
    float yInc=dy/(float)steps;
    float x=x1;
    float y=y1;
    for(int i=0;i<=steps;i++)
    {
        putpixel(x,y,WHITE);
        x+=xInc;
        y+=yInc;
    }
    delay(500);
}
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);
    line(100,250,300,250);
    line(100,250,200,76);
    line(200,76,300,250);
    circle(200,193,57);
    circle(200,193,116);
    delay(50000000);
    closegraph();
    return 0;
} 
