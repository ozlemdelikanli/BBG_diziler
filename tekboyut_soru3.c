#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, i, temp;
	printf("Diziler icin eleman sayisini giriniz: ");
	scanf("%d", &n);
	int a[n], b[n], c[n], d[n];	
	
	
	for(i=0; i<n; i++)
	{
		printf("A dizisi icin eleman giriniz: ");
		scanf("%d", &a[i]);
	}
	printf("\n");


	for(i=0; i<n; i++)
	{
		printf("B dizisi icin eleman giriniz: ");
		scanf("%d", &b[i]);
	}
	printf("\n");
	
	
	for(i=0; i<n; i++)
	{
		printf("C dizisi icin eleman giriniz: ");
		scanf("%d", &c[i]);
	}
	

	for(i=0; i<n; i++)
		d[i]=a[i]+b[i]-c[i];
	

	for(i=0; i<n; i++)
	{
		if(d[i]<d[i+1])
		temp=d[i];
		d[i]=d[i+1];
		d[i+1]=temp;
	}
	printf("\nD dizisi: ");


	for(i=0; i<n; i++)
		printf("%d ", d[i]);
		
		
	
	return 0;	
}
