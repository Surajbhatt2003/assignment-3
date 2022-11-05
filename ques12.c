#include"stdio.h"
int main()
{
char a;
    printf(" Enter a character\n");
   scanf("%c",&a);

if (a>64 && a<91) {

    printf(" %c is in Upper case ",a);

}

else if(a>96 && a<123)
{
    printf("%c is in lower case ",a);

}
else {

    printf("Enter only alphabets ");

}
   return 0;

}