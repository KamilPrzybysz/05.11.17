#include <stdio.h>
#include <math.h>

int main()
{
  int n;
  printf("Podaj liczbę naturalną n:");
  scanf("%d", &n);
  if(n<0)
  {
    printf("Liczba musi być większa od 0\n");
    return 1;
  }
  else
  {
    for(int i=1; i<=n; i++)
    {
      printf("%d ", i);
    }
    printf("\n");
    for(int i=1; i<=n; i++)
    {
      int b= pow(i, 2);
      printf("%d ", b);
    }
  }

  return 0;
}
