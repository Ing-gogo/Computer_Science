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
file_ptr = fopen("t.txt", "w");//opening the file in append mode adds text at the end of the file and makes sure the previous text is not overwitten task 1.6
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
    scanf("%s", name);
    printf("surame");
    scanf("%s", surname);
    printf("agee");
    scanf("%d", &age);
    fprintf(file_ptr, "%s %s %d\n", name, surname, age);//task 1.7
fclose(file_ptr);
file = fopen("t.txt", "r");
if (file_ptr == NULL){
	perror("Error");
	return 1;
}
while(fscanf(file_ptr, "%s %s %d", name, surname, &age)== 3){
		printf("%s %s %d\n", name, surname, age);
}//use of fscanf
fclose(file_ptr);

   char ch;
   file = fopen("text.txt", "r");
   if (file == NULL){
       perror("Error");
       return 1;
   }
   //while(fgets(ch, sizeof(ch), file) != NULL){
     //  puts(ch);
   //}for this we use a buffer as an array because a block of words is read all at once soo we need ch[50]
   while((ch = fgetc(file)) != EOF){
       putchar(ch);//for this we need ch only as a variable not an array because it reads only character by character not a block of words.
   }
   fclose(file);
return 0;
//binary files are more efficient easy to write and read when open it in write mode use"wb" and "rb"while reading.
//
}
