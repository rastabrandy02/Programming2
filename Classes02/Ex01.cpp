#include <iostream>
using namespace std;

class pixel {
public:
	int r;
	int g;
	int b;
	pixel() {
		r = 0;
		g = 0;
		b = 0;
	}
	pixel(int red, int green, int blue) {
		r = red;
		g = green;
		b = blue;
	}
	void PrintInfo()
	{
		cout << "R:" << r << " G:" << g << " B:" << b << endl;
	}
	pixel Mix(pixel p)
	{
		pixel pix;
		pix.r = (r + p.r) / 2;
		pix.g = (g + p.g) / 2;
		pix.b = (b + p.b) / 2;

		return pix;
	}

};
int main() {
	pixel black(0, 0, 0);
	pixel blue(0, 0, 255);
	pixel red(255, 0, 0);
	pixel mixed = red.Mix(blue);
	black.PrintInfo();
	blue.PrintInfo();
	red.PrintInfo();
	mixed.PrintInfo();


	return 0;
}
