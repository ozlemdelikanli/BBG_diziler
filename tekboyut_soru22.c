#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100  

int main() 
{
  char c[MAX_LENGTH];  
  char temp[MAX_LENGTH][MAX_LENGTH];  
  int word_count = 0;  

  
  printf("Bir cumle girin: ");
  fgets(c, MAX_LENGTH, stdin);

  
  int i = 0;
  int j = 0;
  while (c[i] != '\0') 
  {
    if (c[i] == ' ' || c[i] == '\n') 
	{
      temp[word_count][j] = '\0';
      word_count++;
      j = 0;
    } 
	
	else 
	{
      temp[word_count][j] = c[i];
      j++;
    }
    i++;
  }

  
  for (i = 0; i < word_count - 1; i++) {
    for (j = i + 1; j < word_count; j++) {
      if (strlen(temp[i]) > strlen(temp[j])) {
        char t[MAX_LENGTH];
        strcpy(t, temp[i]);
        strcpy(temp[i], temp[j]);
        strcpy(temp[j], t);
      }
    }
  }

  
  for (i = 0; i < word_count; i++) {
    printf("%s ", temp[i]);
  }
  
 
  return 0;
}


