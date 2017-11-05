#include <stdio.h>

int main()
{
int n;
printf("Podaj liczbę n:");
scanf("%d", &n);
if(n<=0)
{
  printf("Podaj liczbę większą od 0\n");
  return 1;
}
else
{
  int a=1;
  int sil=1;
  while(n>=a)
  {
    sil*=a;
    a++;
  }
printf("Silnia z %d to %d\n", n, sil);
}


return 0;
}
