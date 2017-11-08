#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
	printf("Podaj liczbę naturalną n: ");
	int n;
	scanf("%d", &n);
	while(n<=0)
	{
		printf("Liczba n musi być większa od 0!\n");
		printf("Podaj liczbę: ");
		scanf("%d", &n);
	}

	int kd=1;
	int kg=n;
	while(kg-kd>=1)
	{
		int j=(kd+kg)/2;
		if(j*j==n)
		{
			printf("Pierwiastkiem kwadratowym z n=%d jest: %d\n", n, j);
			return 0;
		}
		else if(j*j>n)
		{
			kg=j;
		}
		else if(j*j<n)
		{
			kd=j;
		}
		if(kg-kd<=1)
		{
			printf("Nie ma pierwiastka kwadratowego z n=%d\n", n);
			return 0;
		}

	}

	return 0;
}
