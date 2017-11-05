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

for(int i=0; i<=n; i++) //jeden
  {
    putchar('\n');
    for(int j=0; j<=i; j++)
      {
        putchar('*');
      }
  }
  putchar('\n');
  putchar('\n');

  for(int i=0; i<=n; i++) //dwa
    {
      putchar('\n');
      for(int j=n; j>=i; j--)
        {
          putchar('*');
        }
    }
    putchar('\n');
    putchar('\n');


    for(int i=0; i<=n; i++) //trzy
      {
        putchar('\n');
        for(int j=n; j>=i; j--)
          {
            putchar('*');
            putchar(' ');
          }
      }
      putchar('\n');
      putchar('\n');
  return EXIT_SUCCESS;
}
