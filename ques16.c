#include"stdio.h"
int main()
{
char a;
    printf(" Enter a character\n");
   scanf("%c",&a);

if (a>64 && a<91) {

    printf(" %c is in Upper case alphabet",a);

}

else if(a>96 && a<123)
{
    printf("%c is in lower case alphabet",a);

}
else if(a>47 && a<58)
{
    printf("%c is  a number digit",a);

}
else {

    printf(" %c is a special character  ");

}
   return 0;

}