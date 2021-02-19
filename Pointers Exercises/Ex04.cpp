#include <iostream>
#include <stdlib.h>

using namespace std;
#define SIZE 20

void AbsSwap(int* array1, int size1, int* array2, int size2);

int main()
{
	
	int* values = (int*)malloc(SIZE * sizeof(int));
	int* zeros = (int*)calloc(SIZE, sizeof(int));
	values[0] = 1;
	values[1] = -1;
	values[2] = 1;
	values[3] = -1;
	values[4] = 1;
	values[5] = -1;
	values[6] = 1;
	values[7] = -1;
	values[8] = 1;
	values[9] = -1;
	values[10] = 1;
	values[11] = -1;
	values[12] = 1;
	values[13] = -1;
	values[14] = 1;
	values[15] = -1;
	values[16] = 1;
	values[17] = -1;
	values[18] = 1;
	values[19] = -1;
	values[20] = 1;
	AbsSwap(values, SIZE, zeros, SIZE);
	free(values);
	free(zeros);

	values = zeros = nullptr;
	return 0;
	
}

void AbsSwap(int* array1, int size1, int* array2, int size2)
{
	for (int i = 0; i < SIZE; i++) array2[i] = abs(array1[i]);

	cout << "Go for arrray 1: " << endl;
	for (int i = 0; i < SIZE; i++)cout << array1[i] << endl;
	
	cout << "Go for arrray 2: " << endl;
	for (int i = 0; i < SIZE; i++) cout << array2[i] << endl;
	

}