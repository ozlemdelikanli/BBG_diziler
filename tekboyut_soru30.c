#include <stdio.h>
#include <string.h>

int main()
{
    char cumle[1000];
    int noktalama_isaretleri_sayisi = 0;
    int i;

    printf("Cumleyi giriniz: ");
    gets(cumle);

    for (i = 0; i < strlen(cumle); i++)
    {
        if (cumle[i] == '.' || cumle[i] == ',' || cumle[i] == '!' || cumle[i] == '?' || cumle[i] == ':' || cumle[i] == ';' || cumle[i] == '-' || cumle[i] == '\'' || cumle[i] == '/')
        {
            noktalama_isaretleri_sayisi++;
        }
    }

    printf("Cumlede %d tane noktalama isareti var.\n", noktalama_isaretleri_sayisi);

    return 0;
}
