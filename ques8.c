#include <stdio.h>
 // leap year program
int main()
{
    int num ;

    printf("Enter any   number: ");
    scanf("%d", &num );

    if((num%4==0 &&num%100!=0)|| (num%400==0 && num%100==0) )
        printf("%d is a leap year", num) ; 
        else
        printf("%d is not a leap year", num) ; 
     
    return 0;
}