#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
	printf("Podaj liczbę naturalną n, która będzie końcem przedziału od 1 do n losowanych liczb: ");
	int n;
	scanf("%d", &n);
	while(n<=0)
	{
	printf("Liczba n musi być większa od 0!\n");
	printf("Podaj liczbę: ");
	scanf("%d", &n);
	}

	srand(time(NULL));
	int i;
	for(i=0; i<1; i++)
	{
	printf("Liczba z wylosowanego przedziału to: %d\n", rand()%n);
	}

	return 0;
}
