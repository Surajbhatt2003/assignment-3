#include <stdio.h>
 //  finding  profit or loss percentage
int main()
{
    float cp,sp,profit , loss ;

    printf("Enter  cost price and sellling price: ");
    scanf("%f%f", &cp,&sp  );
     profit= sp-cp;
     loss = cp-sp;

    if ( sp>cp )
        { profit= (profit/cp)*100;


        printf(" profit percentage is : %f ", profit) ; }
        else if ( cp>sp)
        {    loss= (loss/cp)*100;

              printf("  loss percentage is : %f ", loss) ; }

         else if ( cp==sp)
        printf(" NO profit no loss") ; 
      

        else  printf( " enter right number") ;
    return 0;
}