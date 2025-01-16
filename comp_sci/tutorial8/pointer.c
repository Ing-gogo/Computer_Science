int main()
{
    int a = 23;
    int *a_ptr = &a;
    printf("%d\n", *a_ptr);   printf("%p\n", a_ptr);
    (*a_ptr)++;/*to change the value pointed to*/.  a_ptr++;//incrementing the adddress of the pointer
    printf("%d\n", *a_ptr);  printf("%p\n", a_ptr)//incremented by 4 because it is ann integer.

    char g;
    g = 'G';
    char *g_ptr = &g;
    printf("%c\n", *g_ptr);
    *g_ptr = 'I';
    printf("%c\n", g);//dereferencing the pointer .

    int arr[] = {1,2,3,4,5};
    //printf("%p\n", arr);prints the address 
    printf("%d\n", *arr);//this prints the first element of the array.
int arr[] = {1,2,3};
    for (int i = 0; i < 3; i++){
        printf("%p\n", &arr[i]);
    }//consecutively prints the address of all the elements of the array.

    int arr[] = {1,2,3,4,5};
    //printf("%p\n", arr);
    //printf("%d\n", *arr);
    int n = sizeof(arr)/sizeof(*arr);
    for (int i = 0; i < n; i++){
        printf("%d\n", arr[i]);
    }//2.2
    int arr[] = {1,2,3,4,5};
    //printf("%p\n", arr);
    //printf("%d\n", *arr);
    int n = sizeof(arr)/sizeof(*arr);
    for (int i = 0; i < n; i++){
        printf("%p\n", &arr[i]);
    }//this code prints the address of all the elements of the array , remeber the &.
    int arr[] = {1,2,3,4,5};
    //printf("%p\n", arr);
    printf("%d\n", *(arr + 2));//task 2.4 accesing the third element.

    #include <stdio.h>
#include <stdlib.h>

{//filling an array
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n); // Corrected to take address of n

    // Dynamically allocate memory for n elements
    int *arr = (int*)malloc(n * sizeof(int));

    if (arr == NULL) { // Check if memory allocation was successful
        printf("Memory allocation failed\n");
        return 1;
    }

    // Taking input for each element
    for (int i = 0; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &arr[i]); // Corrected to store input in arr[i]
    }

    // Printing the elements
    printf("The entered numbers are: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Free the allocated memory
    free(arr);

    return 0;
    //task 4.2 using call by refernce.
	void changenumber(int *nbr){
    *nbr = 0;
    printf("%d\n", *nbr);
}

void main()
{
    int num = 4;
    printf("%d\n", num);
    changenumber(&num);
    printf("%d\n", num);
}
 int x = 5;
    int *x_ptr = &x;
    int **x_d_ptr = &x_ptr;
    (**x_d_ptr)++;
    printf("%d", **x_d_ptr);//task 6.2 .
}

int n;
    printf("Enter n\n");
    scanf("%d", &n);
    int *arr = malloc(sizeof(int )* n);
    if (arr == NULL){
        return 1;
    } 
    
    for(int i = 0; i < n; i++){
        printf("Enter numbers\n");
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++){
        printf("%d", arr[i]);
    }
    printf("\n");
    int x = sizeof(arr);
    printf("%d\n", x);
    
    free(arr);//dynamic array

int arr[] = {1,2,3};
    for (int i = 0; i < 3; i++){
        printf("%d", *(arr + i));
    }//task 3.1
 int arr[][2] = {{1,2},{3,4}};
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            printf("%d", *(*(arr + i) + j));
        }
    }//task 3.2 accessing elements of a multidimensional array rememner to put the size of the column


