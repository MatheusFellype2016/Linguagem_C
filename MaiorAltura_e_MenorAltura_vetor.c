#include <stdio.h>

int main()
{
   int i;
   float altura[15];
   float maior = 0;
   float menor = 1000;
   
   for(i=0; i<15; i++) {
       
       printf("Digite a altura da pessoa %i: ",i+1);
       scanf("%f",&altura[i]);
       
       
       if (altura[i] > maior) {
           maior = altura[i];
       }
       
       
       if (altura[i] < menor) {
           menor = altura[i];
       }
       
   }
   
   printf("\nA maior altura é: %0.2f", maior);
   printf("\nA menor altura é: %0.2f", menor);
   
   return 0;
}
