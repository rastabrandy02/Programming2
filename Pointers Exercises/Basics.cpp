#include <iostream>
using namespace std;
#define ELEMENTS 3
void Function(int* num);
int SumAllElements(int* array, int size);
int main()
{
	int vect[ELEMENTS] = { 1, 2, 3};
	int* p = 0;
	int value = 0;

	p = vect;

	cout << p << endl;
	cout << *p << endl;

	for (int i = 0; i < 3; i++)
	{
		cout << p[i] << endl;
		
	}
	for (int i = 0; i < 3; i++)
	{
		
		cout << *p + i << endl;
	}
	for (int i = 0; i < 3; i++)
	{
		cout << *p << endl;
		p++;
	}
	/*p = &vect[2];
	for (int i = 0; i < 3; i++)
	{

		cout << *p << endl;
		p--;
	}

	for (int i = 0; i < 4; i++)
	{
		Function(&value);
		cout << value << endl;
	}*/

	cout << SumAllElements(vect, ELEMENTS) << endl;
}

void Function(int* num)
{
	
	(*num) = (*num) + 5;
}
int SumAllElements(int* array, int size)
{
	int result = 0;
	for (int i = 0; i < size; i++)
	{
		result += array[i];
	}
	return result;
}