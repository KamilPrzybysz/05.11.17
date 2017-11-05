#include <stdio.h>

int main()
{
int n;
printf("Podaj liczbę:");
scanf("%d", &n);
if(n<=0)
{
  printf("Liczba musi być większa od 0\n");
  return 1;
}
else
{
  int sil=1;
  for(int i=1; i<=n; i++)
  {
    sil*=i;
  }
  printf("Silnia z %d= %d\n", n, sil);
}
  return 0;
}
