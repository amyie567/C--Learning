#include <stdio.h>
int main(){

int rows;
printf("Enter number of rows : ");
scanf("%d",&rows);

// method 1
// int a=rows;
// method 2 we i=0, j=i+1;
// method 3 j<=rows+1-i ;
for(int i=1;i<=rows;i++){
  for(int j=1;j<=rows+1-i;j++){
    printf("* ");
  }
  // a--;
  printf("\n");
}



}