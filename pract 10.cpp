#include <iostream>
#include <fstream>
using namespace std;


class Mathematician {
    public:
    Mathematician (string _name = "",string _last_name = "") 
        :name(_name), last_name(_last_name){} 

        string get_name()
            {return ("Mathematician - "  + name +" "+ last_name);}

        string name;// Имя
        string last_name;// Фамилия
}; 


class Driver {
    public:
    Driver (  int _mileage = 0, int _number_of_accidents = 0) 
        :number_of_accidents(_number_of_accidents), mileage(_mileage){} 

    string analys ()
    {   
    if (mileage / number_of_accidents > 100000) { return  " - ace";}
        return "- bad driver";
    }

        int number_of_accidents;
        int mileage;
}; 

class Valkov: public Mathematician, public Driver 
{
public:
    Valkov(string name = "Vak",  
        string last_name = "l_n", 
        int number_of_accidents =0, 
        int mileage =0):
        Mathematician(name, last_name), 
        Driver(number_of_accidents, mileage){} 
    string status = "Mathematician ";
    string arr[4] = {name, last_name,to_string(mileage), to_string(number_of_accidents)};

    string print()
    {
        return (status + name + " " + last_name  + " проехал " +  to_string(mileage) + " км и врезался " + to_string(number_of_accidents) + " раз.");        
    }
void out_to_file()
{
    ofstream fout;
    fout.open("driver's_math_status.txt");
    fout << print();
    fout.close();
}
void output_with_pointers()
{
    for (int i = 0; i <4; i++)
    {
        cout << "a[" << i << "]: address=" << arr+i << "\tvalue=" << *(arr+i) << endl;
    }
}
};





int main()
{
	
    Mathematician math("Алексей", "Вальков");
    Driver drv(100, 5);
    Valkov val("Алексей", "Вальков", 100, 5);
    
    cout <<"Вывод отдельно из каждого класса" << endl;
    cout << math.get_name();
    cout << "||||||";
    cout << drv.analys();
    cout << endl << endl<< "вывод из класса с множественным наследованием:" << endl;
    cout << val.print() <<endl; //вывод метода наследника
    val.out_to_file(); //вывод в файл
    val.output_with_pointers(); //вывод через указатели
	return 0;
}