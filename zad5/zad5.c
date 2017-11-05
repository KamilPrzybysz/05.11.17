#include <stdio.h>

int main()
{
  int a, b;
  printf("Podaj liczbę a:");
  scanf("%d", &a);
  printf("Podaj liczbę b:");
  scanf("%d", &b);
  a>b? printf("a>b\n"): printf("a<b\n");

  return 0;
}
