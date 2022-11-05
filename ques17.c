#include"stdio.h"
int main()
{
int a,b,c;
    printf(" Enter  3 sides of triangle\n");
   scanf("%d%d%d",&a,&b,&c);

if ( a+b>c && b+c>a && c+a>b ) {

    printf("  it is a valid triangle ");

}
else {

    printf(" Not a valid triangle ");

}
   return 0;

}