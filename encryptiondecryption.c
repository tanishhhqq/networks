
#include <stdio.h>
int main()
{
  int i, x;
  char str[100];
  printf("\nPlease enter a string : ");
  gets(str);
  printf("\nPlease Enter your choice : \n");
  printf("1. Encryption\n");
  printf("2. Decryption\n");
  scanf("%d", &x);
//using switch case statements
  switch(x)
  {
    case 1:
    for(i = 0; (i < 100 && str[i] != '\0'); i++)
      str[i] = str[i] + 3; //the key for encryption is 3 that is added to ASCII value
      printf("\nEncrypted string is : %s\n", str);
      break;
    case 2:
      for(i = 0; (i < 100 && str[i] != '\0'); i++)
        str[i] = str[i] - 3; //the key for encryption is 3 that is subtracted to ASCII value
      printf("\nDecrypted string is : %s\n", str);
      break;
    default:
      printf("\nError : Please Enter correct choice \n");
  }
  return 0;
}
