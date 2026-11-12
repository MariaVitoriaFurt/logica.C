#include<stdio.h>
#include<ctype.h>
 int main(){
 char letra;
 printf("Digite um caractere:\n");
 scanf("%c", &letra);
  switch(tolower(letra)){
case 'a':
case 'e':
case 'i':
case 'o':
case 'u':
    printf("'%c' e uma vogal! \n", letra);
    break;
default:
    printf("'%c' e uma consonate! \n", letra);
  }
 return 0;
 }
