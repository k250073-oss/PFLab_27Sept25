//Q.5

#include<stdio.h>
#include<math.h>

float a, b, c, x1, x2, xreal, hold;


int main(){

    printf("Enter the \" X Sqaure \" term inclusive of \" Sign \" \n");
    scanf("%f", &a);
    printf("Enter the \" X \" term inclusive of \" Sign \" \n");
    scanf("%f", &b);
    printf("Enter the \" Constant \" term inclusive of \" Sign \" \n");
    scanf("%f", &c);
    
    x1 = (b*b) - (4*a*c);

    if ( x1 < 0){
        x1 = -1*x1;
            
        x1 = sqrt(x1);
    
        x2 = (-1*x1);
        xreal = (-1*b) / (2*a);
        x1 = x1 / (2*a);
        x2 = x2 / (2*a);

        printf(" Roots are imaginary \n");

        if (x1>0){
            printf(" 1st Root is : %f", xreal);
            printf("+");
            printf("%f", x1);
            printf("i");
        } else {
            printf(" 1st Root is : %f", xreal);
            printf("%f", x1);
            printf("i");
        }
        if (x2>0){
            printf(" 2st Root is : %f", xreal);
            printf("+");
            printf("%f", x2);
            printf("i");
        } else {
            printf(" 2st Root is : %f", xreal);
            printf("%f", x2);
            printf("i");
        }

    } else {

    x1 = sqrt(x1);
    hold = x1;
    x1 = ((-1*b) + x1) / (2*a);
    x2 = ((-1*b) - hold) / (2*a);
    

        if (x1 == x2){

            printf(" Roots are Real and Equal, Value is : %f %f \n", x1, x2);

        } else {

            printf(" Roots are Real and Unequal, Values are : %f %f \n", x1, x2);
        }
    }

    return 0;
}
