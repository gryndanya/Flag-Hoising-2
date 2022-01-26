#include<iostream.h>
#include<stdlib.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>
#include<process.h>

int maxx=getmaxx();
int maxy=getmaxy();

void boundaryfill(int x,int y,int f_color,int b_color)
{
    if(getpixel(x,y)!=b_color && getpixel(x,y)!=f_color)
    {
	putpixel(x,y,f_color);
	boundaryfill(x+1,y,f_color,b_color);
	boundaryfill(x,y+1,f_color,b_color);
	boundaryfill(x-1,y,f_color,b_color);
	boundaryfill(x,y-1,f_color,b_color);
    }
}


void trees()
{
//background for first half
setfillstyle(1,9);
int p0[]={0,0,0,228,639,228,639,0,0,0};
drawpoly(4,p0);
fillpoly(4,p0);
	
//tree 1 part 1
setfillstyle(1,GREEN);
int p1[]={37,72,0,120,74,120,37,72}; //tree 1
drawpoly(4,p1);
fillpoly(4,p1);

//tree 1 part 2
setfillstyle(1,GREEN);
int p2[]={37,120,0,168,74,168,37,120}; 
drawpoly(4,p2);
fillpoly(4,p2);

//tree 1 part 3
setfillstyle(1,GREEN);
int p3[]={37,168,0,204,74,204,37,168}; //tree 1
drawpoly(4,p3);
fillpoly(4,p3);

//tree 1 trunk
setfillstyle(1,BROWN);
int p4[]={35,204,35,228,39,228,39,204,35,204}; //tree 1
drawpoly(4,p4);
fillpoly(4,p4);

//tree 2 part 1
setfillstyle(1,GREEN);
int p5[]={148,72,111,120,185,120,148,72}; //tree 1
drawpoly(4,p5);
fillpoly(4,p5);

//tree 2 part 2
setfillstyle(1,GREEN);
int p6[]={148,120,111,168,185,168,148,120}; 
drawpoly(4,p6);
fillpoly(4,p6);

//tree 3 part 3
setfillstyle(1,GREEN);
int p7[]={148,168,111,204,185,204,148,168}; //tree 1
drawpoly(4,p7);
fillpoly(4,p7);
//tree 2 trunk
setfillstyle(1,BROWN);
int p8[]={146,204,146,228,150,228,150,204,146,204}; //tree 1
drawpoly(4,p8);
fillpoly(4,p8);


}

void building()
{
	//building 1 outline
	setfillstyle(1,8);
int p0[]={222,108,222,228,333,228,333,108,222,108};
drawpoly(4,p0);
fillpoly(4,p0);

	//building 1 window 1
	setfillstyle(1,RED);
int p1[]={259,120,259,144,296,144,296,120,259,120};
drawpoly(4,p1);
fillpoly(4,p1);

	//building 1 window 2
	setfillstyle(1,RED);
int p2[]={259,168,259,192,296,192,296,168,259,168};
drawpoly(4,p2);
fillpoly(4,p2);

	//building 2 outline
	setfillstyle(1,8);
int p3[]={333,84,333,228,481,228,481,84,333,84};
drawpoly(4,p3);
fillpoly(4,p3);

	//building 2 window 1
	setfillstyle(1,RED);
int p4[]={370,96,370,120,444,120,444,96,370,96};
drawpoly(4,p4);
fillpoly(4,p4);

	//building 2 window 2
	setfillstyle(1,RED);
int p5[]={370,144,370,168,444,168,444,144,370,144};
drawpoly(4,p5);
fillpoly(4,p5);

//building 2 window 3
	setfillstyle(1,RED);
int p10[]={370,180,370,204,444,204,444,180,370,180};
drawpoly(4,p10);
fillpoly(4,p10);


	//building 3 outline
	setfillstyle(1,8);
int p6[]={481,62,481,228,639,228,639,62,481,60};
drawpoly(4,p6);
fillpoly(4,p6);

	//building 3 window 1
	setfillstyle(1,RED);
int p7[]={518,72,518,96,592,96,592,72,518,72};
drawpoly(4,p7);
fillpoly(4,p7);

	//building 3 window 2
	setfillstyle(1,RED);
int p8[]={518,120,518,144,592,144,592,120,518,120};
drawpoly(4,p8);
fillpoly(4,p8);


	//building 3 window 3
setfillstyle(1,RED);
int p9[]={518,168,518,192,592,192,592,168,518,168};
drawpoly(4,p9);
fillpoly(4,p9);

}

void decoration()
{
	//arc 1 subarc 1
	setfillstyle(1,12);   //lightred
	arc(111,-50,180,360,111);
	fillellipse(111,-50,111,111);

	//arc 1 subarc 2
	setfillstyle(1,14);  //yellow
	arc(111,-60,180,360,111);
	fillellipse(111,-60,111,111);

	//arc 2 subarc 1
	setfillstyle(1,12);
	arc(333,-70,180,360,130);
	fillellipse(333,-70,130,130);

	//arc 2 subarc 2
	setfillstyle(1,14);
	arc(333,-80,180,360,130);
	fillellipse(333,-80,130,130);

	//arc 3 subarc 1
	setfillstyle(1,12);
	arc(555,-70,180,360,130);
	fillellipse(555,-70,130,130);
	
	//arc 3 subarc 2
	setfillstyle(1,14);
	arc(555,-80,180,360,130);
	fillellipse(555,-80,130,130);
	
}
void movobjects()
{


	setcolor(WHITE);
	//background for second half
setfillstyle(1,12);
int p01[]={0,228,0,479,639,479,639,228,0,228};
drawpoly(4,p01);
fillpoly(4,p01);

	//pole of the flag
setfillstyle(1,WHITE);
int p2[]={67,240,67,456,74,456,74,240,67,240};
drawpoly(4,p2);
fillpoly(4,p2);

//figure 1
 //setcolor(CYAN);
 setfillstyle(1,CYAN);
circle(351,252,12);
fillellipse(351,252,12,12);
//boundaryfill(345,252,1,3);
//setcolor(15);
circle(345,250,2); //left eye
circle(357,250,2); // right eye
arc(351,256,180,360,2); //smile
line(351,264,351,288); //length of the figure
line(333,264,351,276); //left hand
line(351,276,370,264); //right hand
line(351,288,333,312); //left leg
line(351,288,370,312);  //right leg

//setcolor(CYAN); //2
setfillstyle(1,CYAN);
circle(425,252,12);
fillellipse(425,252,12,12);
//boundaryfill(419,252,1,3);
//setcolor(15);
circle(419,250,2); //left eye
circle(431,250,2); // right eye
arc(425,256,180,360,2); //smile
line(425,264,425,288); //length of the figure
line(407,288,425,276); //left hand
line(425,276,444,288); //right hand
line(425,288,407,312); //left leg
line(425,288,444,312);  //right leg

//setcolor(CYAN);  //3
setfillstyle(1,CYAN);
circle(499,252,12);
fillellipse(499,252,12,12);
//boundaryfill(493,252,1,3);
//setcolor(15);
circle(493,250,2); //left eye
circle(505,250,2); // right eye
arc(499,256,180,360,2); //smile
line(499,264,499,288); //length of the figure
line(481,288,499,276); //left hand
line(499,276,518,288); //right hand
line(499,288,481,312); //left leg
line(499,288,518,312);  //right leg

//setcolor(CYAN);  //4
setfillstyle(1,CYAN);
circle(573,252,12);
fillellipse(573,252,12,12);
//boundaryfill(567,252,1,3);
//setcolor(15);
circle(567,250,2); //left eye
circle(579,250,2); // right eye
arc(573,256,180,360,2); //smile
line(573,264,573,288); //length of the figure
line(555,288,573,276); //left hand
line(573,276,592,288); //right hand
line(573,288,555,312); //left leg
line(573,288,592,312);  //right leg

//setcolor(CYAN);  //5
setfillstyle(1,CYAN);
circle(388,276,12);
fillellipse(388,276,12,12);
//boundaryfill(382,276,1,3);
//setcolor(15);
circle(382,274,2); //left eye
circle(394,274,2); // right eye
arc(388,280,180,360,2); //smile
line(388,288,388,310); //length of the figure
line(370,312,388,300); //left hand
line(388,300,407,312); //right hand
line(388,312,370,336); //left leg
line(388,312,407,336);  //right leg

//setcolor(CYAN);  //6
setfillstyle(1,CYAN);
circle(462,276,12);
fillellipse(462,276,12,12);
//boundaryfill(456,276,1,3);
//setcolor(15);
circle(456,274,2); //left eye
circle(468,274,2); // right eye
arc(462,280,180,360,2); //smile
line(462,288,462,310); //length of the figure
line(444,312,462,300); //left hand
line(462,300,481,312); //right hand
line(462,312,444,336); //left leg
line(462,312,481,336);  //right leg

//setcolor(CYAN);  //7
setfillstyle(1,CYAN);
circle(536,276,12);
//boundaryfill(530,276,1,3);
//setcolor(15);
fillellipse(536,276,12,12);
circle(530,274,2); //left eye
circle(542,274,2); // right eye
arc(536,280,180,360,2); //smile
line(536,288,536,310); //length of the figure
line(518,312,536,300); //left hand
line(536,300,555,312); //right hand
line(536,312,518,336); //left leg
line(536,312,555,336);  //right leg

//setcolor(CYAN); //8
setfillstyle(1,CYAN);
circle(314,372,12);
fillellipse(314,372,12,12);
//boundaryfill(308,372,1,3);
//setcolor(15);
circle(308,370,2); //left eye
circle(320,370,2); // right eye
arc(314,376,180,360,2); //smile
line(314,384,314,444); //length of the figure
line(277,420,314,396); //left hand
line(314,396,351,420); //right hand
line(314,444,277,480); //left leg
line(314,444,351,480);  //right leg

//setcolor(CYAN);  //9
setfillstyle(1,CYAN);
circle(444,372,12);
fillellipse(444,372,12,12);
//boundaryfill(437,372,1,3);
//setcolor(15);
circle(438,370,2); //left eye
circle(449,370,2); // right eye
arc(444,376,180,360,2); //smile
line(444,384,444,444); //length of the figure
line(407,384,444,408); //left hand
line(444,408,481,384); //right hand
line(444,444,407,480); //left leg
line(444,444,481,480);  //right leg

//setcolor(CYAN);  //10
setfillstyle(1,CYAN);
circle(555,372,12);
//boundaryfill(548,372,1,3);
//setcolor(15);
fillellipse(555,372,12,12);
circle(549,370,2); //left eye
circle(560,370,2); // right eye
arc(555,376,180,360,2); //smile
line(555,384,555,444); //length of the figure
line(518,384,555,408); //left hand
line(555,408,592,384); //right hand
line(555,444,518,480); //left leg
line(555,444,592,480);  //right leg


setfillstyle(1,BROWN);
int p1[]={0,456,0,480,129,480,129,456,0,459};
drawpoly(4,p1);
fillpoly(4,p1);
}

void main()
{
int gd=DETECT,gm,i,j,w=0,k,x[15],y[15],r=10,theta,angle,xv,yv;
float pi=3.14,e=0,f=0,g=0,h=0,b=0,c=0,bc=0,cd=0,fc=0;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
trees();
building();
decoration();
movobjects();
while(w!=200)
{
	for(i=0,j=0;i<=200,j<2;i++,j++)
	{
	if(kbhit())
	   {
	exit(0);
	}
	movobjects();
	//figures();
	setcolor(YELLOW);
	//pulley
	circle(67,240,10);
	theta=pi*angle/180;
				theta=pi*angle/180;
				x[j]=67+r*cos(theta);
				y[j]=240+r*sin(theta);
				angle=angle+20;
				line(67,240,x[j],y[j]);
				xv=x[j];
				yv=y[j];
				setcolor(WHITE);
				int p3[]={74,440-w,74,445-w,111,445-w,111,440-w,74,440-w};
				setfillstyle(1,RED);
				drawpoly(4,p3);
				fillpoly(4,p3);

				int p4[]={74,445-w,74,450-w,111,450-w,111,445-w,74,445-w};
				setfillstyle(1,WHITE);
				drawpoly(4,p4);
				fillpoly(4,p4);

				int p5[]={74,450-w,74,456-w,111,456-w,111,450-w,74,450-w};
				setfillstyle(1,GREEN);
				drawpoly(4,p5);
				fillpoly(4,p5);

				setfillstyle(SOLID_FILL,BLUE);
				fillellipse(92,447-w,3,3);
				line(92,445-w,92,450-w);
				line(90,447-w,94,447-w);



	setcolor(WHITE);
	delay(30);
	w++;
	}
	}  // end of while loop

	while(i!=50)
	{
	if(kbhit())
	{
		exit(0);
	}


for(i=0;i<50;i++)
		{
			movobjects();
//figures();
setcolor(YELLOW);
//pulley
	circle(67,240,10);
	line(67,240,xv,yv);

setcolor(WHITE);
		    e=74+(6*0.6*i);
		    f=240+(1*0.3*i);
					int p5[]={74,235,74,f,e,f,e,235};
					setfillstyle(1,RED);
					drawpoly(4,p5);
					fillpoly(4,p5);

					g=74+(6*0.6*i);
		    h=254+(1*0.4*i);
					int p6[]={74,254,74,h,g,h,g,254};
					setfillstyle(1,WHITE);
					drawpoly(4,p6);
					fillpoly(4,p6);


			b=74+(6*0.6*i);
		    c=273+(1*0.4*i);
					int p7[]={74,273,74,c,b,c,b,273};
					setfillstyle(1,GREEN);
					drawpoly(4,p7);
					fillpoly(4,p7);

			setfillstyle(SOLID_FILL,BLUE);
			bc=92+(4*0.37*i);
			cd=247+(1*0.38*i);
			fc=fc+0.21;
				fillellipse(bc,cd,fc,fc);
				//line(92,445-w,92,450-w);
				//line(90,447-w,94,447-w);

					delay(40);
				}
}

line(bc,cd-fc,bc,cd+fc);
line(bc-fc,cd,bc+fc,cd);
line(bc+6,cd+6,bc-6,cd-6);
line(bc-6,cd+6,bc+6,cd-6);
getch();
}