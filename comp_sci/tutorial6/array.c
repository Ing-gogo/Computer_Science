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
	int n = size of (array)/ size of (array[0]);
	for (i = 0; i < 5; i++)
	{
		sum += a[i];
		average = sum / n;
	}
	printf("%.1f\n", average);//task 1.5
	return 0;

	float a[] = {3.4, 3.1, 4.7, 3.7, 4.2};
	int max_index = 0;//helps consider the first element as if its the maximum
	for (int i =  1; i < 5; i++) //i is initialised to 1 to prevent redundancy
	{
		if (a[i] > a[max_index]){
		max_index = i;
		}
	}
	printf("%.1f\n",a[max_index]);
	printf("%d\n", max_index);//to print the index of the hoghest gpa.
	return 0;//task 1.6*/

	//task2
	float gpa_arr[] = {2.5, 3.5, 4.5};
     int n = sizeof(gpa_arr) / sizeof(gpa_arr[0]);
     printf("%d", n);//to find the number of elements in the array
      printf("%p", gpa_arr);//prints the address of the array

//task3

     int x[100];
     for (int i = 0; i < 100; i++)
     printf("%d", x[i]);//3.1 this code prints garbage leftovers because of no initialisation.
     int a[100];
     for (int i = 0; i < 100; i++){
	     x[i] = i + 1;
	     printf("%d\n", x[i]);
     }//task 3.2
     int x[100];
     for (int i = 0; i < 100; i++){
         if (i % 2 == 0){
             printf("1,");
         }
         else
         {
             printf("0,");
         }
     }//task 3.3
     int x[5]; // Declare an array of 5 integers

    // Prompt the user to enter values for the array
    printf("Enter 5 integers:\n");

    // Read the values entered by the user
    for (int i = 0; i < 5; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &x[i]); // Store the user input in the array
    }

    // Print the values entered by the user
    printf("The values entered are:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", x[i]);
    }
    printf("\n");

    return 0;//task 3.4
//task 4
char tutorial[] = "CS1";
    printf("%c", tutorial[1]);//prints only S

    char tutorial[] = "CS1";
    int n = sizeof(tutorial);
    printf("%d", n);//prints 4 because tutorial is an array of characters.
char tutorial[] = "CS1";
    int n;
    for (int i = 0; i < 3; i++){
        n = (int)tutorial[i];
    printf("%d ", n);
    }//casting the array elements to integers prints the ASCII corresponding to the elements.
char tutorial2[] = {'C', 'S', '1', '\0'};//necessary to add the null character otherwise they wont be the same
    char tutorial[] = "CS1";
    if (strcmp(tutorial2, tutorial) == 0){
        printf("They are the same\n");
    }
    else
    {
        printf("different\n");
    }//task 4.7
}
