#include<stdio.h>
#include<string.h>
int main()
{
	char sifre[100],temp[100];
	int i, uzunluk;
	printf("Lutfen porta sifresini giriniz:");
	gets(sifre);

	uzunluk=strlen(sifre);
	for(i=0;i<uzunluk;i++)
	{
		sifre[i] = (sifre[i] - temp[i] + 26) % 26 + 'a';
		
	
		
	}
	printf("sifrelenmis kelime: %s\n",sifre);
	
	return 0;
	
}
