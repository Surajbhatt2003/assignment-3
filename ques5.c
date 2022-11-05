#include <stdio.h>

int main()
{
    int num;

    printf("Enter any number: ");
    scanf("%d", &num);

    if(num>99&&num<=999) 
        printf("%d is 3 digit number", num) ; 
       else  printf("%d is not a 3 digit number", num);

    return 0;
}