#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int a, b, c, aa, bb, cc, aaa, bbb, ccc;
  printf("Podaj liczbę a:");
  scanf("%d", &a);
  printf("Podaj liczbę b:");
  scanf("%d", &b);
  printf("Podaj liczbę c:");
  scanf("%d", &c);

  if(a<=0||b<=0||c<=0)
  {
    printf("Złe dane\n");
    return 1;
  }

int n= (a*a+b*b==c*c || a*a+c*c==b*b || b*b+c*c==a*a);
  switch(n)
  {
    case 1: printf("Trójka\n"); break;
    case 0: printf("Nie trójka\n"); break;
  }
  return EXIT_SUCCESS;
}
