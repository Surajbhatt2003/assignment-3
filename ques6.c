#include <stdio.h>

int main()
{
    int num,num1;

    printf("Enter any two number: ");
    scanf("%d%d", &num,&num1);

    if(num>num1) 
        printf("%d is  greater number", num) ; 
       else if(num==num1)
        printf(" Both are same or equal number");
        else
        printf("%d is  greater number", num1) ; 
     
    return 0;
}