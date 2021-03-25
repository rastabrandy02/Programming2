#include <iostream>
using namespace std;
class Box 
{

private:
	int x;
	int y;
	int z;
	string name;
public:
	Box() { x = 0; y = 0; z = 0; name = "Hello"; }
	~Box() {};
	void Print() const
	{
		cout << " X: " << x << " Y: " << y << " Z: " << z << endl;
	}
	friend void OpenBox(Box & myBox);
};
void OpenBox(Box& myBox)
{
	cout << myBox.name << endl;
}
int main()
{
	Box box;
	OpenBox(box);
	return 0;
}