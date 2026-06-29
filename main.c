//? gcc main.c -o main && ./main
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main()
{
	// printf("Hello World! \n");

	//* Variable in C
	// int age = 21; // Integer
	// printf("I'm %d years old \n", age);

	// float gpa = 3.8; // Float
	// printf("You're GPA is %.1f \n", gpa);

	// double pi = 3.14159265358979; // Double
	// printf("The value of pi is %lf \n", pi);

	// char grade = 'A'; // Char {max 1 char or single character}
	// printf("You're grade is %c \n", grade);

	// char name[] = "Syed Mohiuddin Meshal"; // Array of character
	// char email[] = "syedmohiuddinmeshal@gmail.com";
	// printf("My name is %s \n", name);

	// bool isActive = false; // Boolean {true or false}
	// printf("%d", isActive); // 1 mean true | 0 mean false
	// if(isActive){
	// 	printf("You're online");
	// }else {
	// 	printf("You're offline");
	// }

	//* Format Specifier
	// width
	// int num1 = 1;
	// int num2 = -10;
	// int num3 = 100;

	// printf("%+d \n", num1);
	// printf("%+d \n", num2);
	// printf("%+d \n", num3);

	//* Arithmetic Operators (=, +, -, *, /, %, ++, --)
	// int x = 2;
	// int y = 3;
	// float z = 0;

	// z = x + y;
	// z = x - y;
	// z = x * y;
	// z = x / y;
	// z = x % y;
	// z++;
	// z--;

	//* Augmented Assignment Operators
	// z+=3;
	// z-=3;
	// z*=3;
	// z/=3;

	// printf("%.2f", z);

	//* User Input
	int age = 0;
	float gpa = 1.0f;
	char grade = '\0';
	char firstName[5] = "";
	char fullName[30] = "";

	printf("Enter your age: ");
	scanf("%d", &age);

	printf("Enter your gpa: ");
	scanf("%f", &gpa);

	printf("Enter your grade: ");
	scanf(" %c", &grade);

	printf("Enter your first name: ");
	scanf("%s", &firstName);

	getchar(); // new line
	printf("Enter your full name: ");
	fgets(fullName, sizeof(fullName), stdin); // scan something with space & also fgets add a extra new line after the string end
	fullName[strlen(fullName) - 1] = '\0'; // that's why we can use this to rid the new line

	printf("----------------------------*----------------------------\n");
	printf("Your full name is %s \n", fullName);
	printf("Your age is %d \n", age);
	printf("Your GPA is %.2f \n", gpa);
	printf("Your grade is %c \n", grade);
	printf("Your first name is %s \n", firstName);

	return 0;
}