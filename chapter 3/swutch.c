#include<stdio.h>
 int main(){
    int a;
     printf("enter a : \n");
     scanf("%d",&a);
     switch(a){
         case 1:
         printf("you entered 1\n");
         break;
         case 2:
          printf("you entered 2\n");
          break;
          default:
          printf("nothing matched\n");
          return 0;
          
     }
 }