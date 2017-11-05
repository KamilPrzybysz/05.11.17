#include <stdio.h>
#include <stdlib.h>

int main(void)
{
int n;
printf("Podaj liczbę:");
scanf("%d", &n);
while(n<=0)
{
  printf("Liczba musi być większa od 0\n");
  printf("Podaj liczbę:");
  scanf("%d", &n);
}

int suma=0;
int i=0;
do {
  suma+=i;
  i++;
} while(i<=n);
printf("Suma liczb od 1 do %d to %d\n", n, suma);

  return EXIT_SUCCESS;
}
