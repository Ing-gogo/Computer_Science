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

    //task2
    int product(int a, int b)
{
    return a*b;
}
int main()
{
    int x = 4;
    int y = 5;
    int answer = product(x, y);
    printf("The product is %d\n", answer);
    return 0;//function multiplying two  numbedrs.
}
int fibonacci(int limit)
{
    int a = 0, b = 1, sum = 0, temp;

    for (;a <= limit;){
        sum += a;
        temp = a + b;
        a = b;
        b = temp;
    }
    return sum;
}

int main()
{
    int y, result;
    printf("limit\n");
    scanf("%d", &y);
    result = fibonacci(y);
    printf("%d\n", result);
}//fibonacci sequence repeat it value of a depend on b .


int factorial(int x)
{
    if (x == 0){
        return 1;
    }
    return x * factorial(x-1);
}
int main()
{
    int c = 5;
    int fact = factorial(c);
    printf("%d\n", fact);
    return 0;
}//task 2.8 recursion always remember the recursive base.

#include <stdio.h>

void calculateStats(int numbers[], int n, double *average, int *max, int *min) {
    int sum = 0;
    *max = numbers[0];
    *min = numbers[0];

    for (int i = 0; i < n; i++) {
        sum += numbers[i];
        if (numbers[i] > *max) *max = numbers[i];
        if (numbers[i] < *min) *min = numbers[i];
    }
    *average = (double)sum / n; // Calculate the average
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int numbers[n];
    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    double average;
    int max, min;
    calculateStats(numbers, n, &average, &max, &min);

    printf("Average: %.2f\n", average);
    printf("Max: %d\n", max);
    printf("Min: %d\n", min);

    return 0;
}//task 2.7 n is the number of numbers to be entered.

//call by reference
void callbyreference(int* x)
{
    *x = *x + 5;
    printf("%d\n", *x);
}
int main()
{
    int c = 2;
    printf("%d\n", c);
    callbyreference(&c);
    printf("%d\n", c);
}
//call by value
void callbyvalue(int x)
{
    x = x + 5;
    printf("%d\n", x);
}
int main()
{
    int c = 2;
    printf("%d\n", c);
    callbyvalue(c);
    printf("%d\n", c);
}





}

