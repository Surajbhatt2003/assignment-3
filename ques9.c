#include <stdio.h>
 //  finding greatest number program
int main()
{
    int num,a,b ;

    printf("Enter any  3 number: ");
    scanf("%d%d%d", &num,&a,&b );

    if (num>a && num>b)
        printf("%d is greater", num) ; 
        else if (num<a && a>b)
        printf("%d is greater", a) ; 
         else if (num<b && a<b)
        printf("%d is greater", b) ; 
      else if ( num==a &&a==b)
        printf( "all are same or equal number") ;

        else  printf( " enter right number") ;
    return 0;
}