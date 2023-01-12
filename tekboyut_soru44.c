#include <stdio.h>
#include <stdlib.h>


int main()
{
	char cumle[1000];
	int i;
	
	printf("bir cumle giriniz:");
	gets(cumle);
	
	for(i=0;cumle[i]!='\0';i++)		
		printf("%X",cumle[i]);
	
	
	return 0;
	
}
