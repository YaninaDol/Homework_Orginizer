#include <iostream>

using namespace std;
class Date
{
protected:
	int day;
	int month;
	int year;
	int hour;
	int minute;
public:
	Date()
	{
		this->day = 0;
		this->month = 0;
		this->year = 0;
		this->hour = 0;
		this->minute = 0;
	}
	Date(int Day,int Month,int Year,int Hour,int Minute)
	{
		try {
			
			if (Day<1 || Day > 31)
			{
				throw string("error Day");
			}
			if (Month < 1 || Month > 12)
			{
				throw string("erorr Month");
			}
			if (Year < 1900)
			{
				throw string("erorr Year");
			}
			if (Hour < 0 || Hour > 23)
			{
				throw string("erorr Hour");
			}
			if (Minute < 0||Minute > 59)
			{
				throw string("erorr minute");
			}

			this->day = Day;
			this->month = Month;
			this->year = Year;
			this->hour = Hour;
			this->minute = Minute;
			
		}
		catch (string str)
		{
			cout << str;
			this->day = 0;
			this->month = 0;
			this->year = 0;
			this->hour = 0;
			this->minute = 0;
		}


	}
	int getDay()
		{
		return this->day;
		}
	int getMonth()
	{
		return this->month;
	}
	int getYear()
	{
		return this->year;
	}
	int getHour()
	{
		return this->hour;
	}
	int getMinute()
	{
		return this->minute;
	}

	void setDate(int Day, int Month, int Year, int Hour, int Minute)
	{
		try {

			if (Day < 1 || Day > 31)
			{
				throw string("error Day");
			}
			if (Month < 1 || Month > 12)
			{
				throw string("erorr Month");
			}
			if (Year < 1900)
			{
				throw string("erorr Year");
			}
			if (Hour < 0 || Hour > 23)
			{
				throw string("erorr Hour");
			}
			if (Minute < 0 || Minute > 59)
			{
				throw string("erorr minute");
			}

			this->day = Day;
			this->month = Month;
			this->year = Year;
			this->hour = Hour;
			this->minute = Minute;

		}
		catch (string str)
		{
			cout << str;
			this->day = 0;
			this->month = 0;
			this->year = 0;
			this->hour = 0;
			this->minute = 0;
		}

	}

	virtual void show()
	{
		cout << " Date : " << this->day<< " \\"<< this->month << " \\"<<this->year<<"\n";
		cout << " Time  " << this->hour << ":" << this->minute << "\n";
	}

};

