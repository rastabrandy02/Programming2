#include < iostream>

using namespace std;

class Item
{
private:
	string name;
public:
	Item(string name)
	{
		this->name = name;
	}
	string GetName()
	{
		//Sad because it isn't necessary anymore
		return name;
	}
	friend class Player;
	~Item() {};
};


class Player
{
private:
	string name;
	unsigned short lifes;
	bool invincible;
	bool *capabilities;
	bool *weapon;
public:
	Player(string name)
	{
		this->name = name;
		lifes = 3;
		invincible = false;
		capabilities = new bool[3];
		capabilities[0] = false;
		capabilities[1] = true;
		capabilities[2] = false;

		weapon = new bool[3];
		weapon[0] = false;
		weapon[1] = false;
		weapon[2] = false;

		
	}
	~Player() {
		delete []capabilities;
		delete []weapon;
	}
	string GetName()
	{
		return name;
	}
	void PrintNumLifes()
	{
		cout << "The current number of lifes is: " << lifes << endl;
	}
	void PrintInvincible()
	{
		if (invincible)
		{
			cout << "Jump in the fire! You have the power of frienship!" << endl;

		}
		else cout << "Be careful, you are no longer invincible" << endl;
	}
	void PrintCapabilities()
	{
		for (int i = 0; i < 3; i++)
		{
			if (capabilities[i])
			{
				cout << "The capability set to true is number: " << i << endl;
			}
		}
	}
	void PrintWeapon()
	{
		for (int i = 0; i < 3; i++)
		{
			if(weapon[i])
			{
				cout << "The weapon set to true is number: " << i << endl;
			}
		}
	}

	bool operator ==(Player p )
	{
		if (this->name == p.name) return true;
		else return false;
	}
	void UseItem(Item *item)
	{
		if (item->name == "One_Up") lifes++;
		if (item->name == "Mini_Mario")
		{
			capabilities[0] = true;
			capabilities[1] = false;
			capabilities[2] = false;
		}
		if (item->name == "Super_Mario")
		{
			capabilities[0] = false;
			capabilities[1] = false;
			capabilities[2] = true;
		}
		if (item->name == "Fire_Flower")
		{
			weapon[0] = true;
			weapon[1] = false; 
			weapon[2] = false;
		}
		if (item->name == "Ice_Flower")
		{
			weapon[0] = false;
			weapon[1] = true;
			weapon[2] = false;
		}
		if (item->name == "Golden_Flower")
		{
			weapon[0] = false;
			weapon[1] = false;
			weapon[2] = true;
		}
	}
	friend void StarTouched(Player* p);
	/*{
		p->invincible = true;
	}*/
};


