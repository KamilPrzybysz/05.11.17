#include <stdio.h>

int main()
{
  int a;
  int b;
  printf("Podaj wysokość a:");
  scanf("%d", &a);
  printf("Podaj szerokość b:");
  scanf("%d", &b);

  if(a<0)
  {
    printf("Zła wysokość\n");
    return 1;
  }
  else if(b<0)
    {
      printf("Zła szerokość\n");
      return 1;
    }
    else
    {
      for(int i=1; i<=a; i++)
      {
        putchar('\n');
        for(int i=1; i<=b; i++)
        {
          putchar('*');
        }

      }
        putchar('\n');
    }

  return 0;
}
