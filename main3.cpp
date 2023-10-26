#include <iostream>



using namespace std;

int main() {
	int width;
	int height;
	int rectangle;

	cout << "Enter Rectangle width (cm) -> ";
	cin >> width;

	cout << "Enter Rectangle height (cm) -> ";
	cin >> height;

	rectangle = width * height;
	cout << endl << "Area of the rectangle is " << rectangle << " sq.cm " << endl;


	return 0;
}