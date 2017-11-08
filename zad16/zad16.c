#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
	printf("Podaj liczbę kończącą przedział od 1: ");
	int n;
	scanf("%d", &n);
	while(n<0)
	{
		printf("Liczba musi być większa od 0!\n");
		printf("Podaj właściwą liczbę: ");
		scanf("%d", &n);
	}

	srand(time(NULL));
    	int liczba=(rand()%n);
     	int i;
 	printf("Podaj liczbe w przedziale 1-%d\n", n);
   	do
	{
        scanf("%d", &i);

        if(i<liczba)

        printf("Podałeś za małą liczbę!\n");

        if(i>liczba)

        printf("Podałeś za dużą liczbę!\n");

    	}while(i!=liczba);

   	printf("Odgadłeś liczbę! Ta liczba to %d\n", liczba);

       return 0;
}
