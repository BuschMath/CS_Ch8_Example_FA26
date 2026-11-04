#include <iostream>

using namespace std;

void functionA(int x_, int& y_);
void functionB(int x_, int y_);

int main()
{
	int x = 7;
	int y = 51;

	cout << "Before A:" << endl;
	cout << "x: " << x << endl << "y: " << y << endl;

	functionA(x, y);

	cout << "After A and before B:" << endl;
	cout << "x: " << x << endl << "y: " << y << endl;

	functionB(x, y);

	cout << "After B:" << endl;
	cout << "x: " << x << endl << "y: " << y << endl;

	return 0;
}

void functionA(int x_, int& y_)
{
	x_++;
	y_++;
}

void functionB(int x_, int y_)
{
	x_--;
	y_--;
}