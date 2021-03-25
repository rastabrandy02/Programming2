#include <iostream>
#include <string>
using namespace std;
class HighscoreEntry
{
private:
	string name ;
	int score;
public:
	HighscoreEntry() 
	{
		name  = "Unknown";
		score = 0000;
	};
	HighscoreEntry(string n, int s)
	{
		name = n;
		score = s;
	}
	HighscoreEntry(const HighscoreEntry& myHS)
	{
		name = myHS.name;
		score = myHS.score;
	}
	string ToString()
	{
		return (name + " --- " + to_string(score));
	}
	bool SameAs(HighscoreEntry myHs)
	{
		if (this->score == myHs.score) return true;
		else return false;
	}
};
int main()
{
	HighscoreEntry h1("Homer", 9999);
	HighscoreEntry h2("Bart", 7777);
	HighscoreEntry h3;
	HighscoreEntry h4(h2);
	
	cout << "h1: " << h1.ToString() << endl;
	cout << "h2: " << h2.ToString() << endl;
	cout << "h3: " << h3.ToString() << endl;
	if (h2.SameAs(h4)) {
		cout << "h2 and h4 are the same" << endl;
	}
	else {
		cout << "h2 and h4 are not the same" << endl;
	}
	
}


//Produces the following output :
//h1: Homer - 9999
//h2 : Bart - 7777
//h3 : Unknown - 0000
//h2 and h4 are the same