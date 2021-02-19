#include <iostream>
using namespace std;
void SumOf2Values(int val1, int val2, int *result);

int main()
{
	int val1 = 0;
	int val2 = 0;
	int result = 0;

	cout << "Introduce the first value" << endl;
	cin >> val1;

	cout << "Introduce the second value" << endl;
	cin >> val2;

	SumOf2Values(val1, val2, &result);
	cout << "Your result is: " << result << endl;

	return 0;
}
void SumOf2Values(int val1, int val2, int* result)
{
	*result = val1 + val2;
}