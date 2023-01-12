#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int sayi1, sayac;
	float sayi2;
	
	printf("Bir tamsayi giriniz: ");
	scanf("%d", &sayi1);
	sayi2=sayi1;
	sayac=0;
	
	while (sayi1>0)
	{
		sayi1=sayi1/10;
		sayac++;
	}
	
	sayi2=sayi2/sayac;
	
	printf ("Basamak sayisina bolunmus olan yeni sayiniz: %.2f ", sayi2);

return 0;

}
