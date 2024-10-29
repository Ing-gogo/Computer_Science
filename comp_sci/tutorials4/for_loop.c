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
	{
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
	}
	{
		int x;
		int binary[32];
		int index;
		printf("enter decimal\n");
		scanf("%d\n", &x);

		if (x == 0)
		{
			printf("Binary :0\n");
		}
		for (x > 0, x = x / 2)
		{
			binary[index] = x % 2;
			index;
		}
		 printf("Binary: ");
		 for (int i = index - 1; i >= 0; i--) {
			 printf("%d", binary[i]);
    }
    printf("\n");

    return 0;
}
	}

}
