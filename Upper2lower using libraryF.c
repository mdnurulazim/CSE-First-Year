/*Conversion from to Uppercase to Lowercase letter using
Library function  */

#include <stdio.h>
int main()
{
    char lower,upper;


    printf("Enter any Uppercase letter : ");
    scanf("%c",& upper);

    lower = tolower(upper);
    printf("The lowercase letter is : %c",lower);


    return 0;

}