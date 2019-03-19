#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int main() {
  int i,j,nstr[100],nkey[100],ncip[100];
  char str[100], key[100];
  printf("Enter a String: ");
  scanf("%s",str);

  for(i=0,j=0;i<strlen(str);i++){
    if(str[i] !=' ')
      str[j] = toupper(str[i]);j++;
  }
  str[j]='\0';

  printf("\nEntered String: %s",str);

  for(i=0,j=0;i<strlen(str);i++)
    nstr[i] = str[i] - 'A';

  printf("\nEnter a Key: ");
  scanf("%s",key);

  for(i=0,j=0;i<strlen(str);i++){
    if(str[i] !=' ')
      key[j] = toupper(key[i]);j++;
  }
  key[j]='\0';

  for(i=0;i<strlen(str);){
    for(j=0; (j<strlen(key)) && (i<strlen(str)); j++){
      nkey[i] = key[j] -'A';
      i++;
    }
  }

  for(i=0;i<strlen(str);i++)
    ncip[i] = nstr[i]+nkey[i];

  for(i=0;i<strlen(str);i++){
    if(ncip[i]>25)
      ncip[i] = ncip[i] - 26;
  }

  printf("Vignere cipher is ");

  for(i=0,j=0;i<strlen(str);i++)
    printf("%c",(ncip[i]+'A'));
  return 0;
}
