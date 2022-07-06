/*QUEST�O 04:
A fun��o logar�tmica � complementar �
potencia��o. Ou seja, uma vez que 3
4 = 81,
podemos ent�o afirmar que log381 = 4.
Generalizando, temos que:
baseexpoente = pot ? logbasepot = expoente
Com base nessa descri��o, pede-se o
desenvolvimento de uma fun��o que, dados a e
b, calcule o valor de logab.
Nota: a sua solu��o dever� apresentar um valor
inteiro que, na verdade, ser� a solu��o aproximada do
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
