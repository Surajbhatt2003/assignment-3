#include"stdio.h"
int main()
{
int a;
    printf(" Enter a number  to check  divisible by 5 or not\n");
   scanf("%d",&a);

if (a==0) {

    printf(" Not divisible by 5 ");

}

else if(a%5==0)
{
    printf("%d is divisible by 5",a);

}
else {

    printf("%d is  not divisible by 5",a);

}
   return 0;

}