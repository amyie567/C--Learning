
#include <stdio.h>
int main(){
// Question 1
int j;
while(j<=10){
  printf("\n%d ",j);
  j+=1;//j=j+1;

  // output =0,1,2.....10.
}
// Question 2
int i;
while(i<=10){
printf("\n%d",i);
i++;
// output=0,1,2...10.
}

//Question 3
int x=1;
while(x==1){
  x=x-1;
  printf("\n%d",x);
}
// output=0

// Question 4
int i=1;
while(i==1)
i-=1;
printf("\n%d",i);

// output=0

// Question 5

char x;
while(x=0;x<=255;x++)
printf("\n Ascii value of %d and character %c",x,x);
// show error, if debug anyway output = 0;


// Question 6
int x=4,y,z;
y=--x;
z=x--;
printf("\n value of x = %d, y = %d, z = %d",x,y,z);

// output = x=(--x,x--,2) ,y=3,z=3

// Question 7
int x=4,y=3,z;
z=x-- -y;
printf("\n value of x = %d, y = %d, z = %d ",x,y,z);
// output = x=3,y=3, z=1

// Question 8
while('a'<'b'){
printf("\nMalyalam is palindrome");
break;
// this is the fix version no infinite loop;
}

// output = Infinite loop 


// Question 9
int i=10;
while(i=20)
printf("\n computer is buff!");

// output=infinite loop

// Question 10

int i;
while(i=10){
  printf("\n value of i = %d",i);
  i+=1;
}




return 0;
}