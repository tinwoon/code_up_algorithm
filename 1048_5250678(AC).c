/*a 
a
 를 2 b  
2b
 배 만큼 곱해 출력한다.*/
 
 #include <stdio.h>
 #include <math.h>
 
 int main()
 {
 int a,b=0;
 int count=0;
 scanf("%d %d",&a,&b);
 count=a*(int)pow(2,b);
 printf("%d",count);
 return 0; 
 
 }
 
 
 
 
 
