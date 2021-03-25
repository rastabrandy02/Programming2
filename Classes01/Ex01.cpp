#include <iostream>
using namespace std;

class Rectangle
{
private:
	int width;
	int height;
public:
	Rectangle() { width = 10; height = 5; }
	void PrintValues() const
	{
		cout << "Width: " << this->width << " Height: " << this->height << endl;
	}
	friend void Transpose(Rectangle& object);
};
int main()
{
	Rectangle rec;
	rec.PrintValues();
	Transpose(rec);
	rec.PrintValues();
	
	return 0;
}
void Transpose(Rectangle& object)
{
	int aux = object.width;
	object.width = object.height;
	object.height = aux;

}