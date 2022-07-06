#include <stdio.h>
#define TAM 6


void exibir (int vetor[], int tamanho)
{
	//declaração de variáveis
	int i;
	
	printf ("\n\nElementos do vetor: ");
	
	//varrendo o vetor
	for (i=0;i<tamanho;i++)	
	{
		printf ("%d ", vetor[i]);
	}
	
	printf ("\n\n");
}

void preencherAleatorioCrescente (int vetor[], int tamanho)
{
	//declaração de variáveis
	int i;
	
	//garantindo que as sequências serão distintas a cada execução
	srand (time(NULL));

	//varrendo o vetor
	vetor[0] = rand()%10;
	for (i=1;i<tamanho;i++)	
	{
		vetor[i] = vetor[i-1] + rand ()%5;
	}	
}
void funcQuestao3(int vetor[], int tamanho, int *maiorNum, int *quantPositivos)
{
	int i, maiorNumero=-1, quant=0;
	
	for(i=0;i<tamanho;i++)
	{
		if(i%2==0)
		{
			if(vetor[i]>maiorNumero)
			{
				maiorNumero = vetor[i];
			}
		}
		else
		{
			if(vetor[i]>0)
			{
				quant++;
			}
		}
		
	}
	
	*maiorNum = maiorNumero;
	*quantPositivos = quant;
	
	
}

void main()
{
	int vet[TAM], quant, maiorValor, quantidadePositivos;
	
	quant = TAM;
	
	preencherAleatorioCrescente (vet, quant);
	
	exibir (vet, quant);
	
	
	funcQuestao3(vet, quant, &maiorValor, &quantidadePositivos);
	
	printf("Maior valor das posicoes pares: %d\n", maiorValor);
	printf("Quantidade de valores positivos em posicoes impares: %d", quantidadePositivos);
	
	
}
