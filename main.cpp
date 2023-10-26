#include <stdio.h>



using namespace std;

int main() {

	int a;
	int b;
	int res;

	printf("Enter 1st number: ");
	scanf_s("%i", &a);

	printf("Enter 2nd number: ");
	scanf_s("%i", &b);

	res = a * a;
	printf("Square of %i is %i\n", a, res);

	res = a + b;
	printf("%i + %i = %i\n", a, b, res);

	res = a - b;
	printf("%i - %i = %i\n", a, b, res);

	res = a * b;
	printf("%i * %i = %i\n", a, b, res);

	double result;
	result = double(a) / double(b);
	printf("%i / %i = %f\n", a, b, result);



	return 0;
}