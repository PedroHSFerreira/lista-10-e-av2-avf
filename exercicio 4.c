/*QUESTÃO 04:
A função logarítmica é complementar à
potenciação. Ou seja, uma vez que 3
4 = 81,
podemos então afirmar que log381 = 4.
Generalizando, temos que:
baseexpoente = pot ? logbasepot = expoente
Com base nessa descrição, pede-se o
desenvolvimento de uma função que, dados a e
b, calcule o valor de logab.
Nota: a sua solução deverá apresentar um valor
inteiro que, na verdade, será a solução aproximada do
logaritmo.
*/

#include <stdio.h>

int baseexpoente (int base, int valor)
{
	int i, potencia, cont=0;
	
	for (i = 1; i < valor;)
	{
		 i = i * base;
		 printf("%d ", i);
		
		cont++;
	}
	
	return cont;
}

void main ()
{
	int base, log, resp;
	
	printf ("Entre com o valor da base:\n");
	scanf ("%d", &base);
	
	printf ("Entre com o valor do log:\n");
	scanf ("%d", &log);
	
	resp = baseexpoente (base, log);
	
	printf ("O valor da log de %d da base %d = %d\n", log, base, resp);
	
	
	
}
