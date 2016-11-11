#define dere 207
#define NEGRO 0
#define BLANCO 15
#define TAM_CURS 5
#define z 5
#define arriba 72
#define abajo 80
#define derecha 77
#define izquierda 75
# define ARRIBA 72
#define ABAJO   80
#define IZQDA 75
#define DERCHA   77
#define col_CURS 8
#define TAM_CURS 5
#define PonerCursor(x3,y3) Dib_XorCursor(x3,y3)
#define BorrarCursor(x3,y3) Dib_XorCursor(x3,y3)
#define tAM_CURS 8
#define FONDO 5
#define COL_CURS 15
#define ENTER 13
#define ESC 27
#define aRRIBA 72
#define aBAJO 80
#define IZQUIERDA 75
#define DERECHA 77
#include<mouse.h>
#include<stdlib.h>
#define mas 10

void dib_cursor(int x,int y,int color);
void edificio (void);
void xor_pixel(int ,int);
void dibujar_cursor(int ,int );
void  Centrar (int *x3,int *y3);
void Dib_XorCursor(int x3,int y3);

void edificio(void)
{
	int a=DETECT,b,p=0,x=5,y=8,color=15,e,xd=20,yd=20,salida;

	int lamp1[]={23,442,23,237,64,237,70,235,84,235,93,237,97,242,85,249,70,249,
	64,247,58,243,34,243,34,442,23,442};

	int lamp2[]={210,442,210,243,189,243,177,250,163,250,155,248,150,243,
	155,238,163,235,176,235,180,237,254,237,259,235,270,235,282,243,279,248,271,251,
	259,251,252,249,247,243,223,243,223,442,210,442};

	int lamp3[]={210+dere,442,210+dere,243,189+dere,243,177+dere,250,163+dere,250,155+dere,248,150+dere,243,
	155+dere,238,163+dere,235,176+dere,235,180+dere,237,254+dere,237,259+dere,235,270+dere,235,282+dere,243,279+dere,248,271+dere,251,
	259+dere,251,252+dere,249,247+dere,243,223+dere,243,223+dere,442,210+dere,442};

	int lamp4[]={604,441,604,242,583,242,578,247,571,249,557,249,549,247,544,242,
	549,236,557,234,570,234,574,236,617,236,617,441,604,441};

	/*luces de lamparas*/

	int lu1[]={78,239,70,240,63,242,69,244,78,245,86,244,92,242,85,240,78,239};

	int lu2[]={170,239,162,240,155,242,162,247,170,247,177,246,182,243,177,240,170,240};

	int lu3[]={264,239,258,240,254,243,258,246,264,247,271,246,278,243,271,240,264,239};

	int lu4[]={170+dere,239,162+dere,240,155+dere,242,162+dere,247,170+dere,247,177+dere,246,182+dere,243,177+dere,240,170+dere,240};

	int lu5[]={264+dere,239,258+dere,240,254+dere,243,258+dere,246,264+dere,247,271+dere,246,278+dere,243,271+dere,240,264+dere,239};

	int lu6[]={563,238,556,239,549,242,556,244,563,245,571,244,576,242,571,239,563,238};

		/*piso*/

	int fp[]={0,375,640,375,640,480,0,480,0,375};

	/*Edificio centro*/

	int g[]={166,114,166,325,486,325,487,114,166,114};

	int dg[]={251,325,251,343,389,343,389,325,251,325};

	int dg2[]={251,355,285,355,251,374,251,355};

	int dg3[]={281,374,299,360,341,360,361,375,281,374};

	int dg4[]={389,355,359,355,389,374,389,355};

	int dl[]={289,325,290,374,295,374,295,326,289,325};

	int dl2[]={289+57,325,290+57,374,295+57,374,295+57,326,289+57,325};

	int l[]={251,312,251,325,389,325,389,312,251,312};

	int l2[]={397,288,389,292,389,301,251,301,251,291,245,288,397,288};

	int l3[]={200,264,224,277,419,277,443,264,200,264};

	int l4[]={166,239,166,252,486,252,486,239,166,239};

	int l5[]={166,213,166,226,486,226,486,213,166,213};

	int l6[]={166,187,166,200,486,200,486,187,166,187};

	int l7[]={166,162,166,175,486,175,486,162,166,162};

	int l8[]={166,137,166,149,486,149,486,137,435,137,435,143,230,143,
	230,137,166,137};

	int l9[]={180,100,180,113,472,113,472,100,180,100};

	int l10[]={166,114,166,124,486,124,486,114,166,114};

	int la[]={180,94,180,99,472,99,472,94,180,94};

	int dtv1[]={256,125,256,142,259,142,259,125,256,125};

	int dtv2[]={301,125,301,142,304,142,304,125,301,125};

	int dtv3[]={227,125,227,137,230,137,230,125,227,125};

	int dtv4[]={349,125,349,142,352,142,352,125,349,125};

	int dtv5[]={394,125,394,142,397,142,397,125,394,125};

	int dtv6[]={435,125,435,137,438,137,438,125,435,125};

	int techo[]={473,107,486,83,165,83,179,107,179,93,473,93,473,107};

	int cp[]={411,82,406,73,400,68,393,65,277,65,261,68,252,73,247,82,411,82};

	/*arreglos edificio izquierda*/

	int izquierd[]={0,261,198,263,250,291,250,383,198,393,0,393,0,261};

	int d1[]={0,270,198,272,250,300,250,383,244,385,243,303,233,298,
	233,386,226,388,224,296,214,292,214,390,207,391,207,290,196,286,
	196,392,195,392,195,285,164,285,164,394,155,394,155,285,110,285,
	110,394,101,394,101,285,58,285,58,394,49,394,49,285,11,285,11,395,
	2,394,2,285,0,285,0,270};

	int d2[]={0,286,193,286,243,304,243,335,197,320,0,320,0,286};

	int d3[]={0,328,194,328,243,344,243,351,197,336,0,336};

	int ti[]={0,261,197,261,250,291,250,300,197,271,0,271,0,261};

	/*Arreglos edificio dereecha*/

	int dereecho[]={640,263,443,263,390,293,390,382,443,395,640,395,640,263};

	int dt1[]={640,330,444,330,390,346,390,353,444,337,640,337,640,330};

	int dv[]={640,284,444,284,390,307,390,339,444,321,640,321,640,284};

	int dt2[]={640,272,444,272,390,300,390,382,396,384,396,385,396,304,408,300,408,386,414,390,
	414,300,427,292,427,392,433,395,433,289,444,284,444,394,445,394,445,284,
	475,284,475,395,485,395,485,284,530,284,530,395,539,395,539,284,582,284,
	582,395,591,395,591,284,629,284,629,395,640,395,640,272};

	int td[]={640,263,443,265,390,293,390,300,443,272,640,272,640,263};

	/*jardin*/

	int j[]={0,442,0,480,640,480,640,442,0,442};

	int s[]={586,4,568,8,554,17,545,28,541,38,539,43,539,57,541,62,545,72,554,83,
	568,92,586,96,605,92,619,83,628,72,632,62,634,56,634,43,632,38,628,28,619,17,
	605,8,586,4};

	/*botones*/


	int btn[]={0,72,0,98,100,98,100,72,0,72};
	int btn2[]={0,35,0,61,58,61,58,35,0,35};
	int btn3[]={0,110,0,135,150,135,150,110,0,110};
	int btn4[]={0,145,0,170,160,170,160,145,0,145};
	int btns[]={0,182,0,206,68,206,68,182,0,182};

	/*tapa sol*/

	int tps[]={528,1,528,102,639,102,639,0,528,1};

	int rel[]={320,100,320,113,335,113,335,100,320,100};

	/*int tpbt[]={0,4,172,4,172,54,150,54,150,147,0,147,0,4};*/


	initgraph(&a,&b,"c:\\tc20\\bin");/*Inicio modo grafico*/

	cleardevice(); /*Limpia Pantalla*/

	mver();

	/*fondo de pantalla*/

	setbkcolor(LIGHTBLUE);


	/* sol*/


	setfillstyle(SOLID_FILL,YELLOW);
	setcolor(YELLOW);
	fillpoly(23,s);

	/*edificio central*/

	setfillstyle(SOLID_FILL,CYAN);
	setcolor(CYAN);
	fillpoly(5,g);
	fillpoly(5,l9);
	fillpoly(5,dg);
	fillpoly(4,dg2);
	fillpoly(5,dg3);
	fillpoly(4,dg4);
	fillpoly(5,dl);
	fillpoly(5,dl2);

	setfillstyle(SOLID_FILL,DARKGRAY);
	setcolor(DARKGRAY);
	line(168,114,168,262);
	line(176,114,176,262);
	line(185,114,185,262);
	line(194,114,194,262);
	line(203,114,203,325);
	line(211,114,211,325);
	line(220,114,220,325);
	line(229,150,229,325);
	line(238,150,238,325);
	line(247,150,247,325);
	line(256,150,256,325);
	line(265,150,265,325);
	line(274,150,274,325);
	line(283,150,283,325);
	line(292,150,292,325);
	line(301,150,301,325);
	line(310,150,310,325);
	line(319,150,319,325);
	line(328,150,328,325);
	line(337,150,337,325);
	line(346,150,346,325);
	line(355,150,355,325);
	line(364,150,364,325);
	line(373,150,373,325);
	line(382,150,382,325);
	line(391,150,391,325);
	line(400,150,400,325);
	line(409,150,409,325);
	line(418,150,418,325);
	line(427,150,427,325);
	line(436,150,436,325);
	line(445,114,445,325);
	line(454,114,454,325);
	line(463,114,463,325);
	line(472,114,472,325);
	line(481,114,481,325);
	line(166,155,487,155);
	line(166,181,487,181);
	line(166,207,487,207);
	line(166,233,487,233);
	line(166,258,487,258);
	line(235,283,409,283);
	line(251,307,389,307);
	line(166,131,228,131);
	line(436,131,487,131);

	setfillstyle(SOLID_FILL,LIGHTGRAY);
	setcolor(LIGHTGRAY);
	fillpoly(9,cp);

	setfillstyle(SOLID_FILL,1);
	setcolor(1);
	fillpoly(5,la);
	fillpoly(5,l);
	fillpoly(7,l2);
	fillpoly(5,l3);
	fillpoly(5,l4);
	fillpoly(5,l5);
	fillpoly(5,l6);
	fillpoly(5,l7);
	fillpoly(9,l8);
	fillpoly(5,l10);
	fillpoly(5,dtv1);
	fillpoly(5,dtv2);
	fillpoly(5,dtv3);
	fillpoly(5,dtv4);
	fillpoly(5,dtv5);
	fillpoly(5,dtv6);

	setfillstyle(SOLID_FILL,DARKGRAY);
	setcolor(LIGHTGRAY);
	fillpoly(7,techo);

	setfillstyle(SOLID_FILL,DARKGRAY);
	setcolor(DARKGRAY);
	outtextxy(280,73,"CENTRO PELLAS");

	setcolor(CYAN);
	line(166,119,487,119);
	line(166,169,487,169);
	line(166,193,487,193);
	line(166,219,487,219);
	line(166,245,487,245);
	line(210,270,433,270);
	line(251,294,389,294);

	 /*piso*/

	 setfillstyle(SOLID_FILL,DARKGRAY);
	 setcolor(DARKGRAY);
	 fillpoly(5,fp);



	/*Edificio Izquierdo*/

	setfillstyle(SOLID_FILL,1);
	setcolor(1);
	fillpoly(7,izquierd);

	setfillstyle(SOLID_FILL,CYAN);
	setcolor(CYAN);
	fillpoly(7,d2);

	setfillstyle(SOLID_FILL,DARKGRAY);
	setcolor(DARKGRAY);
	line(30,286,30,320);
	line(31,286,31,320);
	line(70,286,70,320);
	line(71,286,71,320);
	line(90,286,90,320);
	line(91,286,91,320);
	line(130,286,130,320);
	line(131,286,131,320);
	line(153,286,153,320);
	line(154,286,154,320);
	line(176,286,176,320);
	line(177,286,177,320);
	line(220,295,220,328);
	line(219,295,219,328);
	line(238,303,238,334);
	line(237,303,237,334);
	fillpoly(6,d3);
	fillpoly(7,ti);

	setfillstyle(SOLID_FILL,LIGHTGRAY);
	setcolor(LIGHTGRAY);
	fillpoly(36,d1);

	/*Edificio dereecho*/

	setfillstyle(SOLID_FILL,BLUE);
	setcolor(BLUE);
	fillpoly(7,dereecho);

	setfillstyle(SOLID_FILL,DARKGRAY);
	setcolor(DARKGRAY);
	fillpoly(7,dt1);
	fillpoly(7,td);

	setfillstyle(SOLID_FILL,CYAN);
	setcolor(CYAN);
	fillpoly(7,dv);

	setfillstyle(SOLID_FILL,LIGHTGRAY);
	setcolor(LIGHTGRAY);
	fillpoly(35,dt2);

	setfillstyle(SOLID_FILL,DARKGRAY);
	setcolor(DARKGRAY);
	line(610,285,610,322);
	line(609,285,609,322);
	line(570,285,570,322);
	line(569,285,569,322);
	line(550,285,550,322);
	line(549,285,549,322);
	line(510,285,510,322);
	line(509,285,509,322);
	line(487,285,487,322);
	line(486,285,486,322);
	line(464,285,464,322);
	line(463,285,463,322);
	line(438,289,438,323);
	line(437,289,437,323);
	line(420,297,420,330);
	line(419,297,419,330);
	line(398,307,398,337);
	line(399,307,399,337);
	line(201,288,201,321);
	line(200,288,200,321);

	/*Jardin*/

	setfillstyle(SOLID_FILL,GREEN);
	setcolor(LIGHTGRAY);
	fillpoly(5,j);


	setcolor(DARKGRAY);
	setfillstyle(SOLID_FILL,DARKGRAY);
	fillpoly(14,lamp1);
	fillpoly(23,lamp2);
	fillpoly(23,lamp3);
	fillpoly(15,lamp4);

	setcolor(WHITE);
	setfillstyle(SOLID_FILL,WHITE);
	fillpoly(9,lu1);
	fillpoly(9,lu2);
	fillpoly(9,lu3);
	fillpoly(9,lu4);
	fillpoly(9,lu5);
	fillpoly(9,lu6);


	


	/*boton*/


	setcolor(LIGHTGRAY);
	setfillstyle(SOLID_FILL,LIGHTGRAY);
	fillpoly(5,btn2);
	fillpoly(5,btn);
	fillpoly(5,btn3);
	fillpoly(5,btn4);
	fillpoly(5,btns);

	setfillstyle(SOLID_FILL,LIGHTBLUE);
	setcolor(DARKGRAY);
	outtextxy(8,45,"Noche");
	outtextxy(2,16,"Click derecho Día");
	outtextxy(2,26,"Click izquierdo Noche");
	outtextxy(8,85,"Polilinea");
	outtextxy(0,122,"Cursor destructivo");
	outtextxy(0,156,"Cursor nodestructivo");
	outtextxy(8,190,"Salir");



	do
	{
			
		/*dia y noche*/	

		if(mclick()==1)
		{

			if(mxpos(1)>0  && mypos(1)>35  && mxpos(1)<58  && mypos(1)<61)
			{	setcolor(LIGHTGRAY);
				setfillstyle(SOLID_FILL,DARKGRAY);
				fillpoly(5,btn2);

				setfillstyle(SOLID_FILL,LIGHTGRAY);
				setcolor(LIGHTGRAY);
				outtextxy(8,45,"Noche");
				delay(100);

				setcolor(CYAN);
				setfillstyle(SOLID_FILL,CYAN);
				fillpoly(5,rel);

				setcolor(BLUE);
				line(319,114,336,114);
				line(319,115,336,115);


				setcolor(LIGHTGRAY);
				setfillstyle(SOLID_FILL,LIGHTGRAY);
				fillpoly(5,btn2);

				setfillstyle(SOLID_FILL,DARKGRAY);
				setcolor(DARKGRAY);
				outtextxy(12,45,"Dia");

				setcolor(0);
				setfillstyle(SOLID_FILL,0);

				fillpoly(5,tps);


				setbkcolor(0);



				setcolor(DARKGRAY);
				setfillstyle(SOLID_FILL,DARKGRAY);
				fillpoly(14,lamp1);
				fillpoly(23,lamp2);
				fillpoly(23,lamp3);
				fillpoly(15,lamp4);

				setcolor(WHITE);
				setfillstyle(SOLID_FILL,YELLOW);
				fillpoly(9,lu1);
				fillpoly(9,lu2);
				fillpoly(9,lu3);
				fillpoly(9,lu4);
				fillpoly(9,lu5);
				fillpoly(9,lu6);
			}

		}

			if(mclick()==2)
			{

			if(mxpos(1)>0  && mypos(1)>35  && mxpos(1)<58  && mypos(1)<61)
			{	setcolor(LIGHTGRAY);
				setfillstyle(SOLID_FILL,DARKGRAY);
				fillpoly(5,btn2);

				setfillstyle(SOLID_FILL,LIGHTGRAY);
				setcolor(LIGHTGRAY);
				outtextxy(12,45,"Dia");
				delay(100);

				setcolor(CYAN);
				setfillstyle(SOLID_FILL,CYAN);
				fillpoly(5,rel);

				setcolor(BLUE);
				line(319,114,336,114);
				line(319,115,336,115);

				setcolor(LIGHTGRAY);
				setfillstyle(SOLID_FILL,LIGHTGRAY);
				fillpoly(5,btn2);

				setfillstyle(SOLID_FILL,DARKGRAY);
				setcolor(DARKGRAY);
				outtextxy(8,45,"Noche");

				setfillstyle(SOLID_FILL,YELLOW);
				setcolor(YELLOW);
				fillpoly(23,s);
				setbkcolor(LIGHTBLUE);
				setcolor(WHITE);
				setfillstyle(SOLID_FILL,WHITE);
				fillpoly(9,lu1);
				fillpoly(9,lu2);
				fillpoly(9,lu3);
				fillpoly(9,lu4);
				fillpoly(9,lu5);
				fillpoly(9,lu6);


			}

		}

		if(mclick()==1)
		{

			if(mxpos(1)>0  && mypos(1)>145  && mxpos(1)<160  && mypos(1)<170)
			{
				setcolor(DARKGRAY);
				setfillstyle(SOLID_FILL,DARKGRAY);
				outtextxy(200,10,"Esc para restaurar el edificio");
				/*setfillstyle(1,-4);
				bar(0,0,640,480);*/
				do
				{
					dibujar_cursor(xd,yd);
					e=getch();
					switch(e)
					{	
						case ARRIBA:yd=yd-z;break;
						case ABAJO:yd=yd+z;break;
						case IZQDA:xd=xd-z;break;
						case DERCHA:xd=xd+z;break;
						case 27:edificio();
					}
				}while(1);


				getch();
				closegraph();



			}

		}

			
		/*Polilinea*/

		if(mclick()==1)
		{

			if(mxpos(1)>0  && mypos(1)>72  && mxpos(1)<100  && mypos(1)<98)
			{	

				 int cordx=0,cordy=0,salir;
	
				Centrar(&cordx,&cordy);
				setfillstyle(SOLID_FILL,DARKGRAY);
				setcolor(DARKGRAY);
				outtextxy(200,10,"Esc para restaurar el edificio");
				while(salir!=ESC)
				{
					salir=Dib_Polilinea(&cordx,&cordy);
				}
				closegraph();

			}

		}

			

			/*boton para salir*/

		if(mclick()==1)
		{
			
			
			if(mxpos(1)>0  && mypos(1)>182  && mxpos(1)<68  && mypos(1)<206) 
			{
			 closegraph();
			 exit(0);
			}

		}






		if(mclick()==1)
		{

			if(mxpos(1)>0  && mypos(1)>110  && mxpos(1)<150  && mypos(1)<135)
			{
				
				/*setcolor(LIGHTBLUE);
				setfillstyle(SOLID_FILL,LIGHTBLUE);
				fillpoly(7,tpbt);*/
					
				setcolor(DARKGRAY);
				setfillstyle(SOLID_FILL,DARKGRAY);
				outtextxy(200,10,"Esc para restaurar el edificio");



				do
				{
					dib_cursor(x,y,color);
					e=getch();
					switch(e)
					{
						case arriba:
							y=y-z;
							break;
						case abajo:
							y=y+z;
							break;
						case izquierda:
							x=x-z;
							break;
						case derecha:
							x=x+z;
							break;
						case 27:
							edificio();
							/*exit(0);*/
					}
				}while(1);




	
			}

		}


	} while(p==0);




  	getch();
	closegraph();

}


void dib_cursor(int x,int y,int color)
{
	int col_ant;
	col_ant=getcolor();
	setcolor(color);
	line(x-TAM_CURS,y,x+TAM_CURS,y);
	line(x,y-TAM_CURS,x,y+TAM_CURS);
	setcolor(col_ant);
}

void dibujar_cursor(int xd,int yd)
{
int i;
for(i=4;i<TAM_CURS;i++)
 {
	xor_pixel(xd-i,yd);
	xor_pixel(xd+i,yd);
	xor_pixel(xd,yd-i);
	xor_pixel(xd,yd+i);
 }
xor_pixel(xd,yd);
}
void xor_pixel(int xd,int yd)
{
	putpixel(xd,yd,col_CURS^getpixel(xd,yd));
}

void Xor_Pixel(int x3,int y3)
{
	putpixel(x3,y3,COL_CURS^getpixel(x3,y3));
}


/*int Dib_Polilinea(int *x2,int *y2)
{
	int x1,y1,c=1;
	x1=*x2;
	y1=*y2;
	while(c!=ENTER)
	{
		c=Mover(&*x2,&*y2);

		if(c==ESC)
			 exit(0);
	}
	line(x1,y1,*x2,*y2);
}*/

int Mover(int *x3,int *y3)
{
	int dx,dy,c;
	for(;;)
	{
		dx=dy=0;
		switch(c=getch())
		{
			case aRRIBA: dy--;break;
			case aBAJO : dy++;break;
			case IZQUIERDA: dx--;break;
			case DERECHA  : dx++;break;
			default: return c;
		}
		BorrarCursor(*x3,*y3);
		*x3+=dx;
		*y3+=dy;
		PonerCursor(*x3,*y3);
	}
}


void Dib_XorCursor(int x3,int y3)
{
	int i;
	for(i=0;i<tAM_CURS;i++)
	{
		Xor_Pixel(x3-i,y3);
		Xor_Pixel(x3+i,y3);
		Xor_Pixel(x3,y3-i);
		Xor_Pixel(x3,y3+i);
	}
	Xor_Pixel(x3,y3);
}
void  Centrar (int *x3,int *y3)
{
	*x3=getmaxx()/2;
	*y3=getmaxy()/2;
	PonerCursor(*x3,*y3);
}



int Dib_Polilinea(int *x2,int *y2)
{
	int x1,y1,c=1;
	x1=*x2;
	y1=*y2;
	while(c!=ENTER)
	{
		c=Mover(&*x2,&*y2);

		if(c==ESC)
			 edificio();
	}
	line(x1,y1,*x2,*y2);
}