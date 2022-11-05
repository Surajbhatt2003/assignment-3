#include"stdio.h"
int main()
{
int a;
    printf(" Enter any number\n");
   scanf("%d",&a);

if (a%3==0 || a%7==0) {

    printf(" %d is  divisible by   7 or 3",a);

}

else {

    printf("  %d is not divisible by  7 or 3",a);

}
   return 0;

}