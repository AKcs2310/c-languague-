// 6. Write a program containing functions which counts the number of positive
// integers in an array.
#include<stdio.h>
 int count(int arr[],int n){
     int res=0;
      for(int i=0;i<n;i++){
         if(arr[i]>0){
            res++;

         }
      }
       return res;
       

 }
 int main(){
    int arr[]={1000,8201201,88,-1,-8,88,100};
     int n=sizeof(arr)/sizeof(arr[0]);
     int res=count(arr,n);
     printf("%d",res);

 }