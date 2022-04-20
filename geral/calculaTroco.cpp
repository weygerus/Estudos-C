#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
     int x, resto;
     int N100, N50, N20, N10, N5, N2, N1;

     printf("digite o valor: ");
     scanf ("%d", &x);

     N100 = x/100;           resto = x % 100;
     N50  = resto/50;        resto = resto % 50;
     N20  = resto/20;        resto = resto % 20;
     N10  = resto/10;        resto = resto % 10;
     N5   = resto/5;         resto = resto % 5;
     N2   = resto/2;         resto = resto % 2; 
     N1   = resto/1;

     printf("\n\n"); 
     printf("valor: ");
     printf("%d R$\n", x);
  
  if(N100 != 0){
    printf("%d nota(s) de R$ 100,00\n",N100);
  } 
  if(N50 != 0){
     printf("%d nota(s) de R$ 50,00\n", N50);
  };
  if(N20){
     printf("%d nota(s) de R$ 20,00\n", N20);
  };
  if(N10){
     printf("%d nota(s) de R$ 10,00\n", N10);
  };
  if(N5){
     printf("%d nota(s) de R$ 5,00\n",   N5);
  };
  if(N2){
     printf("%d nota(s) de R$ 2,00\n",   N2); 
  };
  if(N1){
     printf("%d nota(s) de R$ 1,00\n",   N1);
  };
     
                                                        
     return 0;
  }