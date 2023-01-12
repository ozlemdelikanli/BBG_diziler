#include <stdio.h>
#include <string.h>

int main() {
    char kelime[100], anahtar[100], sifre[100];
    int i, j;

    printf("Lutfen kelimeyi giriniz: ");
    scanf("%s", kelime);

    printf("Lutfen anahtar kelimeyi giriniz: ");
    scanf("%s", anahtar);


    j = strlen(kelime);
    for (i = strlen(anahtar); i < j; i++) {
        anahtar[i] = anahtar[i % strlen(anahtar)];
    }

    for (i = 0; i < j; i++) {
        sifre[i] = (kelime[i] - 'A' + anahtar[i] - 'A') % 26 + 'A';
    }

    printf("Beauford sifresi: %s\n", sifre);

    return 0;
}

