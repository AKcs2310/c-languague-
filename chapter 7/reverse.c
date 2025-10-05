// Write a program containing a function which reverses the array passed to it
#include<stdio.h>
 void swap(int * i, int* j){
     int temp=*i;
     *i=*j;
     *j=temp;


 }
void reverse(int arr[],int n){
     int i=0;
      int j=n-1;
       while(i<j){
        swap(&arr[i],&arr[j]);
        i++;
        j--;


       }



}
 int main(){
     int arr[4]={1,2,3,4};
    int n;
    n=sizeof(arr)/sizeof(arr[0]);
      
      reverse(arr,n);
       for(int i=0;i<n;i++){
         printf("%d ",arr[i]);

       }

 }