#include <stdlib.h>
#include <stdio.h>
#include<time.h>

const int n=10;
int i, j, m, vidas;
int mapa[n][n];
int posicion[n][n];
char direccion;
char pos1 = 'W', pos2 = 'S', pos3='A', pos4='D';
main()
{
	srand(time(NULL));
//crea el mapa, poniendo 1 en todos los lugares de la matriz
for (i=0;i<n;i++)
{
	for (j=0;j<n;j++)
	{
	 mapa[i][j]=1;
	}
}
//genera 3 numeros aleatorios, estos son los pozos, en los cuales se reeemplaza el 1 por un 0
for (m=0;m<3;m++)
	{
	i= rand() %11;
	j= rand() %11;
	//si algun numero esta repetido se vuelve a tirar
	while (mapa[i][j]==0)
	{
	i= rand() %11;
	j= rand() %11;
	}
	mapa[i][j]=0;
	}
/*
for (i=0;i<n;i++)
{
	for (j=0;j<n;j++)
	{
	 printf ("|%d|", mapa[i][j]);
	}
	printf ("\n");
}
*/
do{
printf ("estas en %d %d",i,j);
printf ("Ingrese la direccion en la que se quiere mover (W) (S) (D) (A)");
scanf ("%c", &direccion);
//pos1 W (arriba)
if (direccion==pos1)
{j=j+1;}
//pos2 S (abajo)
else if(direccion==pos2 && j!=0)
{j=j-1;}
//si ya esta abajo del todo, le pide otra direccion asi no se sale del mapa
while (direccion==pos2 && j==0)
{
printf ("no se puede ir mas para abajo, porfavor ingrese otro direccion");
scanf ("%d", &direccion);
}
//pos3 a (izquierda)
else if(direccion==pos3 && i!=0)
{i=i-1;}
//si ya esta a la izquierda del todo, le pide otra direccion asi no se sale del mapa
while (direccion==pos3 && i==0)
{
printf ("no se puede ir mas para abajo, porfavor ingrese otro direccion");
scanf ("%d", &direccion);
}
//pos4 d (derecha)
else if(direccion==pos4)
{i=i+1;}
//si caes en un pozo (un 0) te resta 1 vida
if (posicion[i][j]==0)
{
	vidas=vidas-1
	//si te quedas sin vidas (vidas=0) perdes 
	if (vidas==0)
		{printf ("te quedaste sin vidas, el juego termino");}
	//si todavia tienes vidas empiezas desde 0 0
	else 
	{
		printf ("caiste en un pozo, perdiste una vida, te quedan %d \n empiezas devuelta desde 0 0", vidas);
		i=0; j=0;
	}
}

if (i==(n-1) && j==(n-1))
{ printf ("felicitaciones, ganaste!!"); }

}while ((i==(n-1) && j==(n-1))|| vidas==0);

}
