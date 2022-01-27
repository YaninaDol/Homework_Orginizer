#include "Date.h"
class Zametka:public Date
{
protected:
	string zametka;
public:

	Zametka():Date()
	{
		this->zametka = " ";
	}

	Zametka(int Day, int Month, int Year, int Hour, int Minute, string note) :Date(Day, Month, Year, Hour, Minute)
	{

		this->zametka = note;
	}
	void setZametka(string one)
	{
		this->zametka = one;
	}
	string getZametka()
	{
		return this->zametka;
	}
	virtual void show()
	{
		Date::show();
		cout << " Notice : " << this->zametka << "\n\n";
	}
};

