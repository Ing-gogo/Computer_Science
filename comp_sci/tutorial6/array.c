#include <stdio.h>
#include <stdlib.h>

int main()
{
	/*float array[]= {3.4, 3.1, 4.7, 3.7, 4.9};
	int i;
	for (i= 0; i < 5; i++){
	printf("%.1f\n", array[i]);
	}
	return 0; task 1.3

	float array[]= {3.4, 3.1, 4.7, 3.7, 4.9};
	printf("%.1f\n", array[15]);//taask 1.4 
	return 0;

	float a[]= {3.4, 3.1, 4.7, 3.7, 4.9};
	int i;
	float sum = 0;
	float average;
	for (i = 0; i < 5; i++)
	{
		sum += a[i];
		average = sum / 5;
	}
	printf("%.1f\n", average);//task 1.5
	return 0;*/

	float a[] = {3.4, 3.1, 4.7, 3.7, 4.2};
	int max_index = 0;
	for (int i =  1; i < 5; i++) 
	{
		if (a[i] > a[max_index]){
		max_index = i;
		}
	}
	printf("%d\n", max_index);
	return 0;

}
