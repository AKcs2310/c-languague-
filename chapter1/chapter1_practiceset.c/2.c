// 2. Calculate the area of a circle and modify the same program to calculate the
// volume of a cylinder given its radius and height.
#include<stdio.h>
 int main(){
    int r;
     printf(" enter the radius of the circle \n");
     scanf("%d",&r);
     float area;
      area=3.14*r*r;
      printf("the area of the circle is %f\n",area);
      int height ;
       printf("enter the height of the cylinder \n");
        scanf("%d",&height);
        float vol=3.14*(r*r)*height;
         printf("the volume of the cylinder is %f",vol);
         

 }