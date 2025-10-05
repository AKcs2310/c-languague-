#include<stdio.h>
 int fact(int n){
     if(n==0 || n==1){
         return 1;

     }
     return n* fact(n-1);

 }
 int main(){
     int n;
      printf("enter the number \n");
       scanf("%d",&n);
       int res=fact(n);
        printf("the factorial of %d is %d \n",n,res);

 }