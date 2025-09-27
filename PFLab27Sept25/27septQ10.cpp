#include<stdio.h>

int age, i;
char type;

int main(){

    printf("Please Enter Your Age \n");
    scanf("%d", &age);

    if (age < 12){
        type = 'c';
    } else if (age >12 && age <60)
    {
        type = 'a';
    }
    else if (age > 60)
    {
        type = 's';
    }

    printf("Select the movie type\n For ACTION Press 1\n For COMEDY Press 2\n For HORROR Press 3\n");
    scanf("%d", &i);

    switch (i)
    {
    case 1:
        if (type == 'c'){
            printf("Ticket Type:\n Age Category: Child\t Movie Category: Action\n ");
        }
        if (type == 'a'){
            printf("Ticket Type:\n Age Category: Adult\t Movie Category: Action\n ");
        }
        if (type == 's'){
            printf("Ticket Type:\n Age Category: Senior Citzen\t Movie Category: Action\n ");
        }
        break;
        
    case 2:
        if (type == 'c'){
            printf("Ticket Type:\n Age Category: Child\t Movie Category: Comedy\n ");
        }
        if (type == 'a'){
            printf("Ticket Type:\n Age Category: Adult\t Movie Category: Comedy\n ");
        }
        if (type == 's'){
            printf("Ticket Type:\n Age Category: Senior Citzen\t Movie Category: Comedy\n ");
        }
        break;

    case 3:
        if (type == 'c'){
            printf("Ticket Type:\n Age Category: Child\t Movie Category: Horror\n ");
        }
        if (type == 'a'){
            printf("Ticket Type:\n Age Category: Adult\t Movie Category: Horror\n ");
        }
        if (type == 's'){
            printf("Ticket Type:\n Age Category: Senior Citzen\t Movie Category: Horror\n ");
        }
        break;


    default:
        printf(" Invalid Ticket Type Entered or Ticket type not Available\n");
        break;
    }





    return 0;
}
