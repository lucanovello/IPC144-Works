#include <stdio.h>

// Luca Novello
// gnovello@myseneca.ca
// 038-515-003
// 01-16-2024
//I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.

void title(void);
void line(void);
void info(void);

int main(void) {

	title();
	line();
	info();
	line();
}

void title(void) {

	printf("IPC144 NBB\tWorkshop 1\tPart 1\n");
}

void line(void) {
	for (size_t i = 0; i < 60; i++)
	{
	printf("-");
	}
	printf("\n");
}

void info(void) {
	printf("Name: \n\tLuca Novello\nEmail: \n\tgnovello@myseneca.ca\n");
}