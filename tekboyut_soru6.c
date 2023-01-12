#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, i;
	printf("Dizi icin eleman sayisi giriniz: ");
	scanf("%d", &n);
	int a[n];
	
	
	for(i=0; i<n; i++)
	{
		if(i%2==0)
		a[i]=1;
		else if(i%2==1)
		a[i]=0;
	}
	printf("A dizisi: ");
	
	
	for(i=0; i<n; i++)
		printf("%d ", a[i]);
		
	return 0;
}
