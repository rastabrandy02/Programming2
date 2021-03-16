#include <iostream>
using namespace std;

class animal {
public:
	animal() {};
	virtual void Speak() {};
};
class dog : public animal {
public:
	void Speak() override
	{
		cout << "Guau" << endl;
	}
};
class cat : public animal
{
public:
	void Speak() override
	{
		cout << "Miau" << endl;
	}

};

int main()
{
	dog tommy;
	cat flurfills;
	tommy.Speak();
	flurfills.Speak();

	animal* anim = new dog;
	anim->Speak();

	delete (anim);
	return 0;
}