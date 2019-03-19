#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
  int i,j,len,rails,count,code[100][100];
  char str[1000];
  printf("\nEnter a Message: ");
  scanf("%s",str);
  len = strlen(str);
  printf("\nEnter Number of Rails: ");
  scanf("%d",&rails);
  printf("\nEncrypted Message: ");
  for(i=0; i<rails; i++)
  { 
    for(j=0; j<len; j++)
    {
      code[i][j]=0;
    }
  }
  count=0;
  j=0;
  while(j<len)
  {
    if(count%2==0)
    {
      for(i=0; i<rails; i++)
      {
        code[i][j] = (int)str[j];
        j++;
      }
    }
    else
    {
      for(i = rails-2; i>0; i--)
      {
        code[i][j] = (int)str[j];
        j++;
      }
    }
    count++;
  }
  
  for(i=0; i<rails; i++)
  {
    for(j=0; j<len; j++)
    {
      if(code[i][j] != 0)
        printf("%c",code[i][j]);
    }
  }
  printf("\n");
  return 0;
}
