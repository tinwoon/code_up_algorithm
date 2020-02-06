/*첫 줄에 합
 둘째 줄에 차(a-b)
셋째 줄에 곱,
넷째 줄에 a를 b로 나눈 몫,
다섯째 줄에 a를 b로 나눈 나머지,
여섯째 줄에 a를 b로 나눈값(실수, 소수점 셋째 자리에서 반올림해 둘째 자리까지 출력)
을 출력한다.
13
7
30
3
1
3.33*/

#include <stdio.h>

int main() {
int a,b=0;
float c,d=0;
float x=0;

scanf("%d %d",&a,&b);
c=a;
d=b;
printf("%d\n",a+b);
printf("%d\n",a-b);
printf("%d\n",a*b);
printf("%d\n",a/b);
printf("%d\n",a%b);
x=c/d;
printf("%.2f\n",x);

return 0;



}
