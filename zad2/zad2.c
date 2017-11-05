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
  printf("Te liczby to nie tórjka pitagorejska\n");
  return EXIT_SUCCESS;
}
