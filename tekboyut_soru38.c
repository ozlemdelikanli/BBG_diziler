#include <stdio.h>
#include <math.h>

int main()
{
	
	int sayi= 0, i = 0,sekizlik_taban;

	
	printf("Sekizlik tabanda bir sayi giriniz:");
	scanf("%d",&sekizlik_taban);
	

    while(sekizlik_taban != 0) {
        sayi += (sekizlik_taban%10) * pow(8,i);
        ++i;
        sekizlik_taban/=10;
    }

    i = 1;
    
    printf("\nSayinin onluk tabandaki karsiligi:%d",sayi);


	return 0;
}
