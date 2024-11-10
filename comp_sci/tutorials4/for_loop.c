#include <stdio.h>
#include <math.h>
int main()
{
	/*{
		int i;
		int j;
		printf("Inttroduce number\n");
	       	scanf("%d", &j);
		for (i = 1; i <= j; ++i)
		{
			printf("%d\n", i);
		}
		return 0;
	}*/
	/*{
		int a;
		int b;
		int sum = 0;
		printf("Enter number\n");
		scanf("%d", &b);
		for (a = 1; a < b; a++)
		{
			sum += a;
			printf("Sum is: %d\n", sum) this prints the cumulative sum instead of the final sum
		}
		printf("sum is: %d\n", sum);
	}*/
	/*{
		int a, b;
		int sum = 0;
		printf("choose a number\n");
		scanf("%d", &b);
		for (a = 1; a <= b; a++)
		{
			sum += a;
			if (sum % 2 == 0)
			{
			printf("The usm is even and is:%d\n", sum);
			}
			else
			{
			printf("The sum is odd and is: %d\n", sum);
			}
		}
	}*/
	{
		int x;
		int binary[32];
		int index;
		printf("enter decimal\n");
		scanf("%d", &x);

		if (x == 0)
		{
			printf("Binary :0\n");
		}
		for (; x > 0; x/=2)//teh first semicolon is for intialissation for works with 3 semicolons its a must
		{
			binary[index] = x % 2;
			index++;
		}
		 printf("Binary: ");
		 for (int i = index - 1; i >= 0; i--) {
			 printf("%d", binary[i]);
    		}
    		printf("\n");
    		return 0;
	}
	{
		int a;
		int b = 4;
		for (a = 1; a <= b; a++)//tutorial 5 task
			{
				int start;
				for (start = 2; start <= a; start++)
					{
						printf("%d, start");
					}
				printf("\n");
			}
		

{
    // Loop to print the pattern
    for (int i = 2; i <= 5; i++) {
        // Inner loop to print the number `i` repeated `i` times
        for (int j = 1; j <= i; j++) {
            printf("%d ", i);
        }
        printf("\n");  // Move to the next line after each row
    }
    
    return 0;
}
int num = 1;  // Start with number 1
    
    // Outer loop for the number of rows
    for (int i = 1; i <= 4; i++) {
        // Inner loop to print the numbers in each row
        for (int j = 1; j <= i; j++) {
            printf("%d ", num);
            num++;  // Increment the number after printing
        }
        printf("\n");  // Move to the next line after each row
    }
    
    return 0;

	}
{
   char d[6];
   char e[] = "today";
   do 
   {
       printf("Enter password\n");//task 2.3 tutorial 5
       scanf("%s",d);
   }while(strcmp(d, e)!= 0);
   printf("Password is ok\n");
    return 0;
}
