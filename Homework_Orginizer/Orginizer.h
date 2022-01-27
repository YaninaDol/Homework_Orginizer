
#include "Zametka.h"
using namespace std;


struct Node {
	Date* exampl;
	Node* next;
	Node(Date* exampl, Node* next)
	{
		this->exampl = exampl;
		this->next = NULL;
	}
};
class Organizer
{
private:
	Node* head;

public:
	explicit Organizer()
	{
		this->head = NULL;
	}
	void addToList(int Day, int Month, int Year, int Hour, int Minute) {

		string note;
		cout << " Input note: ";
		cin >> note;
		Date* exampl = new Zametka(Day, Month, Year, Hour, Minute, note);

		if (this->head == NULL) {
			this->head = new Node(exampl, NULL);
			
		}
		else {
			Node* tmp = this->head;
			while (tmp->next != nullptr)
			{
				tmp = tmp->next;
			}

			tmp->next = new Node(exampl, NULL);
		}
		cout << " Added successfully \n";
	}
	void ExcAdd(int Day, int Month, int Year, int Hour, int Minute)
	{
		Node* tmp = this->head;
		if (tmp == nullptr)
		{
			this->addToList(Day, Month, Year, Hour, Minute);

		}
		else
		{
			while (tmp != nullptr)
			{
				try {
					if ((tmp->exampl->getDay() == Day) && (tmp->exampl->getMonth() == Month) && (tmp->exampl->getYear() == Year) &&
						(tmp->exampl->getHour() == Hour) && (tmp->exampl->getMinute() == Minute))
					{
						throw string(" Notice for this time already have! You can only redact a notice!");
					}

				}
				catch (string str)
				{
					cout << str;
					break;
				}
				tmp = tmp->next;
			}
			if (tmp == nullptr)
			{
				this->addToList(Day, Month, Year, Hour, Minute);
			}
		}
	}
	void ExRemove(int Day, int Month, int Year, int Hour, int Minute)
	{
		try {
			if (this->head == nullptr)
			{
				throw string(" You dont have any notice! Please, add some notice! \n");
			}
			this->removeFromList(Day, Month, Year, Hour, Minute);
		    }

		catch(string str)
		{
			cout << str;

		}

	}
	void removeFromList(int Day, int Month, int Year, int Hour, int Minute) 
	{
			Node* forDelete;
			if ((this->head->exampl->getDay() == Day) && (this->head->exampl->getMonth() == Month)
	&& (this->head->exampl->getYear() == Year) && (this->head->exampl->getHour() == Hour) && (this->head->exampl->getMinute() == Minute))
			{
				forDelete = this->head;
				this->head = this->head->next;
				delete forDelete;
				cout << " Removed successfully! \n";
			}
			else {
				Node* tmp = this->head;
				forDelete = tmp;
				while (tmp->next != nullptr)
				{
					if ((tmp->next->exampl->getDay() == Day) && (tmp->next->exampl->getMonth() == Month) && (tmp->next->exampl->getYear() == Year) &&
						(tmp->next->exampl->getHour() == Hour) && (tmp->next->exampl->getMinute() == Minute))
					{
						forDelete = tmp->next;
						
						break;
					}
					tmp = tmp->next;
				}
				try {
					if (tmp->next == nullptr)
					{
						throw string (" Not found element \n");
					}
					tmp->next = tmp->next->next;
					delete forDelete;
					cout << " Removed successfully! \n";
				   }
				catch (string str)
				{
					cout << str;
					
				}
				
			}
			
			
		
	}
	void ExRedact(int Day, int Month, int Year, int Hour, int Minute)
	{
		try {
			if (this->head == nullptr)
			{
				throw string(" You dont have any notice! Please, add some notice! \n");
			}
			this->redact(Day, Month, Year, Hour, Minute);
		}

		catch (string str)
		{
			cout << str;

		}
	}
	void redact(int Day, int Month, int Year, int Hour, int Minute)
	{
		
		Node* tmp = this->head;
		while (tmp != nullptr)
		{
			if ((tmp->exampl->getDay() == Day) && (tmp->exampl->getMonth() == Month) && (tmp->exampl->getYear() == Year) &&
				(tmp->exampl->getHour() == Hour) && (tmp->exampl->getMinute() == Minute))
			{
				string note;
				cout << " Input note to change: ";
				cin >> note;

				Date* notice = new Zametka(Day, Month, Year, Hour, Minute, note);
				tmp->exampl = notice;
               cout << " Changed successfully! \n";
			   break;
			}
			tmp = tmp->next;
		}	
		try {
			if (tmp == nullptr)
			{
				throw string(" Not found element! \n");
			}
		}
		catch (string str)
		{
			cout << str;

		}
	}

	void showList() {
		Node* tmp = this->head;
		while (tmp!= nullptr)
		{
			tmp->exampl->show();
			tmp = tmp->next;
		}
		delete tmp;
	}
};

