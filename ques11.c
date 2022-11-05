#include <stdio.h>
 //  finding  user pass or fail
int main()
{
    float  a,b,c,d,e  ;

    printf("Enter marks of your five subjects out of 100: ");
    scanf("%f%f%f%f%f", &a,&b,&c,&d,&e );
     
   

           if( a<33 )
        {     
                     printf(" you are fail in  subject,therefore your marks is not visible ") ; } 
                      else if ( b<33 )
        {     
                     printf("you are fail in 2nd subject,therefore your marks is not visible  ") ; }
                      else if (  c<33)
        {     
                     printf("you are fail in  3rd subject,therefore your marks is not visible  ") ; }
                      else if (d<33  )
        {     
                     printf("you are fail in 4th subject,therefore your marks is not visible  ") ; }
                      else if ( e<33 )
        {     
                     printf(" you are fail in 5th subject,therefore your marks is not visible ") ; }                
       else   
     { float percentage;
      percentage= (a+b+c+d+e)*100/500;
       printf(" percentage is : %f",percentage) ;}
        
    return 0;
}