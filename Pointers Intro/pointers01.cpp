#include <iostream>
using namespace std;

int main()
{
	int num = 3;
	cout << "memory adress of num: " << &num << endl;

	int* ptr = &num;
	cout << "Memory adress where ptr points: " << ptr << endl;
	cout << "Value that ptr points: " << *ptr << endl;
	
	*ptr = 42;
	cout << "New value of the value that ptr is pointing: " << num << endl;
	
	return 0;
}