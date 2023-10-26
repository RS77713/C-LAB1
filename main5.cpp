#include <cstdio>



int main() {
	int base;
	int height;
	double triangleArea;

	printf("Enter input data:\nEnter base of a triangle: ");
	scanf_s("%i.f", &base);

	printf("Enter height of a triangle: ");
	scanf_s("%i.f", &height);

	triangleArea = 0.5 * base * height;
	printf("Area of the triangle is %.6f sq.cm\n", triangleArea);


	return 0;
}
