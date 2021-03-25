#include <iostream>
using namespace std;

class Building {
protected:
	string name;
public:
	Building() {};
	Building(string name)
	{
		this->name = name;
	}
	string GetName()
	{
		return name;
	}
	

	~Building() {};
};

class Warehouse : public Building
{
private:
	int wood;
	int rocks;
	int wheat;
public:
	Warehouse(string name, int wood, int rocks, int wheat)
	{
		this->name = name;
		this->wood = wood;
		this->rocks = rocks;
		this->wheat = wheat;
	}
	void PrintResources()
	{
		cout << "---" << name << "---" << endl;
		cout << "Wood: " << wood << endl;
		cout << "Rocks: " << rocks << endl;
		cout << "Wheat: " << wheat << endl;
	}

	~Warehouse() {};
	
};

class House : public Building
{
private:
	int floors;
	int inhabitants;
	int servants;
public:
	House(string name, int floors, int inhabitants, int servants)
	{
		this->name = name;
		this->floors = floors;
		this->inhabitants = inhabitants;
		this->servants = servants;
	}
	void PrintHouse()
	{
		cout << "---" << name << "---" << endl;
		cout << "Floors: " << floors << endl;
		cout << "Inhabitants: " << inhabitants << endl;
		cout << "Servants: " << servants << endl;
	}
	~House() {};
};

class Temple : public Building
{
private:
	string god;
	int priests;
public:
	Temple(string name, string god, int priests)
	{
		this->name = name;
		this->god = god;
		this->priests = priests;
	}
	void PrintTemple()
	{
		cout << "---" << name << "---" << endl;
		cout << "God: " << god << endl;
		cout << "Priests: " << priests << endl;
		
	}
	~Temple() {};
};

int main()
{
	Warehouse w("East Warehouse", 10, 20, 30);
	House h("Agripa's house", 2, 5, 10);
	Temple t("Mercury's temple", "Mercury", 3);

	cout << "Warehouse name: " << w.GetName() << endl << endl;

	w.PrintResources();
	h.PrintHouse();
	t.PrintTemple();

	return 0;
}