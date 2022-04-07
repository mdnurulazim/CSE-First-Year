#include <stdio.h>
int main ()
{
    char lower ;

    printf("Enter the lowercase letter :");
    scanf("%c",& lower);

    printf("The upercase letter is : %c",lower-32);


    return 0;
}