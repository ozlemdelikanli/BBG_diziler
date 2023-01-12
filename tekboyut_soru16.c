#include <stdio.h>
#include <stdlib.h>

int main()
{
  int day, month;

  printf("Dogum gununuzu girin (1-31): ");
  scanf("%d", &day);

  printf("Dogum ayinizi girin (1-12): ");
  scanf("%d", &month);

  if (day>31 || month>12) 
  printf ("Gecersiz ifade girdiniz.");
  
  	else if ((month == 3 && day >= 21) || (month == 4 && day <= 20)) 
    printf("Koc burcusunuz.\n");
    
   else if ((month == 4 && day >= 20) || (month == 5 && day <= 20)) 
    printf("Boga burcusunuz.\n");
    
   else if ((month == 5 && day >= 21) || (month == 6 && day <= 21)) 
    printf("Ikizler burcusunuz.\n");
    
   else if ((month == 6 && day >= 21) || (month == 7 && day <= 22)) 
    printf("Yengec burcusunuz.\n");
    
   else if ((month == 7 && day >= 23) || (month == 8 && day <= 22)) 
    printf("Aslan burcusunuz.\n");
    
   else if ((month == 8 && day >= 23) || (month == 9 && day <= 22)) 
    printf("Basak burcusunuz.\n");
    
   else if ((month == 9 && day >= 23) || (month == 10 && day <= 22)) 
    printf("Terazi burcusunuz.\n");
    
   else if ((month == 10 && day >= 23) || (month == 11 && day <= 21)) 
    printf("Akrep burcusunuz.\n");
    
   else if ((month == 11 && day >= 22) || (month == 12 && day <= 21)) 
    printf("Yay burcusunuz.\n");
    
   else if ((month == 12 && day >= 22) || (month == 1 && day <= 19)) 
    printf("Oglak burcusunuz.\n");
    
   else if ((month == 1 && day >= 20) || (month == 2 && day <= 18)) 
    printf("Kova burcusunuz.\n");
    
   else if ((month == 2 && day >= 19) || (month == 3 && day <= 20)) 
    printf("Balık burcusunuz. \n");
    
   else  
	printf("Gecersiz ifade girdiniz.\n");
  


    return 0;
}
    