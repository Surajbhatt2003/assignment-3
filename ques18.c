//18. Write a program which takes the month number as an input and display number of
//days in that month
#include<stdio.h>
 int main()
 {
     int x,y;
     printf("ENTER number of MONTH");
     scanf("%d",&x);
     if(x==1 || x==3 || x==5 || x==7 || x==8 || x==10 || x==12)
        printf("THE %d month has 31 days ",x);
     else if(x==4 || x==6 || x==9 || x==11)
        printf("THS %d month has 30 days",x);
     else if(x==2)
        {
        
                 printf("%d has  28/29 days i.e feb month",x);
            }
            return 0;
    }