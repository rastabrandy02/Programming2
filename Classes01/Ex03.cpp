#include <iostream>
using namespace std;

class animal {
public:
	animal() {};
	virtual void Speak() {};
	virtual void Eat() = 0;
	virtual ~animal() {};
};
class dog : public animal {
public:
	dog() {};
	int legs = 4;
	void Speak() override
	{
		cout << "Guau" << endl;
	}
	void Eat() override
	{
		cout << "Eating Bacon" << endl;
	}
	~dog() {};
};
class cat : public animal
{
public:
	cat() {};
	int legs = 4;
	void Speak() override
	{
		cout << "Miau" << endl;
	}
	void Eat() override
	{
		cout << "Eating Fish" << endl;
	}
	~cat() {};
};

int main()
{
	

	animal* anim01 = new dog;
	anim01->Speak();
	anim01->Eat();

	animal* anim02 = new cat;
	anim02->Speak();
	anim02->Eat();

	delete (anim01);
	delete(anim02);
	return 0;
}