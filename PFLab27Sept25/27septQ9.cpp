#include<stdio.h>

int i;

int main(){

    printf("UNIVERSITY COURSE REGISTERATION \n Type the select a department with corresponding digit mentioned on left of the following \n 1. CS\n 2. EE\n 3. BBA\n");
    scanf("%d", &i);
    
    switch (i)
    {
    case 1:
        
        printf(" Select your course\n 1. BsCS\n 2. BsAI\n 3.BsCY\n");
        scanf("%d", &i);

        switch (i)
        {
        case 1:
            printf(" You have enrolled for BsCs\n");
            break;
        
        case 2:
            printf(" You have enrolled for BsAI\n");
            break;
        
        case 3:
            printf(" You have enrolled for BsCY\n");
            break;
        
        default:
            printf(" Invalid selection entered or course not available \n");
            break;
        }
    break;

    case 2:

        printf(" Select your course\n 1. Power Systems Engineering\n 2. Control Systems Engineering\n 3.Telecommunications Engineering\n");
        scanf("%d", &i);

        switch (i)
        {
        case 1:
            printf(" You have enrolled for Power Systems Engineering\n");
            break;
        
        case 2:
            printf(" You have enrolled for Control Systems Engineering\n");
            break;
        
        case 3:
            printf(" You have enrolled for Telecommunications Engineering\n");
            break;
        
        default:
            printf(" Invalid selection entered or course not available \n");
            break;
        }    

    break;

    case 3:

        printf(" Select your course\n 1. Marketing\n 2. Finance\n 3.Telecommunications Engineering\n");
        scanf("%d", &i);

        switch (i)
        {
        case 1:
            printf(" You have enrolled for Marketing\n");
            break;
        
        case 2:
            printf(" You have enrolled for Finance\n");
            break;
        
        case 3:
            printf(" You have enrolled for Human Resource Management\n");
            break;
        
        default:
            printf(" Invalid selection entered or course not available \n");
            break;
        }
    default:
        printf(" Invalid selection entered or course not available \n");
        break;
    
    }


    return 0;
}
