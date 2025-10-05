#include<stdio.h>
 void swap(int* x, int* y){
     int temp;
     temp=*x;
     *x=*y;
     *y=temp;
     return;

 }
int main(){
     int x=90;
      int y=100;
       swap(&x,&y);
        printf("the value of x and y after swap is %d and %d \n",x,y);

}