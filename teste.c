#include <stdio.h>
 void funcao01 (int v[], int quant) {
 int i;
 for (i=0;i<quant;i++) {
 printf ("%d ", v[i]);
 }
 printf ("\n");
 }
 void funcao02 (int *A, int*B) {
 int C = *A;
 *A = *B;
 *B = C;
 }
 void funcao03 (int v[], int quant) {
 int i, j;
 for (i=1; i<quant; i++) {
 for (j=quant-1; j>=i; j--) {
 if (v[j-1] < v[j]) {
 funcao02 (&v[j-1], &v[j]);
 }
 }
 funcao01 (v, quant);
 }
 }
void main () {
int vetor[5] = {2,4,3,5,9};
funcao03 (vetor, 5);
 }
