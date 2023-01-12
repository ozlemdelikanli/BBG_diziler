#include <stdio.h>
#include <string.h>

int main() 
{
  char cumle[1000]; 


  printf("Cumleyi giriniz: ");
  gets(cumle); 

 
  for (int i = 0; i < strlen(cumle); i++) 
    printf("%c%c", cumle[i], cumle[i]); 
	

  return 0;
}
