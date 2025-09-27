// Q7, Login details

#include<stdio.h>
#include<string.h>

char a[6] = "admin";
char b[5] = "1234";
char userin[7];
int i, j;

int main(){

    printf("Enter the Following details in \" small font \" \n. Enter Username \n");
    scanf("%s", &userin);

    i = strcmp (userin, a);

    if (i == 0){

        printf(" Enter the password \n");
        scanf("%s", &userin);

        j = strcmp(userin, b);

        if ( j == 0){

            printf(" Login Successful \n");
        } else {

            printf(" Incorrect Password Entered \n");
        }

    } else {

        printf(" Incorrect Username Entered \n");
    }



    return 0;
}
