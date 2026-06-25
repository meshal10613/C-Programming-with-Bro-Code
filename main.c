//? gcc main.c -o main && ./main
#include <stdio.h>
#include <stdbool.h>

int main()
{
	// printf("Hello World! \n");

	//* Variable in C
	int age = 21; // Integer
	// printf("I'm %d years old \n", age);

	float gpa = 3.8; // Float
	// printf("You're GPA is %.1f \n", gpa);

	double pi = 3.14159265358979; // Double
	// printf("The value of pi is %lf \n", pi);

	char grade = 'A'; // Char {max 1 char or single character}
	// printf("You're grade is %c \n", grade);

	char name[] = "Syed Mohiuddin Meshal"; // Array of character
	char email[] = "syedmohiuddinmeshal@gmail.com";
	// printf("My name is %s \n", name);

	bool isActive = false; // Boolean {true or false}
	// printf("%d", isActive); // 1 mean true | 0 mean false
	if(isActive){
		printf("You're online");
	}else {
		printf("You're offline");
	}

	return 0;
}