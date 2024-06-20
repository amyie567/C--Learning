#include <stdio.h>

int main (){
  int i;
 char c;
  do{
     printf("enter a number = ");
     scanf("%d",&i);
     printf("Square of %d = %d \n",i,i*i);
     printf("\n whether you like more square of number y/n");
     scanf("%c",&c);
  }
  while(i=='c');

}