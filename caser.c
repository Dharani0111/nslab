#include <stdio.h>

int main()
{
  int i, x;
  char str[100];

  printf("\nPlease enter a string: ");
  scanf("%s",str);
  printf("\nEnter the key: ");
  scanf("%d", &x);

  for(i = 0; (i < 100 && str[i] != '\0'); i++)
    str[i] = str[i] + x;
  printf("\nEncrypted string: %s\n", str);

  for(i = 0; (i < 100 && str[i] != '\0'); i++)
    str[i] = str[i] - x; 
  printf("\nDecrypted string: %s\n", str);
  
  return 0;
}
