#include <iostream>
using namespace std;
#define NUM 10
void Reverse(int* array, int sizeArray);
int main()
{
	int numbers[NUM] = { 0 };

	for (int i = 0; i < NUM; i++)
	{
		cout << "Introduce one value: " << endl;
		cin >> numbers[i];
	}
	Reverse(numbers, NUM);
	return 0;
}

void Reverse(int* array, int sizeArray)
{
	int* j = 0;
	
	for (int i = 0; i < sizeArray; i++)
	{
		j = array + (sizeArray - 1 - i);
		cout << "Value: " << *j << endl;
	}
}