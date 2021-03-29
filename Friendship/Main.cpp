#include <iostream>
#include "Friendship.cpp"
using namespace std;

void StarTouched(Player* p)
{
	p->invincible = true;
}

int main()
{
	string name;
	string itemName;
	bool playing = true;


	cout << "Introduce your name: " << endl;
	cin >> name;

	Player player(name);
	while (playing)
	{
		cout << "---STATS---" << endl;
		cout << "Name: " << player.GetName() << endl;
		player.PrintNumLifes();
		player.PrintInvincible();
		player.PrintCapabilities();
		player.PrintWeapon();
		cout << "Introduce the name of the item: " << endl;
		cin >>  itemName;
		Item item(itemName);
		if ((itemName == "One_Up") || (itemName == "Mini_Mario") ||
			(itemName == "Super_Mario") || (itemName == "Fire_Flower") ||
			(itemName == "Ice_Flower") || (itemName == "Golden_Flower"))
			
		player.UseItem(&item);
		if (itemName == "Quit")
		{
			cout << "Goodbye " << player.GetName() << endl;
			playing = false;
		}
		if (itemName == "Star") StarTouched(&player);

		

		
	}
}