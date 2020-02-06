#include <stdio.h>
#include <stdlib.h>




struct sch
{
char name[99];
int year;
int month;
int day;
};

void toggle(struct sch *a,struct sch *b)
{
//printf("before a=%s\n",a->name);
//printf("before b=%s\n",b->name);
struct sch tmp;
tmp=*b;
*b=*a;
*a=tmp;
//printf("after a=%s\n",a->name);
//printf("after b=%s\n",b->name);
}






int main()
{
int num=0;
int i,x,y;
int j=0;
int tmp=0;
scanf("%d",&num);
struct sch schedule[num];

for(i=0;i<num;i++)
{
scanf("%s %d %d %d",&schedule[i].name,&schedule[i].year,&schedule[i].month,&schedule[i].day);
}

 for(x=0;x<num;x++)
  for(y=x+1;y<num;y++)
 {
    if(schedule[x].year>schedule[y].year)
      toggle(&schedule[x],&schedule[y]);
    
     else if(schedule[x].year==schedule[y].year)
     {
       if(schedule[x].month>schedule[y].month)
         toggle(&schedule[x],&schedule[y]);
      else if(schedule[x].month==schedule[y].month)
           {
            if(schedule[x].day>schedule[y].day)
            toggle(&schedule[x],&schedule[y]);
            else if(schedule[x].day==schedule[y].day)
                 {
                     if(strcmp(schedule[x].name,schedule[y].name)>0)
                      toggle(&schedule[x],&schedule[y]);

                 }
           }
           
           
      }
      
      
      
  }

for(i=0;i<num;i++)
{

printf("%s\n",schedule[i].name);


}



return 0;
}
