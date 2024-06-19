// check the number whether it is truthy of falsy value 

#include <stdio.h>


 int main(){

int a;
printf("choose the number : ");
scanf("%d",&a);

if(a>=0){
  if(a){
  printf("you have choosen the number %d =which is  truthy value ",a);
}
else{
  printf("falsy value");
}
}
else{
  printf("number is negative = %d",a);
}





 
}