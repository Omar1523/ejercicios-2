#include <stdio.h>

int main(){
  int n, i, suma=0, suma_pares=0, suma_impares=0, ne;
  printf("indique el total de numeros a sumar: ");
  scanf("%i", &n);

  i = 1;

  while(i<=n){
    if(i%2==0){
    ne= i *(-1);
      suma_pares = suma_pares + ne;
      }
      
    else{
      suma_impares = suma_impares + i;
      }
    i++;
    }
  suma = suma_pares + suma_impares;
  printf("\nel valor total es: %i", suma);
  }
      
      
    