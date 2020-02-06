/*

3
2 10
3 20
1 30

1 30
2 10
3 20

*/
#include <stdio.h>

struct big
{
int num;
int gas;
};

int main()
{
int n=0;
int i=0;
int j=0;
scanf("%d", &n);
struct big a[n];
for(i=0;i<n;i++)
{
scanf("%d %d",&a[i].num,&a[i].gas);
}
for(i=1;i<50000;i++)
for(j=0;j<n;j++)
{
if(a[j].num==i)
printf("%d %d\n",a[j].num,a[j].gas);
}
return 0;




}
