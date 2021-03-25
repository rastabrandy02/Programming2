#include <iostream>
#include <math.h>
using namespace std;

class Vec3
{
private:
	float x = 0.0f;
	float y = 0.0f;
	float z = 0.0f;
public:
	Vec3() {};
	Vec3(float myX, float myY, float myZ)
	{
		x = myX;
		y = myY;
		z = myZ;
	}
	Vec3(const Vec3& other)
	{
		x = other.x;
		y = other.y;
		z = other.z;

	}
	float GetX()
	{
		return x;
	}
	float GetY()
	{
		return y;
	}
	float GetZ()
	{
		return z;
	}
	void Print()
	{
		cout << "X: " << x << " Y: " << y << " Z: " << z << endl;
	}
	float Module()
	{
		
		return sqrtf((x*x + y*y + z*z));
	}
	Vec3 Inverse()
	{
		Vec3 newVec(-x, y,z);
		return newVec;
	}
};
float ScalarProd(Vec3 vec1, Vec3 vec2);

int main()
{
	Vec3 vec1(2.3f, 4.6f, 1.25f);
	vec1.Print();
	cout << "Module of vec1: " << vec1.Module() << endl;
	Vec3 vec2(vec1.Inverse());
	cout << "Module of vec2: " << vec2.Module() << endl;
	vec2.Print();
	cout << "Their scalar product is : " << ScalarProd(vec1, vec2) << endl;
	return 0;
}

float ScalarProd(Vec3 vec1, Vec3 vec2)
{
	return (vec1.GetX() * vec2.GetX() + vec1.GetY() * vec2.GetY() + vec1.GetZ() * vec2.GetZ());
}