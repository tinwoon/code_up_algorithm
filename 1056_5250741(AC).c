#include <stdio.h>
 //서로 다르면 1
 int main()
 {
 int a,b=0;
 scanf("%d %d" ,&a,&b);
 if ((a==1)&&(b==0))
 printf("1");
 else if((a==0)&&(b==1))
 printf("1");
 else
 printf("0");
 
 
 
  return 0; 
 
 }
