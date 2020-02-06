#include <stdio.h>

int main()
{
char a[30]={0,};
int i=0;
gets(a);
for(i=0;i<29;i++)
{
if (a[i]==NULL)
return 0;
printf("'%c'\n",a[i]);



}

return 0;








}
