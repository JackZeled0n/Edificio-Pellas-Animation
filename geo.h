#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <dos.h>
#include <stdlib.h>
#include <graphics.h>


#define TIEMPO_1 100
#define TIEMPO_2 500
#define tiempo 600

void barra(void);

void barra() /*Barra de carga*/
{
	int i, x = DETECT, y;
	textbackground(WHITE);
	clrscr();
	textcolor(BLACK);
	gotoxy(30, 8);
	cprintf("GEOMETRIA COMPUTACIONAL");

	textcolor(BLACK);
	for (i = 1; i <= 52; i++)
	{
		gotoxy(14+i, 11);
		cprintf("x");
		gotoxy(14+i, 13);
		cprintf("x");
	}

	gotoxy(15, 12);
	cprintf("x");
	gotoxy(66, 12);
	cprintf("x");

	for (i = 1; i <= 50; i++)
	{
		textbackground(GREEN);
		gotoxy(15+i, 12);
		cprintf(" ");
		textbackground(WHITE);
		delay(150);
		textcolor(RED);
		gotoxy(39, 10);
		cprintf("%d %c", i*2, '%');
	}

	textcolor(RED);

	do
	{
		gotoxy(35, 14);
		cprintf("                ");
		delay(200);
		gotoxy(35, 14);
		cprintf("%cCarga completa!", 173	);
		delay(400);
	}while (!kbhit());
	getch();
}