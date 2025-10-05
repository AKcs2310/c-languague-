// Write a program using recursion to calculate nth element of Fibonacci series.
#include<stdio.h>
 int fibo(int n){
    if(n==0 || n==1){
        return n;

    }
    return fibo(n-1)+fibo(n-2);
    
 }
 int main(){
    int n;
     printf("enter the nth term you wanna find \n");
      scanf("%d",&n);
      // fibo(n)=fibo(n-1)+fibo(n-2);
      int res=fibo(n);
      printf("the %d ele is %d\n",n,res);

 }