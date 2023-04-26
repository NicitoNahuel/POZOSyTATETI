#include <stdlib.h>
#include <stdio.h>
#include<time.h>

const int n=10;
int m=10;
int i, j;
int mapa[n][n];
int posicion[n][n];
char direccion;
char pos1 = 'W', pos2 = 'S', pos3='A', pos4='D';
main()
{
	srand(time(NULL));
for (i=0;i<n;i++)
{
	for (j=0;j<n;j++)
	{
	 mapa[i][j]=1;
	}
}

for (m=0;m<3;m++)
	{
	i= rand() %11;
	j= rand() %11;
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
printf ("Ingrese la direccion en la que se quiere mover (W) (S) (D) (A)");
scanf ("%c", &direccion);
if (direccion==pos1)
{j=j+1;}
else if(direccion==pos2)
{j=j-1;}
else if(direccion==pos3)
{i=i-1;}
else if(direccion==pos4)
{i=i+1;}
while ("")


}while (posicion);

}
