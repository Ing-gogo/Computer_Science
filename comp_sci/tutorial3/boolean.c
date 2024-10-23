#include <stdio.h>
#include <stdbool.h>
#include <limits.h>
#include <string.h>

int main()
{
	bool isprogramingfun = true;
	bool isFishytaste = false;
	printf("%d\n", isprogramingfun ? true : false);
	printf("%d\n", isFishytaste ? true : false);
	printf("The size of bool is :%zu\n", sizeof(isprogramingfun));
	printf("size is: %zu\n", sizeof(isFishytaste));
{
	unsigned int x, y;
	x = -1;
	y = -3;
	bool result = x>y;
	printf("%d\n", result ? true : false);
}
{/*
	int nbr, number;first ask for teh fistr integer then second then declare the bool variable and then print result
	printf("Enter an integer : \n");
	scanf("%d", &nbr);
	printf("Enter an integer : \n");
	scanf("%d", &number);
	bool resultat = nbr!=number;
	printf("%d\n", resultat ? true : false);*/
}
{
	int solution = (4 % 2 == 0) <= (8 * 2);
	bool results = solution;
	printf("%d\n", results ? true : false);

}
{
	/* if statement and boolean statement*/
	int a = 4;
	if (a > 1)/*The use of bool is to help print 1 or 0 indicating true or false if ut wasn't there only a could have been printed*/
	{
		bool resulting = a > 1;
		printf("%d\n", resulting ? true : false);
	}
{
	int b;
	printf("Enter number\n");
	scanf("%d", &b);
	if ( b > 0)
	{
		printf("number is positive\n");

	}
{
	/*int customer;
	printf("Please enter  your age\n");
	scanf("%d", &customer);
	if (customer> 18)
	{
		printf("allowed to buy alcohol\n");
	}*/
}
{
	/*unsigned int a, b, sum;
	printf("Enter the unsigned int\n");
	scanf("%u", &a);
	printf("Enter the other unsigned int\n");
	scanf("%u", &b);
	if (a > UINT_MAX - b)
	{
		printf("overflow detected\n");
	}
	else {
		sum = a + b;
		printf("The sum is:%u\n", sum);
	}*/
}
{
	int d = 5;
	if (d % 2 == 0)
	{
		printf("number is even\n");
	}
	else
	{
		printf("number is odd\n");
	}
}
{
	char sound[10];
	printf("Enter sound made\n");
	scanf("%s", sound);
	if (strcmp(sound, "hauf")==0)
	{
		printf("Its a dog\n");
	}
}	
{
	float x, y;
	printf("Enter first number\n");
	scanf("%f", &x);
	printf("Enter second number\n");
	scanf("%f", &y);
	switch(x, y != 0)
		case(
}


}	
}

}

