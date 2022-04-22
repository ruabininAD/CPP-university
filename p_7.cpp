#include <iostream>
#include <string>
#include <fstream>
#include <locale>
using namespace std;
void first(){

    string mess = "tut dolgen bitt moy text";
    //cin >> mess;
    ofstream file_out ("message.txt", ofstream::app);
    if (!file_out.is_open()){cout << "an error has occurred";}
    else{ file_out << mess << endl; }

    file_out.close();
}
void second(){
    ifstream file_in ("message.txt");
    cout << "text from \"message.txt\": " << endl;
    if (!file_in.is_open()){cout << "an error has occurred";}
    else
    {
        /*   string str;
        while (!file_in.eof())
        {
            str = "";
            getline(file_in, str);
            cout << str << endl;
        }*/
        char ch;
        while (file_in.get(ch))
        {
            cout << ch;
        }
    file_in.close();
    }
    file_in.close();



}
void third(){
    ifstream fin ("message.txt");
    cout << "text from \"message.txt\": " << endl;
    if (!fin.is_open()){cout << "an error has occurred";}
    else
    {
        int length = fin.tellg();
        char* buffer = new char [length];
        string str;
        while (!fin.eof())
        {
            str = "";
            getline(fin, str);
            cout << str << endl;
        }


        fin.read(buffer,length);
        cout << buffer;

    }
    fin.close();
}
void four()
{
    ifstream fin ("message.txt");
    cout << "text from \"message.txt\": " << endl;
    if (!fin.is_open()){cout << "an error has occurred";}
    else
    {
        int i = 0;
        int length = fin.tellg();
        char* buffer = new char [length];
        while (!fin.eof())
        {

            char ch;
            fin.get(ch);
            //cout << ch;
            buffer[i] = ch;
            i+=1;
        }
        fin.close();
        cout << buffer;
    }
}
void five()
{
    cout << "enter a message " << endl;
    string mess = "";

    getline(cin,mess);
    ofstream file_out ("message.txt", ofstream::app);
    if (!file_out.is_open()){cout << "an error has occurred";}
    else{ file_out << mess << endl; }
    file_out.close();




}
void six(){
    ifstream fin ("message.txt");

    if (!fin.is_open()){cout << "an error has occurred";}
    else
    {

        fin.seekg(-1,std::ios::end);
        int a = fin.tellg() ;
        cout << "file length - " << a+1<< " characters";

    }
    fin.close();
}
int main() {
//first();
    //second();
    //third();
    //four();
    //five();
    six();

    return 0;
}
