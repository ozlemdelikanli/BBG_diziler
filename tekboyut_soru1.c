#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, i, j;
	printf("Dizinin eleman sayisini giriniz: ");
	scanf("%d", &n);
	int a[n], eleman[n];
	
	for(i=0; i<n; i++)
		eleman[i]=0;
	
	for(i=0; i<n; i++)
	{	
		printf("Dizi icin eleman giriniz: ");
		scanf("%d", &a[i]);
	}
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			if(a[i]==a[j])
			eleman[i]++;
		}
	}
	for(i=0; i<n; i++)
	printf("%d. eleman dizide %d kez tekrar etmistir.\n", i+1, eleman[i]);
	
	return 0;
}
