#include <stdio.h>

int main(){
  int num;
  printf("Enter the number : ");
  scanf("%d",&num);

for(int i=1;i<=10;i++){
int result=i*num;
printf("multiple of %d * %d = %d \n",num,i,result);
}




}