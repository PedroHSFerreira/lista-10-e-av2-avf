#include <stdio.h>
#include <limits.h>

/*
QUEST�O 02:
Dados dois n�meros inteiros A e B, fazer uma
fun��o que determine o n�mero de pot�ncias
de 2 existentes no intervalo definido pelos dois
valores, assim como a maior delas.
*/

int potenciasde2(int a, int b, int *somaP, int *maiorP)
{
	int i, j, contP = 0, maiorpotencia = -1;
	
	for (i = a; i < b; i++)
	{
		if(i = i *2)
		{
			contP++;
		}
		
		
		
		if(contP>maiorpotencia)
		{
			maiorpotencia=contP;
		}
	}
	
	*somaP = contP;
	*maiorP = maiorpotencia;

}
void main ()
{
	int valorA, valorB, soma, maior;
	
	printf ("Entre com o intervalo de A:\n");
	scanf ("%d", &valorA);
	
	printf ("Entre com o intervalo de B:\n");
	scanf ("%d", &valorB);
	
	potenciasde2(valorA, valorB, &soma, &maior);
	
	printf ("Numero de potencias de 2 existentes no intervalo de A e B = %d - E a maior: %d\n", soma, maior);
	
	
	
}
