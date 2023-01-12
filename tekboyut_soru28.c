#include <stdio.h>
#include <string.h>

int main()
{
    char cumle[1000];
    char en_uzun_kelime[50];
    char kelime[50];
    int i, j, en_uzun_kelime_uzunlugu;

    printf("Cumleyi giriniz: ");
    gets(cumle);

    en_uzun_kelime_uzunlugu = 0;
    for (i = 0; i < strlen(cumle); i++)
    {
        j = 0;
        while (cumle[i] != ' ' && i < strlen(cumle))
        {
            kelime[j] = cumle[i];
            j++;
            i++;
        }
        kelime[j] = '\0';

        
        if (j > en_uzun_kelime_uzunlugu)
        {
            en_uzun_kelime_uzunlugu = j;
            strcpy(en_uzun_kelime, kelime);
        }
    }

    printf("En uzun kelime: %s\n", en_uzun_kelime);

    return 0;
}

