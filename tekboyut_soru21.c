#include <stdio.h>
#include <string.h>

int main() {
  char str[100];  
  int i;

//Ondalıklı sayıda kullanılan virgüklü noktaya dönüştürür

  printf("Ondalikli sayi giriniz: ");
  gets(str);  

  int len = strlen(str); 
  
  
  for (i = 0; i < len; i++) 
  {
    if (str[i] == ',') 
    {
      str[i] = '.';
      break;
    }
  }

  printf("Duzeltilmis hali: %s\n", str);

  return 0;
}