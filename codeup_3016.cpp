/*

4
Jeon 95 80 100
Kim 59 85 75
Lee 90 100 75
Bae 100 82 80
Bae 3 2
*/

#include <stdio.h>
#include <stdlib.h>

struct student 
{
char name[100];
int grade1;
int grade2;
int grade3;
};

int main() 
{
int n=0;
int i=0;
int max=0;//첫번째 점수중 가장큰 점수의 값
int save=0;//첫번째 점수가 가장 컸던 번의 넘버를 저장하는 수
int stat1=1;
int stat2=1;//첫번째 점수가 가장 컸던 변의 나머지 점수의 등수를 저장하는 수
scanf("%d" ,&n);
struct student a[n];
for(i=0;i<n;i++)
{
scanf("%s %d %d %d",&a[i].name,&a[i].grade1,&a[i].grade2,&a[i].grade3);
}
for(i=0;i<n;i++)
{
   if (a[i].grade1>max)
   {
    max=a[i].grade1;
     save=i;
   }
}
for(i=0;i<n;i++)
{
if(a[save].grade2<a[i].grade2)
stat1=stat1+1;
if(a[save].grade3<a[i].grade3)
stat2=stat2+1;
}
printf("%s %d %d",a[save].name,stat1,stat2);





return 0;
}
