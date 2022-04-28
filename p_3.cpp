#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include <ctime>
#include <string>
using namespace std;
int first() 
{
	time_t now = time(0);
	string date_bd;
	cout << "enter your data,format is dd.mm.yyyy " << '\n';
	cin >> date_bd; 
	int day = stoi(date_bd.substr(0, 2)), month = stoi(date_bd.substr(3, 4)), year = stoi(date_bd.substr(6, 9));
	struct tm timeinfo = { 0 };
	timeinfo.tm_year = year - 1900;
	timeinfo.tm_mon = month - 1;
	timeinfo.tm_mday = day;
	time_t btime = mktime(&timeinfo);
	int now_days = now / 86400;
	int btime_days = btime / 86400;
	cout << "Your age in days is: " << now_days - btime_days;
	system("pause");
	return 0;
}


double calculator(double a, double b, char oper)
{
	switch (oper)
	{
		case('+'):
			return a + b;
		case('-'):
			return a - b;
		case('*'):
			return a * b;
		case('/'):
			double result;
			try 
			{
				if (b == 0) 
				{
					throw runtime_error("don’t divide by zero");
				}
				else 
				{
					result = a / b;
				}
				return result;
			}
			catch (runtime_error & ex)
			{
				cout << "Exception occurred: " << endl << ex.what();
				return -1;
			}
		default:
			cout << "Operation didn't find";
			return -1;
		}
	}
int calc()
{
		double a, b;
		char operation;
		cin.exceptions(cin.failbit);
		try
		{
			cout << "enter a ";
			cin >> a;
		}
		catch (const exception & ex)
		{
			cout << "enter a number, not a symbol" << endl;
			cin.clear();
			cin.ignore(10, '\n');
			return 0;
		}
		try 
		{
			cout << "enter b ";
			cin >> b;
		}
		catch (const exception & ex)
		{
			cout << "enter a number, not a symbol" << endl;
			cout << ex.what() << endl;
			cin.clear();
			cin.ignore(10, '\n');
			return 0;
		}
		try 
		{
			cout << "Enter operation ";
			cin >> operation;
		}
		catch (const exception & ex)
		{
			cout << "enter a number, not a symbol" << endl;
			cout << ex.what() << endl;
			cin.clear();
			cin.ignore(10, '\n');
			return 0;
		}

		cout << endl << "Result is: " << calculator(a, b, operation);
		return 0;
}

int main()
{
    cout << "первая задача"<< endl;
    first();
    cout << endl << "вторая задача" <<endl;
    calc();
    
    
    
    
    return 0;
    
}