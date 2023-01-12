#include <stdio.h>

int main(void) 
{
  int gun, ay, yil;

  printf("Dogum tarihini giriniz (gg aa yyyy): ");
  scanf("%d%d%d", &gun, &ay, &yil);


  printf("Dogum tarihi: %d ", gun);
  

  switch (ay) 
  {
    case 1:
      printf("Ocak ");
      break;
    case 2:
      printf("Subat ");
      break;
    case 3:
      printf("Mart ");
      break;
    case 4:
      printf("Nisan ");
      break;
    case 5:
      printf("Mayıs ");
      break;
    case 6:
      printf("Haziran ");
      break;
    case 7:
      printf("Temmuz ");
      break;
    case 8:
      printf("Agustos ");
      break;
    case 9:
      printf("Eylul ");
      break;
    case 10:
      printf("Ekim ");
      break;
    case 11:
      printf("Kasım ");
      break;
    case 12:
      printf("Aralık ");
      break;
    default:
      printf("Gecersiz ay ");
      break;
  }

  printf("%d\n", yil);


  return 0;
}
