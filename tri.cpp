/*#include<iostream>
#include<graphics.h>
#include<cmath>
using namespace std;
int main()
{
    int gd= DETECT, gm;
    initgraph(&gd,&gm, NULL);
    int tri[3][3];
    int b[3][3],c[3][3];
    tri[0][0]=50;
    tri[0][1]=40;
    tri[1][0]=100;
    tri[1][1]=40;
    tri[2][0]=75;
    tri[2][1]=20;
    tri[0][2]=tri[1][2]=tri[2][2]=0;

    line(tri[0][0],tri[0][1],tri[1][0],tri[1][1]);
    line(tri[1][0],tri[1][1],tri[2][0],tri[2][1]);
    line(tri[0][0],tri[0][1],tri[2][0],tri[2][1]);
    delay(500);

    int ch,ch1;
    cout<<"1. Equilateral triangle\n2. Rhombus ";
    cout<<"Enter your choice :";
    cin>>ch;
    cout<<"1. Translation\n2. Rotation\n3. Scaling";
    cin>>ch1;
    switch(ch)
    {
        case 1: switch(ch1)
                {

                        case 1: {
								cout<<"enter value for tx,ty";
								cin>>b[2][0]>>b[2][1];
								b[0][0]=b[1][1]=b[2][2]=1;
								b[0][1]=b[0][2]=b[1][0]=b[1][2]=0;

								for(int i=0;i<3;i++)
								{
									for(int j=0;j<3;j++)
										{
											c[i][j]=0;
											for(int k=0;k<3;k++)
											{
												c[i][j]+=tri[i][k]*b[k][j];

											}

										}

								}
								setcolor(BLUE);
								line(c[0][0],c[0][1],c[1][0],c[1][1]);
								line(c[1][0],c[1][1],c[2][0],c[2][1]);
								line(c[2][0],c[2][1],c[0][0],c[0][1]);
							delay(50000);
							}break;
							closegraph();
                }



    }


}

*/

#include<iostream>
#include<graphics.h>
#include<cmath>
using namespace std;

int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,NULL);
	int tri[3][3];
	int d;
    int b[3][3],c[3][3];
    tri[0][0]=50;
    tri[0][1]=40;
    tri[1][0]=100;
    tri[1][1]=40;
    tri[2][0]=75;
    tri[2][1]=20;
    tri[0][2]=tri[1][2]=tri[2][2]=0;
	setcolor(RED);
	line(tri[0][0],tri[0][1],tri[1][0],tri[1][1]);
	line(tri[1][0],tri[1][1],tri[2][0],tri[2][1]);
	line(tri[2][0],tri[2][1],tri[0][0],tri[0][1]);

			delay(500);
			cout<<"Enter your choice\n1.Translation\n2.Scaling\n3.Rotation";
			cin>>d;
			switch(d)
			{
				case 1:
					{
								int b[3][3],c[3][3];
								cout<<"enter value for tx,ty";
								cin>>b[2][0]>>b[2][1];
								b[0][0]=b[1][1]=b[2][2]=1;
								b[0][1]=b[0][2]=b[1][0]=b[1][2]=0;

								for(int i=0;i<3;i++)
								{
									for(int j=0;j<3;j++)
										{
											c[i][j]=0;
											for(int k=0;k<3;k++)
											{
												c[i][j]+=tri[i][k]*b[k][j];

											}

										}

								}
								setcolor(BLUE);
								line(c[0][0],c[0][1],c[1][0],c[1][1]);
								line(c[1][0],c[1][1],c[2][0],c[2][1]);
								line(c[2][0],c[2][1],c[0][0],c[0][1]);
							delay(20000);


					}break;

					/*case 2:
					{
							float sx,sy;
							float b[3][3],c[3][3];
							cout<<"enter scaling factor Sx and Sy";
							cin>>b[0][0]>>b[1][1];
							b[2][2]=1;
							b[0][1]=b[0][2]=b[1][0]=b[1][2]=b[2][0]=b[2][1]=0;
							for(int i=0;i<3;i++)
								{
									for(int j=0;j<3;j++)
										{
											c[i][j]=0;
											for(int k=0;k<3;k++)
											{
												c[i][j]+=a[i][k]*b[k][j];

											}

										}

								}
								setcolor(BLUE);
								line(c[0][0],c[0][1],c[1][0],c[1][1]);
								line(c[1][0],c[1][1],c[2][0],c[2][1]);
								line(c[2][0],c[2][1],c[0][0],c[0][1]);
							delay(50000);



					}		break;

					case 3:
					{
						float z,A;
						float b[3][3];
						float c[3][3];
						cout<<"enter the angle";
						cin>>z;

						A=(z*3.14)/180;
						b[2][2]=1;
						b[0][2]=b[1][2]=b[2][0]=b[2][1]=0;
						b[0][0]=b[1][1]=cos(A);
						b[0][1]=(-sin(A));
						b[1][0]=sin(A);



					for(int i=0;i<3;i++)
								{
									for(int j=0;j<3;j++)
										{
											c[i][j]=0;
											for(int k=0;k<3;k++)
											{
												c[i][j]+=a[i][k]*b[k][j];

											}

										}

								}
								setcolor(BLUE);
								line(c[0][0],c[0][1],c[1][0],c[1][1]);
								line(c[1][0],c[1][1],c[2][0],c[2][1]);
								line(c[2][0],c[2][1],c[0][0],c[0][1]);
							delay(50000);



					}		break;

                    */

			closegraph();


}}
