#include<conio.h>
#include<stdio.h>
#include<graphics.h>
#include<stdlib.h>

void presentacion()
{
	int xar[8] = {20,35,60,40,80,80,80,100};
	int yar[8] = {50,104,70,50,50,50,100,50};
	int xab[8] = {35,70,75,55,50,95,100,114};
	int yab[8] = {120,120,120,100,65,120,120,120};
	int btn[10] = {530,400,640,400,640,430,530,430,530,400};
	int i;
	int p=0;

	int driver=DETECT,modo;
	initgraph(&driver,&modo,"c:\\tc20\\bin");

	cleardevice(); /*Limpia Pantalla*/

	/*Presentacion*/

	setbkcolor(12);
	setfillstyle(SOLID_FILL,BLUE);  /*color de relleno de las barras*/
	for(i=0;i<=7;i++){
	bar(xar[i],yar[i],xab[i],yab[i]); /*Logo*/

	};
	setcolor(BLUE);
	settextstyle(SANS_SERIF_FONT,HORIZ_DIR,4);
	outtextxy(160,40,"UNIVERSIDAD NACIONAL DE");
	outtextxy(275,90,"INGENIERIA");

	setcolor(WHITE);
	settextstyle(SANS_SERIF_FONT,HORIZ_DIR,2);
	outtextxy(40,180,"Integrantes:");
	outtextxy(170,180,"Jake Ruiz");
	
	outtextxy(40,360,"Asignatura:");
	outtextxy(170,360,"Geometria Computacional");

	outtextxy(160, 420,"Fecha: 18 de Mayo del 2015");


	setfillstyle(SOLID_FILL,GREEN);
	fillpoly(5,btn);
	outtextxy(535,400,"CONTINUAR");

	do
	{
	mver();
		if(mclick()==1)
		{

			if(mxpos(1)>530  && mypos(1)>400  && mxpos(1)<640  && mypos(1)<430) /*los numero son las coordenadas*/
			{
			closegraph();
			barra();
			edificio();
			}

		}



		if(mclick()==2)
		{

			if(mxpos(1)>530  && mypos(1)>400  && mxpos(1)<640  && mypos(1)<430)
			{
			closegraph();
			barra();
			edificio();
			}

		}
	} while(p==0);

getch();
closegraph();

}
