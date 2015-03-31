#include<stdio.h>
#include<stdlib.h>
#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<string.h>
#include<time.h>

class anis
{
int x,y,button;
char name[20],add[40],email[20],ph[10],proffe[20];
 public:
int welcome();
 int ques1();
int user();
int next();
int info();
};

void bye(int t);
  void rect();
int anis1(int count);
int mouseini();
int hidemp();
void showmp();
int setmp();
int getmp(int *button,int *x,int *y);

void ans();
void load();
void lose();

int anis::welcome()
{
 int i;
  int j=30;
  hidemp();
 settextstyle(7,0,4) ;
  for(i=480;i>=50;i-=5)
     {
	 cleardevice();
	 rectangle(10,450,630,30);
	 rectangle(20,440,620,40);
	 setcolor(i/4);
	 sound(i*10);
	 outtextxy(i,i+20,"Welcome to game Dus Ka Dam");
	 delay(40);
     }
 nosound();
 delay(6000);
 cleardevice();
 char *rules[]={  "rules of game",
		  "*YOU HAVE TO FACE 5 QUESTINON AT 5 LEVEL",
		  "*FOR 1st QUESTION YOU HAVE WINDOW OF 40",
		  "*WINDOW DECREASES BY 10 AT EACH LEVEL",
		  "PRESS '+' FOR MOVING FORWORD & '-' BACKWORD",
		  "PRESS 'M' FOR FIX YOUR ANSWER",
		  "EACH CORRECT ANSWER BRINGS YOU IN NEXT LEVEL",
		  "*WRONG ANSWER THROUGH YOU OUT OF GAME",
		  "*FIRST QUESTION FOR 10,000Rs & INCREASES BY 10",
		  "FOR LAST QUESTION OF 10 CAROD CORRECT ANS NEEDED",
		  "*THINCK CAREFULLY & GIVE CORRECT ANSWER",
		  };
   setcolor(5);
   settextstyle(3,0,2);
   for(i=0;i<12;i++)
   {
    delay(2000);
    sound(2000);
    delay(1000);
    outtextxy(30,j,rules[i]);
   nosound();
    j=j+35;
    }
    delay(6000);
    cleardevice();
    getch();
    info();
    getch();
    for(i=480;i>50;i-=5)
    {
    cleardevice();
     rectangle(10,450,630,30);
     rectangle(20,440,620,40);
    settextstyle(3,0,7);
    setcolor(i/4);
    outtextxy(i,i+20,"*ALL THE BEST*");
    delay(50);
    }
     outtextxy(150,200,name);
     bar3d(190,320,400,380,3,2);
     settextstyle(3,0,4);
     outtextxy(230,340,"PLAY NOW!");
while(1)
{
showmp();
getmp(&button,&x,&y);
if(x>=190 && x<=380 && y>=320 && y<=380 && button==1)
{
return(0);
}
}
}

int anis::ques1()
{
int a,i;
static int count=1;
char msg[30],*que1[]={"How many % indian pople thick that love marrige",
		"better than arrenge marrige?",
		"How many % men says that they have even drink",
		"any bear?",
		"how many % indian peopel live with pilosophy",
		"that 'beat other people  by anyway & win'?"};
rect();
setcolor(3);
settextstyle(1,0,3);
outtextxy(15,210,name);
outtextxy(550,210,"'M' TO FIX ANSWER");
settextstyle(3,0,3);
hidemp();
switch(count)
{
case 1:
	outtextxy(60,235,que1[0]);
	outtextxy(100,280,que1[1]);
	rectangle(35,25,36,36);
	delay(3000);
	a=anis1(count);
	rect();
	delay(3000);
	if(65<=a&&(a-40)<=65)
	{
	count++;
	cleardevice();
	settextstyle(7,0,4) ;
	for(i=560;i>=180;i-=5)
     {
	 cleardevice();
	 ans();
	 setcolor(i/4);
	 sound(i*10);
	outtextxy(i,i+20,"YOU WON 10,000Rs");
	 delay(40);
      }

      nosound();
      delay(2000);
      }
     else
     {
	cleardevice();
      lose();
      sound(200);
      delay(4000);
      nosound();
      bye(1);
     }
 cleardevice();
      break;
 case 2:
	outtextxy(60,235,que1[2]);
	outtextxy(150,280,que1[3]);
	delay(2000);
	a=anis1(count);
	rect();
	delay(3000);
	if(a>=48&&(a-30)<=48)
	{
	 count++;
	 cleardevice();
	 settextstyle(7,0,4) ;
	for(i=560;i>=180;i-=5)
	  {
	   cleardevice();
	   ans();
	   setcolor(i/4);
	   sound(i*10);
	   outtextxy(i,i+20,"YOU WON 1,00,000Rs");
	   delay(40);
	  }
	nosound();
	delay(2000);
       }
     else
     {
	cleardevice();
      lose();
      sound(200);
      delay(4000);
      nosound();
      bye(2);
     }
 cleardevice();
	 break;
 case 3:
	outtextxy(60,235,que1[4]);
	outtextxy(60,280,que1[5]);
	window(35,25,36,36);
       a=anis1(count) ;
	rect();
	delay(2000);
	if(a>=32&&(a-20)<=32)
	{
	 count++;
	 cleardevice();
	 settextstyle(7,0,4) ;
	 for(i=560;i>=180;i-=5)
	  {
	   cleardevice();
	   ans();
	   setcolor(i/4);
	   sound(i*10);
	   outtextxy(i,i+20,"YOU WON 1,00,000Rs");
	   delay(40);
	  }
	nosound();
	delay(2000);
       }
    else
      {
	cleardevice();
       lose();
      sound(200);
      delay(4000);
      nosound();
      bye(3);
      }
 cleardevice();          rand
	break;
   case 4:
	outtextxy(60,235,que1[0]);
	outtextxy(100,280,que1[1]);
	rectangle(35,25,36,36);
	delay(3000);
	a=anis1(count);
	rect();
	delay(3000);
	if(78<=a&&(a-10)<=78)
	{
	count++;
	cleardevice();
	settextstyle(7,0,4) ;
	for(i=560;i>=180;i-=5)
     {
	 cleardevice();
	 ans();
	 setcolor(i/4);
	 sound(i*10);
	outtextxy(i,i+20,"YOU WON 1,00,00,000Rs");
	 delay(40);
      }

      nosound();
      delay(2000);
      }
     else
     {
	cleardevice();
      lose();
      sound(200);
      delay(4000);
      nosound();
      bye(4);
     }
 cleardevice();
      break;
      case 5:
	outtextxy(60,235,que1[0]);
	outtextxy(100,280,que1[1]);
	rectangle(35,25,36,36);
	delay(3000);
	a=anis1(count);
	rect();
	delay(3000);
	if(58==a)
	{
	count++;
	cleardevice();
	settextstyle(7,0,4) ;
	for(i=560;i>=180;i-=5)
     {
	 cleardevice();
	 ans();
	 setcolor(i/4);
	 sound(i*10);
	outtextxy(i,i+20,"YOU WON 10,00,00,000Rs");
	 delay(40);
      }

      nosound();
      delay(2000);
      }
     else
     {
	cleardevice();
      lose();
      sound(200);
      delay(4000);
      nosound();
      bye(1);
     }
 cleardevice();
      break;
 default:
    cout<<"wrong choice";

}
return(count);
}

void lose()
{
int i;
for(i=400;i>50;i-=5)
{
cleardevice();
 delay(10);
 sound(1000);
setcolor(4);
settextstyle(3,0,4);
outtextxy(140,180,"BAD LUCK WRONG ANSWER");
outtextxy(116,250,"THANCK YOU FOR PLANYING GAME");
 nosound();
}
}

void rect()
{
int i;
rectangle(10,10,630,470);
rectangle(15,15,625,465);
line(10,230,630,230);
line(10,350,630,350);
rectangle(210,380,350,420);
rectangle(200,370,360,430);
}
void ans()
{
    arc(20,440,0,90,100);
    arc(620,40,180,270,100);
    circle(100,80,30);
    circle(350,80,20);
    circle(530,330,25);
    circle(80,200,10);
    ellipse(300,400,0,360,20,30);
    rectangle(10,450,630,30);
    rectangle(20,440,620,40);
}

int anis::user()
{
int sa[8]={110,110,490,110,490,390,110,390};
clrscr();
setcolor(4);
setbkcolor(4);
rectangle(100,100,500,400);
floodfill(13,13,15);
setfillstyle(1,2);
fillpoly(4,sa);
rectangle(95,95,505,405);
rectangle(90,90,510,410);
rectangle(85,85,515,415);
bar3d(155,300,210,320,2,3);
bar3d(390,300,455,320,2,3);
int i;
setfillstyle(1,1);
floodfill(170,305,4);
floodfill(400,305,4);
outtextxy(170,305,"OK");
outtextxy(400,305,"CANSEL");
outtextxy(130,130,"ENTER NAME:");
outtextxy(130,165,"ENTER ADDRESS:");
outtextxy(130,197,"ENTER YOUR PROFFETION:");
outtextxy(130,230,"ENTER EMAIL ADDRESS:");
outtextxy(130,262,"ENTER PHONE No.:");
gotoxy(32,9);
gets(name);
gotoxy(32,11);
gets(add);
gotoxy(39,13);
gets(proffe);
gotoxy(39,15);
gets(email);
gotoxy(35,17);
gets(ph);
if(strcmp(name,"")==0)
{
   do
    {
    sound(5000);
    delay(1500);
     nosound();
    outtextxy(170,366,"PLEASE ENTER ALL INFORMATION");
    gotoxy(32,9);
    gets(name);
    } while(strcmp(name,"")==0);
}
if(strcmp(add,"")==0)
{
   do
    {
    sound(5000);
     delay(1500);
     nosound();
    outtextxy(170,366,"PLEASE ENTER ALL INFORMATION");
    gotoxy(32,11);
    gets(add);
    } while(strcmp(add,"")==0);
}
if(strcmp(proffe,"")==0)
{
   do
    {
    sound(5000);
     delay(1500);
     nosound();
    outtextxy(170,366,"PLEASE ENTER ALL INFORMATION");
    gotoxy(39,13);
    gets(proffe);
    } while(strcmp(proffe,"")==0);
}
if(strcmp(email,"")==0)
{
   do
    {
    sound(5000);
     delay(1500);
     nosound();
    outtextxy(170,366,"PLEASE ENTER ALL INFORMATION");
    gotoxy(39,15);
    gets(email);
    } while(strcmp(email,"")==0);
}
if(strcmp(ph,"")==0)
{
   do
    {
    sound(5000);
     delay(1500);
     nosound();
    outtextxy(170,366,"PLEASE ENTER ALL INFORMATION");
    gotoxy(35,17);
    gets(ph);
    } while(strcmp(ph,"")==0);
}
setbkcolor(0);

while(1)
{
showmp();
getmp(&button,&x,&y);
if(x>=155 && x<=210 && y>=300 && y<=320 && button==1)
{
return(0);
}
else if(x>=390 && x<=455 && y>=300 && y<=320 && button==1)
{
return(1);
}
}
}

void load()
{

int x1,x2,y1,y2,y=1;
setcolor(15);
 rectangle(170,307,470,332);
 int s=30,w;
 gotoxy(23,17);
 cout<<"LOADING..... ";
 x2=171;
 y1=308;
 y2=331;
 for (x1=171;x1<470;x1++)
 {
  setcolor(4);
  line (x1,y1,x2,y2);
  w=(x1-169)/3;
   gotoxy(35,17);
   cout<<w<<"%";
  if (x2>270)
   s=45;
   if(x2>370)
    s=10;
  if(x2==320)
    delay(999);
   else
   delay(s);
   x2++;
   y++;
   s++;
 }
 delay(800);
 }


int mouseini()
{
 union REGS i,o;
 i.x.ax=0;
 int86(0x33,&i,&o);
 return(o.x.ax);
}
void showmp()
{
 union REGS i,o;
 i.x.ax=1;
 int86(0x33,&i,&o);

}

int hidemp()
{
 union REGS i,o;
 i.x.ax=2;
 int86(0x33,&i,&o);
 return 0;
}

int getmp(int *button,int *x,int *y)
{
 union REGS i,o;
 i.x.ax=3;
 int86(0x33,&i,&o);
 *button=o.x.bx;
 *x=o.x.cx;
 *y=o.x.dx;
 return 0;
}

int setmp()
{
 union REGS i,o;
 i.x.ax=4;
 int mx=getmaxx(),my=getmaxy();
 i.x.cx=(3*mx/4)+20;
 i.x.dx=(3*my/4)+20;
 int86(0x33,&i,&o);
 return 0;
}
int anis1(int count)
{
int x1=200,x2=200,y1=100,y2=130,up=0,dw=0;
  int a1,a2,b1=100,b2=130;
  char c;
  while(1)
  {
  setcolor(4);
   rectangle(200,95,400,135);
   rectangle(197,92,403,138);
   if(count!=5)
    { gotoxy(34,26);
     cout<<"\r\t\t\t\t";
     cout<<dw<<" TO ";
     cout<<up<<" ";
     rect();
     }
    else
    {
	gotoxy(34,26);
     cout<<"\r\t\t\t\t";
     cout<<up;
     rect();
    }
  c=getch();
  gotoxy(34,26);
   if(c==43&&x1<=396)
  {
    setcolor(2);
   line(x1,y1,x2,y2);
   setcolor(0);
   line(a1,b1,a2,b2);
   x1+=2;x2+=2;
   up=(x1-200)/2;
    switch(count)
   {
   case 1:
     a1=x1-80;
     a2=x2-80;
     if(up>40)
	 { dw=up-40; }
     else
	 {dw=0;}
       break;
   case 2:
     a1=x1-60;
     a2=x2-60;
       if(up>30)
	 { dw=up-30; }
       else
	 {dw=0;}

     break;
      case 3:
       a1=x1-40;
     a2=x2-40;
     if(up>20)
	 { dw=up-20; }
     else
	 {dw=0;}

     break;
    case 4:
     a1=x1-20;
     a2=x2-20;
       if(up>10)
	 { dw=up-10; }
       else
	 {dw=0;}
       break;
    case 5:
     a1=x1-4;
     a2=x2-4;
     break;
    default:
    cout<<"wrong sia";
  }
 }
   if(c==45&&x1>=206)
   {
     setcolor(0);
    line(x1,y1,x2,y2);
    setcolor(2);
    if(a1>=200)
	  {line(a1,b1,a2,b2);}
    up=(x1-200)/2;
    x1=x1-2;x2=x2-2;
     switch(count)
   {
   case 1:
     a1=x1-80;
     a2=x2-80;
     if(up>40)
	{ dw=up-40; }
     else
	 {dw=0;}
       break;
   case 2:
      a1=x1-60;
      a2=x2-60;
       if(up>30)
	 { dw=up-30; }
       else
	 {dw=0;}
       break;
   case 3:
	a1=x1-40;
	a2=x2-40;
       if(up>20)
	 { dw=up-20; }
       else
	 {dw=0;}

	break;
   case 4:
     a1=x1-20;
     a2=x2-20;
     if(up>10)
	{ dw=up-10; }
     else
	 {dw=0;}

     break;
   case 5:
     a1=x1-4;
     a2=x2-4;

     break;
   default:
   cout<<"wrong sia";
   }
   }
   if(c==109||c==77)
   {
    return(up);
   }
   }
}

int anis::next()
{
setcolor(4);
rectangle(110,100,510,400);
rectangle(100,90,520,410);
rectangle(95,85,525,415);
rectangle(90,80,530,420);
setfillstyle(1,1);
floodfill(255,226,4);
bar3d(190,145,270,175,3,2);
bar3d(390,145,460,175,3,2);
setfillstyle(1,2);
floodfill(200,320,4);
floodfill(400,320,4);
settextstyle(1,0,3);
outtextxy(150,250,"DO YOU WANT TO CONTINUE");
outtextxy(260,290,"OR");
outtextxy(150,330,"LEAVE WITH WINING MONEY");
settextstyle(1,0,1);
outtextxy(193,145,"contineu");
outtextxy(395,145,"LEAVE");
  setmp();
while(1)
{
  showmp();
getmp(&button,&x,&y);
if(x>=190 && x<=270 && y>=145 && y<=175 && button==1)
{
return(0);
}
else if(x>=390 && x<=460 && y>=145 && y<=175 && button==1)
{
return(1);
}
}
}
int anis::info()
{
setcolor(4);
rectangle(50,50,550,450);
rectangle(45,45,555,455);
rectangle(45,45,555,455);
setfillstyle(7,2);
floodfill(300,300,4);
settextstyle(3,0,5);
setcolor(15);
outtextxy(100,100,"TODAY'S CONTISTANT");
outtextxy(130,170,name);
outtextxy(130,230,proffe);
outtextxy(130,300,"FROM:");
outtextxy(140,380,add);
getch();
return(0);
}

void bye(int t)
{
cleardevice();
setcolor(2);
settextstyle(3,0,4);
outtextxy(80,80,"THANK YOU FOR PLAING");
outtextxy(80,120,"YOU BRING FROM HERE");
if(t==1)
{
outtextxy(80,160,"00Rs");
}
else if(t==2)
{
outtextxy(80,160,"10,000Rs");
}
else if(t==3)
{
outtextxy(80,160,"1,00,000Rs");
}
else if(t==4)
{
outtextxy(80,160,"10,00,000Rs");
}
else if(t==5)
{
outtextxy(80,160,"1,00,00,000Rs");
}
else if(t==6)
{
outtextxy(80,160,"10,00,00,000Rs");
}
delay(5000);
cleardevice();
outtextxy(100,100,"submitted by");
outtextxy(100,140,"SAGAR");
outtextxy(100,180,"DANANJAY");
outtextxy(100,220,"RAJDATT");
outtextxy(100,260,"MAHESHA");
outtextxy(100,300,"ANIS");
getch();
exit(0);
}

int main()
{
  anis a;
  char name[20],pass[5],*password,as[4];
  int gdriver = DETECT, gmode, errorcode;
  int count=0,ac,z=1,t,i,ani,an,ab;
  /* initialize graphics mode */
  initgraph(&gdriver, &gmode, "c:/tc//bgi");
 do
  {
    cout<<"\n\tENTER NAME:";
    cin>>name;
    cout<<"\n\tENTER PASSWORD:";
    for(i=0;i<4;i++)
    {
    as[i]=getch();
    cout<<"*";
    delay(1000);
    }
	if(count==3)
	 {
	   cout<<"\n\t\t\nSORRY WRONG PASSWORD";
	   goto end;
	 }
	 count++;
  }while(strncmp(as,"anis",4)!=0);
  getch();
 mouseini();
as:
cleardevice();
 ani= a.user();
 cleardevice();
if(ani==0)
{
 a.welcome();
}
else
goto as;
cleardevice();
load();
  cleardevice();
   up:
      t=z;
     z=a.ques1();
     if(z==6)
     {bye(z);}
      an=a.next();
     cleardevice();
    if(an==1)
    {
    bye(z);
   }
   if(z==t+1&&z!=6)
   {
   goto up;
   }
  end:
     getch();
  closegraph();
  return(0);
}
