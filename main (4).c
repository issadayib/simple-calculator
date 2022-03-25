#include <stdio.h>
#include <math.h>

int main()
{

    float a,b,c,root_part, denom;
    double root1,root2;
    char name [100];

    printf("Solving Quadratic Equation\n");
    printf("Enter the value of a:");
    scanf("%f", &a);
    printf("Enter the value of b:");
    scanf("%f", &b);
    printf("Enter the value of c:");
    scanf("%f",&c);

     float num = ( b * b ) - ( 4 * a *c ) ;

    root_part = sqrt(num);
    denom = 2.0 * a;

    root1 = (   root_part - b ) / denom;
    root2 = ( - b - root_part ) / denom;

    printf("Root1 : %f \n Root2 : %f\n",root1,root2);


if ( num == 0 ){
    printf("Equation has two equal values\n");
}
    else if ( num > 0 ){
        printf("Equation has two distinct values\n");
    }
    else if ( num < 0 )
    {
            printf("Equation has no roots\n");
    }


  return 0;


}
