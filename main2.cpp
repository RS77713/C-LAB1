#include <iostream>



using namespace std;

int main() {

	int a;
	int b;
	int res;

	cout << "Enter number: "; 
	cin >> a; 
	res = a * a; 
	cout << endl << "Square of " << a << " is " << res << endl;

	cout << "Enter 2nd number: ";
	cin >> b;

	res = a + b;
	cout << endl << a << " + " << b << " = " << res << endl;

	res = a - b;
	cout << endl << a << " - " << b << " = " << res << endl;

	res = a * b;
	cout << endl << a << " * " << b << " = " << res << endl;

	double result;
	result = double(a) / double(b);
	cout << endl << a << " / " << b << " = " << result << endl;


	return 0;
}