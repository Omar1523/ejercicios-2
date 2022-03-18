#include <stdio.h>
int cubo(void);
int i; 
int main(void);
int i;

int main (void)
{
  int cub;
for (i = 1; i <= 10; i++)
{
cub = cubo();
printf("\nel cubo de %d es: %d", i, cub);
}
}
int cubo(void) 
{
  int var = 2;
return (i*i*i);
}