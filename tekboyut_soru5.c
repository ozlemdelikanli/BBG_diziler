#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, i;
	printf("Dizi icin eleman sayisini giriniz: ");
	scanf("%d", &n);
	int a[n], b[n];
	
	
	for(i=0; i<n; i++)
	{
		printf("Dizi icin eleman giriniz: ");
		scanf("%d", &a[i]);
	}
	
	
	for(i=0; i<n; i++)
		b[i]=-a[n-i-1];
	
	
	printf("B dizisi: ");
	for(i=0; i<n; i++)
		printf("%d ", b[i]);
		
	return 0;
}
