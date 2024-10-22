#include <stdio.h>
#include <math.h>
#define _USE_MATH_DEFINES

int main()
{
	double pi = 3.1415926535897932846626338279502884197;
	printf("Have some %.20lf\n", pi);
	printf("Have some %.2f\n", pi);
	float p = 3.1415926535897932846626338279502884197;
	printf("Have some %.20f\n", p);
{
	double sum = 0.1 + 0.1 + 0.1;/*double is more precise than flloat due to its 64bits storage  it is always close to the right answer that float*/
	printf("The sum is %.11lf\n", sum);
	float somme = 0.1f + 0.1f + 0.1f;
	printf("the sum is %.11f\n", somme);
}
{
	const float PI = 3.14;
	printf("This is pi %f\n", PI);
	printf("This is the famous pi %f\n", M_PI);
}
{
	float radius = 4.5;
	float area = (radius * radius) * M_PI;
	printf("Area of the circle is %.2f\n", area);
	float circumference = (radius + radius) * M_PI;
	printf("The circumference is %.2f\n", circumference);
}
{
	int cookies = 25;
	int kids = 7;
	int remaining = cookies % kids;
	printf("the remaining cookies are %d\n", remaining);
}
{
	float h, i, k;
	h = 3.2;
	i = 4.1;
	k = sqrt(pow(i, 2) - pow(h, 2));/*remember to include -lm for the linker to be able to link to the math library*/
	printf("Using pythagoras theorem we get %f\n", k);
	
}
{
	int l, m;
	l = 7;/*type casting*/
	m = 2;/*explicit casting*/
	float n;
	n = (float)l/m;
	printf("quotient %.2f\n", n);
}
{
	char mine = 'a';
	mine = mine + 256;/* implicit casting */
	printf("%c\n", mine);
	char me = 'a';
	int mint = me + 100000;/*char casted to integer*/
	printf("%d\n", mint);
	/*In question 4 about debugging you point the cursor on the vertical, line on the left and left click after that click on the debug in the upper bar menu to start debugging there are several options to be able to debug line by line*/
}
/*Printf prints the output of teh code to the user now there is scanf that does teh opposite*/
{
	int o , p;
	o = 3;
	p = 4;
	printf("The sum of %d and %d is %d\n", o, p, o + p);

}
{
	int number;
	printf("Enter an integer:,\n");
	scanf("%d", &number);/*the & shows address*/
	printf("The integer is %d\n", number);
}
{
	char nom[5];
	char surnom[7];
	printf("Enter your name: \n");
	printf("Enter your surname: \n");
	scanf("%6s", nom);
	scanf("%7s", surnom);
	printf("Your name is %s surname is %s.\n", nom, surnom); 
}
{
	/*The mad lips game*/
	char word[3];
	char next[3];
	char following[4];
	printf("Today was so ");
	printf("i'm glad that its  ");
	printf("And now i can  ");
	scanf("%s", word);
	scanf("%s", next);
	scanf("%s", following);
	printf("Today was so %s I'm glad that its %s And now i can %s.\n",word, next, following); 

}

}
