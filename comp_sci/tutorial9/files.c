#include <stdio.h>
int main(){
FILE* file_ptr;
file_ptr = fopen("t.txt", "w");
if (file_ptr == NULL){
    return 1;
}
fclose(file_ptr);
return 0;
FILE* file_ptr;
file_ptr = fopen("t.txt", "w");//opening the file in append mode adds text at the end of the file and makes sure it is not overwitten task 1.6
if (file_ptr == NULL){
	perror("Error occured");
    return 1;
}

 fputs("Hello there", file_ptr);//to add a text to the file.
 fprint(file_ptr, "Hiii");//1.4
 char name[10];
char surname[10];
int age;

for (int i = 0; i < 3; i++){
    printf("Name");
    scanf("%s", &name);
    printf("surame");
    scanf("%s", &surname);
    printf("agee");
    scanf("%d", &age);
    fprintf(file_ptr, "%s %s %d\n", name, surname, age);//task 1.7
fclose(file_ptr);
return 0;
}
