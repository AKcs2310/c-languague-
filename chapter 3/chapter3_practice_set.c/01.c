#include<stdio.h>

int main(){
    //Write a program to find greatest of four numbers entered by the user.
    int a,b,c,d;
      printf("enter the 1st number \n");
       scanf("%d", &a);
          printf("enter the 2nd number \n");
       scanf("%d", &b);
          printf("enter the 3rd number \n");
       scanf("%d", &c);
          printf("enter the 4th number \n");
       scanf("%d",&d);
        if(a>b && a>c && a>d){
             printf("a is the greatest\n");

        }
          else if(b>a && b>c && b>d){
             printf("b is the greatest\n");
             
        }
         else  if(c>b && c>a && c>d){
             printf("cdis the greatest\n");
             
        }
         else  if(d>b && d>c && d>a){
            printf("d is the greatest\n");
             
        }

}