#include <iostream>
using namespace std;

#define MAX_HOURS 24
#define MAX_MINS 60
#define MAX_SECONDS 60
class clock_class
{
private:
	int hours = 0;
	int mins = 0;
	int seconds = 0;
public :
	clock_class() {};
	clock_class(int h, int m, int s)
	{
		hours = h;
		mins = m;
		seconds = s;
	};
	int GetHours()
	{
		return hours;
	}
	int GetMins()
	{
		return mins;
	}
	int GetSeconds()
	{
		return seconds;
	}
	void Coordinated(int h, int m, int s)
	{
		if ((h == hours) && (m == mins) && (s == seconds)) cout << "The two clocks show the same time" << endl;
		else cout << "The clocks don't show the same time" << endl;
		
	}
	void IsBehind(int h, int m, int s)
	{
		if (hours < h) cout << "This clock is behind" << endl;
		else if ((hours == h) && (mins < m)) cout << "This clock is behind" << endl;
		else if ((hours == h) && (mins == m) && (seconds < s))cout << "This clock is behind" << endl;
		else cout << "This clock is advanced" << endl;
	}
	void SetTime(int h, int m, int s)
	{
		hours = h;
		mins = m;
		seconds = s;
	}
	void PrintTime()
	{
		cout << "Time: " << hours << " : " << mins << " : " << seconds << endl;
	}

};
int main()
{
	clock_class time1(9, 26, 30);
	clock_class time2(10, 30, 20);
	time1.PrintTime();
	time2.PrintTime();
	time1.Coordinated(time2.GetHours(), time2.GetMins(), time2.GetSeconds());
	time1.IsBehind(time2.GetHours(), time2.GetMins(), time2.GetSeconds());
	time1.SetTime(time2.GetHours(), time2.GetMins(), time2.GetSeconds());
	time1.PrintTime();
	time1.Coordinated(time2.GetHours(), time2.GetMins(), time2.GetSeconds());
	


	return 0;
}