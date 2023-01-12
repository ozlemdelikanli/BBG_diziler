#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int i, j, n;
    long long int en_buyuk, en_kucuk;
    char en_buyuk_str[100], en_kucuk_str[100];

    printf("Tam sayi giriniz: ");
    scanf("%d", &n);

    
    for (i = 0; i < n; i++)
        en_buyuk_str[i] = '9';
    en_buyuk_str[n] = '\0';
    sscanf(en_buyuk_str, "%lld", &en_buyuk);

   
     for (i = 0; i < n; i++)
        en_kucuk_str[i] = '0';
    en_kucuk_str[0] = '1';
    en_kucuk_str[n] = '\0';
    sscanf(en_kucuk_str, "%lld", &en_kucuk);
    

    printf("%d basamakli en buyuk sayi: %lld\n", n, en_buyuk);
    printf("%d basamakli en kucuk sayi: %lld\n", n, en_kucuk);
    printf("Bu sayilar arasindaki fark: %lld\n", en_buyuk - en_kucuk);

    return 0;
}
