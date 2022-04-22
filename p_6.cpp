#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
using namespace std;

int first() {
    for(int count =1; count <= pow(2,8); count=count+16) {

        cout << " | " << setw(3) << count<< "| ";
        for (int count_2 = count; count_2<count+16; count_2++){
            char c = count_2;
            cout << setw(2) << c << " | ";
        }
        cout << endl;
    }
    cout <<endl;
    for(int count =1; count <= pow(2,9); count=count+16) {
        cout << " | " << setw(4) << count<< "| ";
        for (int count_2 = count; count_2<count+16; count_2++){
            wchar_t c = count_2;
            wcout << setw(2) <<  c << " | ";
        }
        cout << endl;
    }
    return 0;
}
int search(string str, char v) {
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == v) {
            return i;
        }
    }
    return false;
}
class Abc
        {
    private:
        int a,b,c=0;
        float f = 0;
        string st;
    public:
        Abc(string s):
        st(s)
        {}
        void expression_convert()
        {
            //cout << st;
            if(search(st, '+')){
                a = stoi(st.substr(0, search(st, '+')));
                b =  stoi(st.substr(search(st, '+')+1, st.size()-search(st, '+')));
                c = a+b;
            }
            else if(search(st, '-')){
                a = stoi(st.substr(0, search(st, '-')));
                b =  stoi(st.substr(search(st, '-')+1, st.size()-search(st, '-')));
                c = a-b;
            }
            else if(search(st, '*')){
                a = stoi(st.substr(0, search(st, '*')));
                b =  stoi(st.substr(search(st, '*')+1, st.size()-search(st, '*')));
                c = a*b;
            }
            else if(search(st, '/')){
                f = stoi(st.substr(0, search(st, '/')));
                b =  stoi(st.substr(search(st, '/')+1, st.size()-search(st, '/')));
                f= f/b;
            }
            else if(search(st, '^')){
                a = stoi(st.substr(0, search(st, '^')));
                b =  stoi(st.substr(search(st, '^')+1, st.size()-search(st, '^')));
                c= pow(a,b) ;
            }

        }
        void double_solve() {
            if (c==0){cout <<f;}
            else {cout << c;}
        }
        };

int main(){
    first();
    Abc objAbc("32 /2");
    objAbc.expression_convert();
    objAbc.double_solve();
    return 0;
}