#include <stdio.h>

int mayor(int pesos, int dolares) 
{
  dolares = (dolares * 58);
  if(pesos > dolares)
  {
    return pesos;
    }
  else{
    return dolares;
    }
  }
int main (void){
  int numero = 0;
  numero = mayor(500,102);
  printf("%d\n", numero);
  
  return 0;
}