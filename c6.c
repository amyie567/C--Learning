#include <stdio.h>

int main(){

  // Question 1
 float i=1.1;

 
  while(i==1.1){

    printf(" value of i = %f",i);
    i=i-0.1;

  } 
  
  //Question 2
  while('1'<'2'){
    printf("\n while loop");
  }  

// Question 3
char x;
for(int x=0;x<=255;x++){
  printf("Ascii value of %d character %c \n",x,x);
}

int x=4,y=0,z;

while(x>=0){
x--;
y++;
if(x==y)
continue;
else 
        printf(" value of x = %d and y = %d ",x,y);

ouput (x,y),(3,1),(2,2)continue,(1,3),(0,4),(-1,5)

}

// Question 4

int x=4,y=0,z;
while(x>=0){

if(x==y)
break;
// continue;
printf("\n %d %d",x,y);
x--;
y++;

// output (x,y) (4,0) (3,1) 

}





return 0;
}
