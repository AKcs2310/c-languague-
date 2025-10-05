#include<stdio.h>
#include<string.h>

// . Write a function slice() to slice a string. It should change the original string such
// that it is now the sliced string. Take ‘m’ and ‘n’ as the start and ending position
// for slice.
   void slice(char st[], int i, int j){
        int k=0;
         while((i+k<j) && st[i+k]!='\0'){
            st[k]=st[i+k];
            k++;

         }
          st[k]='\0';

   }

 int main(){
 char st[]="ankit kumar gupta";
  slice(st,1,7);
  puts(st);




  

 }
