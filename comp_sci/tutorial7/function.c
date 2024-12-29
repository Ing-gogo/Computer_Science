#include <stdio.h>
#include <ctype.h>
#define _USE_MATH_DEFINES
#include <math.h>
int main()
{
    char ch;
    int result;

    ch = 'o';
    result = isalnum(ch);
    printf("%d\n",result);//prints 0 for non alphanumeric characters and 1 for alphanumeric chahracters.
    char x;
    printf("Enter a character\n");
    scanf("%c", &x);
    int result = isalnum(x);
    if (result == 1){
        printf("x is a letter\n");
    }
    else{
        printf("x is a special character\n");
    }//task 1.3

    printf("%f", M_E);//printing euler numbe

    double x;
    printf("Enter angle in degrees: ");
    scanf("%lf", &x); // Use %lf for double and provide the address of x

    // Convert the angle to radians since cos() in <math.h> expects radians
    double radians = x * M_PI / 180.0;
    printf("Cosine of %.2f degrees is: %.2f\n", x, cos(radians));

    return 0;
	
    printf("Value returned by is greater = %d", isgreater(7.0,4.0));//uses float variables and note that it prints 1 if the first one is greater and 0 otherwise.



}

