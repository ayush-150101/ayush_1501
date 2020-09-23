#include "HDR.cpp"
#include "Graph.cpp"
//#include "Start.cpp"


void loon(int &x,int &y,int i)
{
int ct;
/*y=getmaxy()-50;
x=getmaxx()-50;*/
Q:
ct++;
if(ct%30==0)
sound(random(1000)+200);
y--;
setcolor(RED);
for(i=0;i<15;i++)
circle(x,y,i);
delay(10);
setcolor(BLACK);
for(i=0;i<15;i++)
circle(x,y,i);
if(y<=75)
y=getmaxy()-50;
if(kbhit())
goto P;
goto Q;

P:

}

void main()
{
call();int x=0,y=62,a=getmaxx()-50,b=getmaxy()-50,i,cnt=0,co=0;char c;
setcolor(CYAN);
x=150;co=300;
for(i=0;i<6;i++)
{
setcolor(CYAN);
settextstyle(7,0,i);
outtextxy(x,150,"SHOOT THE BALLOON ");
sound(co);
delay(350);
setcolor(BLACK);
settextstyle(7,0,i);
outtextxy(x,150,"SHOOT THE BALLOON ");
x=x-20;
co=co+200;
}
nosound();
co=0;
setcolor(CYAN);
settextstyle(7,0,i-1);
outtextxy(x+20,150,"SHOOT THE BALLOON ");

settextstyle(2,0,5);
S:
setcolor(YELLOW);
outtextxy(200,250,"PRESS ANY KEY TO CONTINUE......");
delay(350);
setcolor(BLACK);
outtextxy(200,250,"PRESS ANY KEY TO CONTINUE......");
delay(350);
if(kbhit())
goto R;
goto S;

R:
getch();
setcolor(BLACK);
settextstyle(7,0,i-1);
outtextxy(x+20,150,"SHOOT THE BALLOON >>-->");
settextstyle(2,0,5);
setcolor(BLACK);
outtextxy(200,250,"PRESS ANY KEY TO CONTINUE......");
B:
settextstyle(2,0,7);
setcolor(CYAN);
outtextxy(150,100,"CONTROLS");
setcolor(RED);
settextstyle(2,0,5);
outtextxy(100,170,"PRESS   <ENTER>  TO SHOOT THE ARROW");
outtextxy(100,200,"PRESS   <  W  >  TO SHIFT CONTROL UP");
outtextxy(100,230,"PRESS   <  S  >  TO SHIFT CONTROL DOWN");

setcolor(YELLOW);
outtextxy(200,300,"PRESS ANY KEY TO CONTINUE......");
delay(350);
setcolor(BLACK);
outtextxy(200,300,"PRESS ANY KEY TO CONTINUE......");
delay(350);
if(kbhit())
goto K;
goto B;


K:
getch();
settextstyle(2,0,7);
setcolor(BLACK);
outtextxy(150,100,"CONTROLS");
setcolor(BLACK);
settextstyle(2,0,5);
outtextxy(100,170,"PRESS   <ENTER>  TO SHOOT THE ARROW");
outtextxy(100,200,"PRESS   <  W  >  TO SHIFT CONTROL UP");
outtextxy(100,230,"PRESS   <  S  >  TO SHIFT CONTROL DOWN");


setcolor(BLACK);
outtextxy(200,300,"PRESS ANY KEY TO CONTINUE......");

setcolor(GREEN);
int m=50;
for(i=0;i<10;i++)
{
line(0,m,getmaxx(),m);
m++;
}
randomize();
setcolor(6);
settextstyle(2,0,4);
outtextxy(20,35,"ARROWS LEFT - 10");
outtextxy(540,35,"SCORE - 0");
Q:
       setcolor(CYAN);
settextstyle(7,0,4);
outtextxy(150,15,"SHOOT THE BALLOON");
settextstyle(2,0,4);
loon(a,b,i);

if(kbhit())
{
c=getch();
switch(c)
{case 'w': setcolor(BLACK);
	   outtextxy(10,y+10,">");
	   if(y>62)
	   y=y-10;
	   else
	   y=getmaxy()-10;
	   setcolor(GREEN);
	   outtextxy(10,y+10,">");
	   nosound();
	   goto Q;
case 's':  setcolor(BLACK);
	   outtextxy(10,y+10,">");
	   if((y+10)<getmaxy()-10)
	   y=y+10;
	   else
	   y=60;
	   setcolor(GREEN);
	   outtextxy(10,y+10,">");
	   goto Q;
case '\r':co++;
	  switch(co)
	  {
	  case 1:setcolor(BLACK);
	  outtextxy(20,35,"ARROWS LEFT - 10");
	  setcolor(6);
	  outtextxy(20,35,"ARROWS LEFT - 9" );break;

	  case 2:setcolor(BLACK);
	  outtextxy(20,35,"ARROWS LEFT - 9");
	  setcolor(6);
	  outtextxy(20,35,"ARROWS LEFT - 8" );break;

	  case 3:setcolor(BLACK);
	  outtextxy(20,35,"ARROWS LEFT - 8");
	  setcolor(6);
	  outtextxy(20,35,"ARROWS LEFT - 7" );break;

	  case 4:setcolor(BLACK);
	  outtextxy(20,35,"ARROWS LEFT - 7");
	  setcolor(6);
	  outtextxy(20,35,"ARROWS LEFT - 6" );break;

	  case 5:setcolor(BLACK);
	  outtextxy(20,35,"ARROWS LEFT - 6");
	  setcolor(6);
	  outtextxy(20,35,"ARROWS LEFT - 5" );break;

	  case 6:setcolor(BLACK);
	  outtextxy(20,35,"ARROWS LEFT - 5");
	  setcolor(6);
	  outtextxy(20,35,"ARROWS LEFT - 4" );break;

	  case 7:setcolor(BLACK);
	  outtextxy(20,35,"ARROWS LEFT - 4");
	  setcolor(6);
	  outtextxy(20,35,"ARROWS LEFT - 3" );break;

	  case 8:setcolor(BLACK);
	  outtextxy(20,35,"ARROWS LEFT - 3");
	  setcolor(6);
	  outtextxy(20,35,"ARROWS LEFT - 2" );break;

	  case 9:setcolor(BLACK);
	  outtextxy(20,35,"ARROWS LEFT - 2");
	  setcolor(6);
	  outtextxy(20,35,"ARROWS LEFT - 1" );break;

	  case 10:setcolor(BLACK);
	  outtextxy(20,35,"ARROWS LEFT - 1");
	  setcolor(6);
	  outtextxy(20,35,"ARROWS LEFT - 0");break;
	  }

	  while(x<getmaxx())
	  {
	  /*textcolor(CYAN);
	  gotoxy(0,5);
	  cout<<"SCORE - "<<cnt;*/
	  x=x+3;
	  setcolor(GREEN);
	  if(x%30==0)
	  sound(random(2000)+200);
	  outtextxy(10,y+10,">");
	  outtextxy(x+20,y+10,"-->");
	  setcolor(YELLOW);
	  outtextxy(x+5,y+10," >");
	  outtextxy(x+7,y+10,">");
	  delay(5);
	  b--;
	  setcolor(RED);
	  for(i=0;i<15;i++)
	  circle(a,b,i);
	  delay(5);
	  setcolor(BLACK);
	  for(i=0;i<15;i++)
	  circle(a,b,i);
	  if(b<=75)
	  b=getmaxy()-50;
	  if(kbhit())
	  setcolor(BLACK);
	  else
	  setcolor(BLACK);
	  outtextxy(x+20,y+10,"-->");
	  outtextxy(x+5,y+10," >");
	  outtextxy(x+7,y+10,">");

	  if(((x+20)>=(a-10)&&(x+20)<=(a+10))&&((y+10)>=(b-10)&&(y+10)<=(b+10)))
	  {
	  cnt++;
	  setcolor(YELLOW);
	  settextstyle(7,0,3);
	  outtextxy(a-100,b,"BOOOOM!");
	  sound(100);
	  delay(400);
	  nosound();
	  setcolor(BLACK);
	  settextstyle(7,0,3);
	  outtextxy(a-100,b,"BOOOOM!");
	  b=getmaxy()-50;
	  settextstyle(2,0,4);
	  switch(cnt)
	  {
	  case 1:setcolor(BLACK);
	  outtextxy(540,35,"SCORE - 0");
	  setcolor(6);
	  outtextxy(540,35,"SCORE - 1" );break;

	  case 2:setcolor(BLACK);
	  outtextxy(540,35,"SCORE - 1");
	  setcolor(6);
	  outtextxy(540,35,"SCORE - 2" );break;

	  case 3:setcolor(BLACK);
	  outtextxy(540,35,"SCORE - 2");
	  setcolor(6);
	  outtextxy(540,35,"SCORE - 3" );break;

	  case 4:setcolor(BLACK);
	  outtextxy(540,35,"SCORE - 3");
	  setcolor(6);
	  outtextxy(540,35,"SCORE - 4");break;

	  case 5:setcolor(BLACK);
	  outtextxy(540,35,"SCORE - 4");
	  setcolor(6);
	  outtextxy(540,35,"SCORE - 5" );break;

	  case 6:setcolor(BLACK);
	  outtextxy(540,35,"SCORE - 5");
	  setcolor(6);
	  outtextxy(540,35,"SCORE - 6");break;

	  case 7:setcolor(BLACK);
	  outtextxy(540,35,"SCORE - 6");
	  setcolor(6);
	  outtextxy(540,35,"SCORE - 7" );break;

	  case 8:setcolor(BLACK);
	  outtextxy(540,35,"SCORE - 7");
	  setcolor(6);
	  outtextxy(540,35,"SCORE - 8" );break;

	  case 9:setcolor(BLACK);
	  outtextxy(540,35,"SCORE - 8");
	  setcolor(6);
	  outtextxy(540,35,"SCORE - 9" );break;

	  case 10:setcolor(BLACK);
	  outtextxy(540,35,"SCORE - 9");
	  setcolor(6);
	  outtextxy(540,35,"SCORE - 10");break;
	  }
	  settextstyle(2,0,4);
	  }

	  }
	  if(co==10)
	  {
	  for(i=0;i<getmaxy();i++)
	  {setcolor(BLACK);
	  line(0,i,getmaxx(),i);
	  }
	  T:
	  settextstyle(7,0,5);
	  setcolor(YELLOW);
	  sound(random(500)+100);
	  delay(300);
	  outtextxy(getmaxx()/2-100,getmaxy()/2-50,"GAME OVER!!");
	  setcolor(GREEN);
	  settextstyle(8,0,3);
	  switch(cnt)
	  {
	  case 0:outtextxy(200,250,"SCORE - 0 ");break;
	  case 1:outtextxy(200,250,"SCORE - 1 ");break;
	  case 2:outtextxy(200,250,"SCORE - 2 ");break;
	  case 3:outtextxy(200,250,"SCORE - 3 ");break;
	  case 4:outtextxy(200,250,"SCORE - 4 ");break;
	  case 5:outtextxy(200,250,"SCORE - 5 ");break;
	  case 6:outtextxy(200,250,"SCORE - 6 ");break;
	  case 7:outtextxy(200,250,"SCORE - 7 ");break;
	  case 8:outtextxy(200,250,"SCORE - 8 ");break;
	  case 9:outtextxy(200,250,"SCORE - 9 ");break;
	  case 10:outtextxy(200,250,"SCORE - 10");break;
	  //case 0:outtextxy(200,200,"SCORE - 0 ";break;
	  }

	  if(kbhit())
	  goto P;
	  goto T;
	  }
	  x=0;
	  nosound();
	  goto Q;
default:nosound();goto P;
}
}
goto Q;
P:
nosound();
}