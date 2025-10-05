#include<stdio.h>
 #include<string.h>
  char * slice(char st[], int i , int j){
     char* ptr1=&st[i];
      st=ptr1;
      st[j+1]='\0';

    return st;

  }
  int main(){
     char st[]="ankit kumar gupta ";
      slice(st,0,7);
      printf("%s",st);

  }