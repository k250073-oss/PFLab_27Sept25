#include<stdio.h>
#include<string.h>

int i, j, c_1, c_2;
char strinput[16];
char cat1[7] = "DRINKS";
char cat2[9] = "FASTFOOD";
char cat1_1[7] = "PAKOLA";
char cat1_2[9] = "COLANEXT";
char cat2_1[7] = "BURGER";
char cat2_2[5] = "ROLL";

int main(){

    printf(" WELCOME TO ONLINE CART - Please Enter the following details in CAPITAL TEXT \n");
    printf(" Please type category, \" DRINKS \" or \" FASTFOOD \" \n");
    
    
    scanf("%s", &strinput);
   
    i = strcmp(strinput, cat1);
    j = strcmp(strinput, cat2);

    if ( i != 0 && j != 0){

        printf("Invalid category entered or Stock not Available \n");
        return 1;

    }

    if ( i == 0){
        i = -1;
    }

    if ( j == 0){
        i = -2;
    }
    

    switch (i)
    {
    case -1:
        
        printf(" Type PAKOLA for Pakola \n");
        printf(" Type COLANEXT for ColaNext \n");
        scanf("%s", &strinput);

        i = strcmp(strinput, cat1_1);
        j = strcmp(strinput, cat1_2);


        if ( i == 0){
        i = -3;
        }

        if ( j == 0){
        i = -4;
        }



        switch (i)
        {
            case -3:
                printf(" Pakola added to cart");
                break;
            
            case -4:
                printf(" ColaNext added to cart");
                break;

            default:
                printf("Invalid Item Entered or Item Out of Stock");
                break;
        }

    break;

    case -2:

        printf(" Type BURGER for Burgers \n");
        printf(" Type ROLL for Rolls \n");
        scanf("%s", strinput);


        i = strcmp(strinput, cat2_1);
        j = strcmp(strinput, cat2_2);


        if ( i == 0){
        i = -5;
        }

        if ( j == 0){
        i = -6;
        }


          switch (i)
            {
            case -5:
                printf(" Burger added to cart \n");
                break;
        
            case -6:
                printf(" Roll added to cart \n");
                break;

            default:
                printf(" Invalid Item Entered or Item Out of Stock ");
                break;
        }
    break;
    
    default:
        printf("Invalid Category Entered or Entered Category Out of Stock");
        break;

    }





    return 0;

}
