#include <iostream>
using namespace std;

typedef struct enemy
{
	string name;
	int health = 0;
};
typedef struct weapon
{
	string name;
	int dmg = 0;
};
void PrintPirateInfo(const enemy& p);
void PrintWeaponInfo(const weapon& w);
void Attack(enemy* enemy, weapon weapon, bool* isDead);

int main()
{
	enemy pirate;
	pirate.name = "Le Chuck ";
	pirate.health = 100;

	weapon sword;
	sword.name = "Sword ";
	sword.dmg = 10;

	bool win = false;
	char imput = 0;
	cout << "Beware! " << pirate.name << "is aproaching you!" << endl;
	cout << "Quick, handle your " << sword.name << "and press 'a' to attack" << endl;
	cout << endl << endl;
	while (!win)
	{
		cin >> imput;
		if (imput == 'a')
		{
			cout << "You attack " << pirate.name << "with your " << sword.name << endl;
			Attack(&pirate, sword, &win);
			PrintPirateInfo(pirate);
			cout << endl;
		}
		else cout << "That's not the 'a' key, try again" << endl;

	}
	cout << "Congratulations, you have defeated " << pirate.name << endl;
	cout << "Now you will be the legend of the 7 seas!" << endl;

	return 0;
}
void PrintPirateInfo(const enemy& p)
{
	cout << p.name << "Has " << p.health << " life points left" << endl;

}
void PrintWeaponInfo(const weapon& w)
{
	cout << w.name << "Has " << w.dmg << "base damage" << endl;
}
void Attack(enemy* enemy, weapon weapon, bool* isDead)
{
	(*enemy).health -= weapon.dmg;
	if ((*enemy).health <= 0) (*isDead) = true;
}