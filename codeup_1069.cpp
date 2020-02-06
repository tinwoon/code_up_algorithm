/*평가내용
 평가 : 내용
D : slowly~
 C : run!
 B : good!!
 A : best!!!
나머지문자들 : what?*/


#include <stdio.h>

int main()
{
char a=0;
scanf("%c" ,&a);
if(a=='A')
printf("best!!!");
else if(a=='B')
printf("good!!");
else if(a=='C')
printf("run!");
else if(a=='D')
printf("slowly~");
else

printf("what?");

return 0;




}
