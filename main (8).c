#include <stdio.h>

int main(){
  int i, n;
  printf("digite el multipo: ");
  scanf("%i", &n);

  i = 1;

  while(i<=n){
    if(i%5==0){
    printf("%i\n",i);
      }
    i++;
    }
  }