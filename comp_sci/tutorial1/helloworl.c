#include <stdio.h>
#include <limits.h>
int main()
{
	printf("Hello_Worl!\n");
	printf("|\\\n");
	printf("| \\\n");
	printf("|  \\\n");
	printf("_____\n");
int a = 1;
short int b = 2;
{
	printf("The size of a is : %zu\n", sizeof(a));
	printf("The size of b is : %zu\n", sizeof(b));
}
{
	printf("The maximum int is : %d\n", INT_MAX);
	printf("The minimum int is : %d\n", INT_MIN);
	printf("The minimum int is : %d\n", UINT_MAX);
}
{
	int eyes, mouth;
	eyes = 2;
	mouth = 1;
	printf("I have %d and %d\n", eyes, mouth);
}
{
	char mychar = 'd';
	printf("fourth letter %c\n", mychar);
	printf("My mum says, \"you shuoold learn C!!!\"\n");
	char name[] = "Gloria";
	printf("Hi %s\n",name);
}
{
	int e, f, g;
	e = 1;
	f = 10;
	g = 100;
	printf("%0100d\n", e);
	printf("%100d\n", f);
	printf("%0100d\n", g);

}

}
