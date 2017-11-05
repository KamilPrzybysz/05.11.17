#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int a, b, c;
  printf("Podaj liczbę a:");
  scanf("%d", &a);
  printf("Podaj liczbę b:");
  scanf("%d", &b);
  printf("Podaj liczbę c:");
  scanf("%d", &c);

  if(a<=0)
  {printf("Złe dane\n");
   return 1;
  }
  else if(b<=0)
  {printf("Złe dane\n");
   return 1;
  }
  if(c<=0)
  {printf("Złe dane\n");
   return 1;
  }

  if(a*a+b*b==c*c)
  {
    printf("Te liczby to trójka pitagorejska\n");
  }
  else if(b*b+c*c==a*a)
  {
    printf("Te liczby to trójka pitagorejska\n");
  }
  else if(a*a+c*c==b*b)
  {
    printf("Te liczby to trójka pitagorejska\n");
  }
  else
  printf("Te liczby to nie trójka pitagorejska\n");
  return EXIT_SUCCESS;
}
