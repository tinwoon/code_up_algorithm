#include <stdio.h>

int main()
{
int integer[3]={0,};
int i=0;

scanf("%d %d %d",&integer[0],&integer[1],&integer[2]);
for(i=0;i<3;i++)
{
if(integer[i]%2==0)
printf("%d\n",integer[i]);


}
return 0;


}
