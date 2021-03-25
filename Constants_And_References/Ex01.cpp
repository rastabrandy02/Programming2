#include <iostream>
using namespace std;

void DoubleNum(unsigned short* num);
int main()
{
	unsigned short num = 0;
	bool valid = false;
	while (!valid)
	{
		cout << "Please introduce one number from 0 to 100" << endl;
		cin >> num;
		if ((num >= 0) || (num <= 100)) valid = true;
	}
	DoubleNum(&num);
	cout << "The double of your number is: " << num << endl;
	return 0;
}
void DoubleNum(unsigned short* num)
{
	*num *= 2;
}