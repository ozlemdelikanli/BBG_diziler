#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
	int n, i;
	printf("Dizinin eleman sayisini giriniz: ");
	scanf("%d", &n);
	int a[n], b[n], c[n];
	
	
	for(i=0; i<n; i++)
	{
		printf("A dizisi icin eleman giriniz: ");
		scanf("%d", &a[i]);
	}
	
	
	for(i=0; i<n; i++)
	{
		b[i]=a[i]*a[i];
		c[i]=sqrt(a[i]);
	}
	
	
	printf("B ve C dizisinin skaler carpimi: ");
	for(i=0; i<n; i++)
		printf("%d ", b[i]*c[i]);
	
		
	return 0;
}
