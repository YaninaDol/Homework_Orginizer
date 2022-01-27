#include <iostream>
#include "Orginizer.h"
using namespace std;

int main()
{
	
	Organizer one;
	one.ExcAdd(12,12,2000,12,12);
	one.ExcAdd(1, 1, 2001, 1, 1);
	one.ExcAdd(2, 2, 2002, 2, 2);
	system("pause");
	char ch;
	do {
		
			system("cls");
			cout << "Menu : \n";
			cout << "1-to add a notice; \n";
			cout << "2-to delete a notice; \n";
			cout << "3-to redact a notice; \n";
			cout << "4-to show all notice; \n";
			cout << "0-to exit. \n";
			cout << "Your choice:  ";
			cin >> ch;
		
			if (ch == '1')
			{
				int Day, Month, Year, Hour, Minute;
				cout << " Input Day :";
				cin >> Day;
				cout << " Input Month :";
				cin >> Month;
				cout << " Input Year :";
				cin >> Year;
				cout << " Input Hour :";
				cin >> Hour;
				cout << " Input Minute :";
				cin >> Minute;
				one.ExcAdd(Day, Month, Year, Hour, Minute);
				
				system("pause");
		    }
			if (ch == '2')
			{
				int Day, Month, Year, Hour, Minute;
				cout << " Input date and time for delete \n Day :";
				cin >> Day;
				cout << " Month :";
				cin >> Month;
				cout << " Year :";
				cin >> Year;
				cout << " Hour :";
				cin >> Hour;
				cout << " Minute :";
				cin >> Minute;
				one.ExRemove(Day, Month, Year, Hour, Minute);
				
				system("pause");
			}
			if (ch == '3')
			{
				int Day, Month, Year, Hour, Minute;
				cout << " Input date and time for change notice \n Day :";
				cin >> Day;
				cout << " Month :";
				cin >> Month;
				cout << " Year :";
				cin >> Year;
				cout << " Hour :";
				cin >> Hour;
				cout << " Minute :";
				cin >> Minute;
				one.ExRedact(Day, Month, Year, Hour, Minute);
				
				system("pause");
			}
			if (ch == '4')
			{
				one.showList();
				system("pause");
			}
	} while (ch != '0');

}