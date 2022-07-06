#include <stdio.h>

int potenciadeN(int n)
{
    int pot, exp;
    
    
    if ((n < 1) || (n > 9))
    {
        return 0;
    }
    else
        {
            exp = 0;
            pot = 1;
            
            while(exp <= 9)
            {
                printf ("%d ^ %d = %d\n", n, exp, pot);
                
                exp++;
                pot = pot * n;
            }
            return 1;
        }
        
     
}
void main ()
{
    int num, ret;
    
    printf ("Entre com o valor de N no intervalo de 1...9:\n");
    scanf ("%d", &num);
    printf ("\n");
    
    ret = potenciadeN(num);
    
    if (ret == 0)
    {
        printf ("%d");    
    }    
}
