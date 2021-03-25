#include <iostream>
using namespace std;

class Module
{
private:
	string name;
	int numIter;
public:
	Module(string name, int num)
	{
		this->name = name;
		numIter = num;
	}
	void Update(int currentIter)
	{
		if (currentIter < numIter)
		{
			cout << name << endl;
		}
	}
	~Module() {};
};


int main()
{
	Module modules[3] = {
		Module("Input", 5),
		Module("Render", 7),
		Module("Logic", 10),
	};

	for (int i = 0; i < 15; i++)
	{
		cout << "Iteration: " << i << endl;
		modules[0].Update(i);
		modules[1].Update(i);
		modules[2].Update(i);
	}
	return 0;
}