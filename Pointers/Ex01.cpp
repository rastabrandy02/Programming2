#include <iostream>
using namespace std;
#define ELEMENTS 10

int main()
{
	int numbers[ELEMENTS] = { 0, 1 ,2 ,3 ,4 ,5, 6, 7, 8, 9 };
	int* pointers[ELEMENTS] = { 0 };

	for (int i = 0; i < ELEMENTS; i++)
	{
		pointers[i] = &numbers[i];
		cout << pointers[i] << endl;
		cout << *pointers[i] << endl;
	}
}