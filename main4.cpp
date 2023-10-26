#include <cstdio>



int main() {
	int radiuss;
	const double pi = 3.1416;
	double circleArea;

	printf("Enter input data:\nCircle radiuss (cm) -> ");
	scanf_s("%i.f", &radiuss);

	circleArea = pi * radiuss * radiuss;
	printf("Area of the circle is %.4f sq.cm\n",circleArea);


	return 0;
}