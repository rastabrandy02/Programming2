#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;
#define TEST(cond, message) \
if (cond) { cout << "OK - " << message << endl; } \
 else { cout << "ERROR - " << message << endl; }


class vec3
{
public:
	// Members
	float x, y, z;
	// Constructors
	vec3() : x(0.0f), y(0.0f), z(0.0f) { }
	vec3(float px, float py, float pz) : x(px), y(py), z(pz) { }
	vec3(const vec3& v) : x(v.x), y(v.y), z(v.z) { }
	// TODO: Member operators
	void operator+=(vec3 other)
	{
		x += other.x;
		y += other.y;
		z += other.z;
	}

	void operator*=(float index)
	{
		x *= index;
		y *= index;
		z *= index;
	}
};

float length(const vec3& v) {
	return sqrt(v.x * v.x + v.y * v.y + v.z * v.z);
}
// TODO: Non-member operators


bool operator==(const vec3 &v1, const vec3& v2)
{
	if ((v1.x == v2.x) && (v1.y == v2.y) && (v1.z == v2.z)) return true;
	else return false;
}
bool operator<(const vec3 &v1, const vec3& v2)
{
	if (length(v1) < length(v2)) return true;
	else return false;
}
vec3 operator*(const vec3 &v, float index)
{
	vec3 w((v.x * index), (v.y * index), (v.z * index));
	return w;
}
int main() {
	vec3 a, b;
	TEST(a == b, "operator==");
	b += vec3(1, 2, 3); TEST(b == vec3(1, 2, 3), "operator+=");
	vec3 c = b * 2; TEST(c == vec3(2, 4, 6), "operator* (const vec3 &, float)");
	TEST(b < c && !(c < b), "operator<");
	c *= 2; TEST(c == vec3(4, 8, 12), "operator*= (float f)");
	system("pause");
	return 0;
}