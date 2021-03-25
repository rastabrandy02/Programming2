#include <iostream>
using namespace std;

class Pokemon
{
protected:
	string name;
	string type;


public:
	Pokemon() {};
	Pokemon(string name)
	{
		this->name = name;
		type = "noType";
	}
	string GetName()
	{
		return name;
	}
	string GetType()
	{
		return type;
	}
	virtual int DamageAttack( Pokemon& target) = 0;
	virtual ~Pokemon() {};
};

class ElectricPokemon : public Pokemon
{
public:
	
	
	ElectricPokemon(string name)
	{
		this->name = name;
		type = "Electric";
	}
	int DamageAttack( Pokemon& target) override
	{
		int damage = 10;
		if (target.GetType() == "Grass") damage /= 2;
		if (target.GetType() == "Water") damage * 2;
		return damage;
	}
	~ElectricPokemon() override {};
};

class GrassPokemon : public Pokemon
{
public:
	GrassPokemon(string name)
	{
		this->name = name;
		type = "Grass";
	}
	int DamageAttack(Pokemon& target)
	{
		int damage = 10;
		if (target.GetType() == "Fire") damage /= 2;
		if (target.GetType() == "Water") damage *= 2;
		return damage;
	}
	~GrassPokemon() {};
};

class FirePokemon : public Pokemon
{
public:
	FirePokemon(string name)
	{
		this->name = name;
		type = "Fire";
	}
	int DamageAttack(Pokemon& target)
	{
		int damage = 10;
		if (target.GetType() == "Grass") damage *= 2;
		return damage;
	}
	~FirePokemon() override{};
};

class WaterPokemon : public Pokemon
{
public:
	WaterPokemon(string name)
	{
		this->name = name;
		type = "Water";
	}
	int DamageAttack(Pokemon& target)
	{
		int damage = 10;
		if (target.GetType() == "Grass") damage /= 2;
		if (target.GetType() == "Fire") damage *= 2;
		return damage;
	}
	~WaterPokemon() override {};
};

int main()
{
	Pokemon* pikachu = new ElectricPokemon("Pikachu");
	Pokemon* bulbasaur = new GrassPokemon("Bulbassaur");
	Pokemon* charmander = new FirePokemon("Charmander");
	Pokemon* squirtle = new WaterPokemon("Squirtle");

	cout << "-- Damage Attacks --" << endl;

	cout << pikachu->GetName() << " -> " << bulbasaur->GetName()
		<< " = " << pikachu->DamageAttack(*bulbasaur) << " units" << endl;

	cout << bulbasaur->GetName() << " -> " << squirtle->GetName()
		<< " = " << bulbasaur->DamageAttack(*squirtle) << " units" << endl;

	cout << squirtle->GetName() << " -> " << charmander->GetName()
		<< " = " << squirtle->DamageAttack(*charmander) << " units" << endl;
	cout << charmander->GetName() << " -> " << pikachu->GetName()
		<< " = " << charmander->DamageAttack(*pikachu) << " units" << endl;

	delete pikachu;
	delete bulbasaur;
	delete charmander;
	delete squirtle;

	return 0;
}