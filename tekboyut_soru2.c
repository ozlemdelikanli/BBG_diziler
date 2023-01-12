#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, i, s2=0, s3=0;
	float ort;
	
	printf("Dizinin eleman sayisini giriniz: ");
	scanf("%d", &n);
	int a[n], b[n], c[n];


	for(i=0; i<n; i++)
	{
		printf("Dizi icin eleman giriniz: ");
		scanf("%d", &a[i]);
		ort+=a[i];
	}
	ort/=n;
	
	
	for(i=0; i<n; i++)
	{
		if(a[i]<ort)
		{
		b[s2]=a[i];
		s2++;  }
		else if(a[i]>ort)
		{
		c[s3]=a[i];
		s3++;  }
	}
	printf("Girdiginiz dizi: ");


	for(i=0; i<n; i++)
	printf("%d ", a[i]);
	printf("\nDizinin ortalamasi: %g", ort);
	printf("\nOrtalamadan kucuk dizi elemanlari: ");


	for(i=0; i<s2; i++)
	printf("%d ", b[i]);
	printf("\nOrtalamadan buyuk dizi elemanlari: ");

	for(i=0; i<s3; i++)
	printf("%d ", c[i]);
	
	return 0;
}
