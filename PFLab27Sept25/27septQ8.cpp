#include <stdio.h>
#include <math.h>

float loan, rate, total, emi;
int years, type;


int main() {

    printf("Enter loan amount  ");
    scanf("%f", &loan);

    printf("Enter loan duration (in years) ");
    scanf("%d", &years);

    printf("Enter annual interest rate (in %%) ");
    scanf("%f", &rate);

    printf("Enter interest type \n For Simple Interest TYPE 1 \n For Compound Interest TYPE 2 \n");
    scanf("%d", &type);

    if (type == 1) {
        
        float simpleinterest = (loan * rate * years) / 100;
        total = loan + simpleinterest;

    } else if (type == 2) {
        
        total = loan * pow((1 + rate / 100), years);

    } else {

        printf("Invalid interest type selected.\n");
        return 1;
    }

   
    emi = total / (years * 12);

    
    printf("Total amount to be repaid: %f\n", total);
    printf("Monthly EMI: %f\n", emi);

    return 0;
}

