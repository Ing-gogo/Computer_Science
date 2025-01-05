#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Student{
    char fname[30];
    char lname[30];
    int semester;
    float gpa;
};
struct complexnumber{
    float real;
    float image;
};
struct complexnumber add(struct complexnumber x, struct complexnumber y)//struct complexnumber is used as the fx type because the expected return has the same type as the defined structure.{
    struct complexnumber sum ;
    sum.real = x.real + y.real;
    sum.image = x.image + y.image;
    return sum;
};

float modulus(struct complexnumber z)//float was used because the returned result is of type float not struct complexnumber{
    float moduli;
    moduli = sqrt(pow(z.real, 2) + pow(z.image, 2));
    return moduli;
};
float angles(struct complexnumber a){
    float angle;
    angle = (atan(a.image/a.real) * (180 / M_PI//this was done to convert to degrees));
    return angle;
};
int main()
{
    struct Student stud2;
    strcpy(stud2.fname, "daniella");
    strcpy(stud2.lname, "Tuza");
    stud2.semester = 4;
    stud2.gpa = 5.0;
    
    
    struct Student stud1 = {"Gloria", "Ingabire", 1, 4.5};
    //printf("%s %s %d %.1f\n", stud1.fname, stud1.lname, stud1.semester, stud1.gpa);
    struct Student stud3 = {"Ange", "Utuje", 2, 5.0};
    
    struct Student Students[] = {stud1, stud2, stud3};//students was included because it is the variable name like for example int x x is the variable
    for (int i = 0; i < 3; i++){
        
        printf("%s %s %d %.1f\n", Students[i].fname, Students[i].lname, Students[i].semester, Students[i].gpa);
    }
    struct complexnumber z1 = {1.0, 2.0};
    struct complexnumber z2 = {3.0, 4.0};
    struct complexnumber result = add(z1, z2);
    printf("%.1f + %.1f\n", result.real, result.image);

    float modulii = modulus(z1);
    printf("%.1f\n", modulii);

    struct complexnumber z3 = {1.0, 1.0};
    float anglee = angles(z3);//replace z3 by result to find the angle of z1 + z2 as asked in the question
    printf("%.2f", anglee);

    return 0;
}//task 1

//task2 use of typedef to replace the name of a known data type with a desired alias for a example replace struct by cn in teh code below
typedef struct {
    float real;
    float image;
}cn;
cn add(cn x, cn y){
    cn sum ;
    sum.real = x.real + y.real;
    sum.image = x.image + y.image;
    return sum;
};
typedef char INITIALS;

int main(){
    INITIALS fname = 'G';
    INITIALS lname = 'I';
        printf("%c", fname);
        printf("%c", lname);
}//task 2.3

//task 3
void invert(int Arr[], int size){
    for (int i = 0; i < 100; i++){
        Arr[i] = 99 - i;       
    }
}//function to invert an array use of void is because the function doesn't need to return anything
int main()
{
    int arr[100];
    for(int i = 0; i < 100; i++){
        arr[i] = i;
        printf("%d, ", arr[i]);//task 3.1 code to fill the array with values from 0 to 99
    }
    printf("\n");
    
    invert(arr, 100);
    for(int i = 0; i < 100; i++){
        
        printf("%d,", arr[i]);//main code to invert the array.
        
    }
}
