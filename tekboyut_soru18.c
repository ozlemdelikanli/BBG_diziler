#include <stdio.h>
#include <math.h>

int main()
{
    int eleman_sayisi, i;
    double x_dizi[100], w_dizi[100], x_toplam = 0, w_toplam = 0, agirlikli_aritmetik_ortalama, agirlikli_geometrik_ortalama = 1, agirlikli_harmonik_ortalama = 0;

    printf("Eleman sayisini giriniz: ");
    scanf("%d", &eleman_sayisi);

    printf("x dizisinin elemanlarini giriniz: ");
    
	
	for (i = 0; i < eleman_sayisi; i++)
    {
        scanf("%lf", &x_dizi[i]);
    }

    printf("w dizisinin elemanlarini giriniz (girilen elemanlarin sirasiyla agirliklari): ");
    
	
	for (i = 0; i < eleman_sayisi; i++)
    {
        scanf("%lf", &w_dizi[i]);
        w_toplam += w_dizi[i];
        x_toplam += x_dizi[i] * w_dizi[i];
        agirlikli_geometrik_ortalama *= pow(x_dizi[i], w_dizi[i]);
        agirlikli_harmonik_ortalama += w_dizi[i] / x_dizi[i];
    }
   
   
    agirlikli_aritmetik_ortalama = x_toplam / w_toplam;
    agirlikli_geometrik_ortalama = pow(agirlikli_geometrik_ortalama, 1.0 / w_toplam);
    agirlikli_harmonik_ortalama = w_toplam / agirlikli_harmonik_ortalama;

    
	printf("Agirlikli Aritmetik Ortalama: %lf\n", agirlikli_aritmetik_ortalama);
    printf("Agirlikli Geometrik Ortalama: %lf\n", agirlikli_geometrik_ortalama);
    printf("Agirlikli Harmonik Ortalama: %lf\n", agirlikli_harmonik_ortalama);

    return 0;
}
