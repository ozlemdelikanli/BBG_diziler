#include <stdio.h>
#include <string.h>

int main() 
{
    char ay[12];
    printf("Ay ismini girin: ");
    scanf("%s", ay);


    if (strcmp(ay, "ocak") == 0) 
        printf("Bu, yilin 1. ayidir.");
    
    else if (strcmp(ay, "subat") == 0) 
        printf("Bu, yilin 2. ayidir.");
    
    else if (strcmp(ay, "mart") == 0) 
        printf("Bu, yilin 3. ayidir.");
    
    else if (strcmp(ay, "nisan") == 0) 
        printf("Bu, yilin 4. ayidir.");

	else if (strcmp(ay, "mayis") == 0) 
        printf("Bu, yilin 5. ayidir.");

	else if (strcmp(ay, "haziran") == 0) 
        printf("Bu, yilin 6. ayidir.");
        
	else if (strcmp(ay, "temmuz") == 0) 
        printf("Bu, yilin 7. ayidir.");

	else if (strcmp(ay, "agustos") == 0) 
        printf("Bu, yilin 8. ayidir.");

	else if (strcmp(ay, "eylul") == 0) 
        printf("Bu, yilin 9. ayidir.");
	
	else if (strcmp(ay, "ekim") == 0)
        printf("Bu, yilin 10. ayidir.");
        
    else if (strcmp(ay, "kasim") == 0)
        printf("Bu, yilin 11. ayidir.");
        
    else if (strcmp(ay, "aralik") == 0)
        printf("Bu, yilin 12. ayidir.");
    
    else
        printf("Gecersiz ay ismi girdiniz.");


    return 0;
}

