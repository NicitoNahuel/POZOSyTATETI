#include <stdlib.h>
#include <stdio.h>
#include<time.h>
int inicia;
const int n=3;
char tablero[n][n];
char X='X', O='O', vacio=' ';
int i, j, espacio=9, fin=0;
main ()
{
	
for (i=0; i<n; i++)
{
	for (j=0; j<n; j++)
	{
		tablero[i][j]=vacio;
	}
printf ("\n");
}

srand(time(NULL));
do{
//bot
//donde va a poner la X 
	i=rand()%3;
	j=rand()%3;
//si el casillero que elige esta ocupado, elige denuevo
	while (tablero[i][j]!=' ')
	{
	i=rand()%3;
	j=rand()%3;
	}
//pone la ficha
	tablero[i][j]=X;
//resta uno a la cantidad de espacios que queda
espacio=espacio-1;
for (i=0; i<n; i++)
{
	for (j=0; j<n; j++)
	{
		printf ("|%c|", tablero[i][j]);
	}
printf ("\n");
}
//jugador pone una ficha
printf ("ingrese donde quiere colocar la pieza: ");
scanf ("%d %d", &i, &j);
	while (tablero[i][j]!=' ')
	{
	printf ("ese lugar esta ocupado, elija otro: ");
	scanf ("%d, %d", &i, &j);
	}
tablero[i][j]=O;
espacio=espacio-1;
//muestra el tablero
for (i=0; i<n; i++)
{
	for (j=0; j<n; j++)
	{
		printf ("|%c|", tablero[i][j]);
	}
printf ("\n");
}
//comprueba si hay ganadores
if (espacio<=5	&& (tablero[i][j]==tablero[(i+1)][j] && tablero[i][j]==tablero[(i+2)][j] && tablero[i][j]!=vacio ) || (tablero[i][(j+1)]==tablero[(i+1)][(j+1)] && tablero[i][(j+1)] && tablero[i][(j+1)]!=vacio ) || (tablero[i][(j+2)]==tablero[(i+1)][(j+2)] && tablero[i][(j+2)]==tablero[(i+2)][(j+2)] && tablero[(i+2)][(j+2)]!=vacio ) || (tablero[i][j]==tablero[i][(j+1)] && tablero[i][j]==tablero[i][(j+2)] && tablero[i][j]!=vacio ) || (tablero[(i+1)][j]==tablero[(i+1)][(j+1)] && tablero[(i+2)][j]==tablero[(i+1)][(j+2)] && tablero[(i+1)][j]!=vacio ) || (tablero[(i+2)][j]==tablero[(i+2)][(j+1)] && tablero[(i+2)][j]==tablero[(i+2)][(j+2)] && tablero[(i+2)][j]!=vacio ) || (tablero[i][j]==tablero[(i+1)][(j+1)] && tablero[i][j]==tablero[(i+2)][(j+2)] && tablero[i][j]!=vacio ) || (tablero[(i+2)][j] == tablero[(i+1)][(j+1)] && tablero[(i+1)][(j+1)] == tablero[i][(j+2)] && tablero[(i+2)][j]!=vacio ))
{
//comprueba quien gano
if (espacio %2!=0)
printf ("el ganador es el bot");
else if (espacio %2==0)
printf ("el ganador es el jugador");
fin=1;
}
//si no hay ganadores ni mas espacios
else if (espacio==0) 
{printf ("el tablero esta lleno, no hay ganador");}
}while(espacio!=0||fin!=1);		
}
