#include"stdio.h"
int main()
{
int a;
    printf(" Enter any number\n");
   scanf("%d",&a);

if (a%3==0 && a%2==0) {

    printf(" %d is  divisible by both 2 and 3",a);

}

else {

    printf("  %d is not divisible by both 2 and 3",a);

}
   return 0;

}