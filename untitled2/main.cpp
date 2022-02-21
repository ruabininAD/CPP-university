#include <iostream>
#include <thread>
#include <string>

using namespace std;

void bin_to_dec(int n) {
    int num = n, decimalValue = 0,base = 1;
    int temp = num;
    while(temp){

        int lastDigit = temp % 10;
        if (lastDigit > 1) {
            cout << "error ";
            break;
        }
        temp = temp /10;
        decimalValue +=lastDigit * base;
        base = base *2;
    }
    cout << decimalValue << endl ;
}

void Binary(unsigned short int numder){
    unsigned short int temp;
    for (temp=32768; temp>0; temp=temp/2){
        if (temp & numder){   cout << "1";  }
        else{   cout <<"0";  }
    }
    cout << endl;
}
void search() {
    string s1, s2;
    int count = 0;
    cout << "s1: ";
    cin >> s1;
    while (cin >> s2) {
        if (s2 == "0"){break;}
        if (s1 == s2) { cout << s1 << " pos: " << count + 1 << endl; }
        count++;

    }
}

int main() {
    int n,k;
    cout << "practice 2"<< endl;
    while (1) {

        cout <<  "enter 0 to exit"<< endl;
        cout << "enter the issue number:"<< endl << " 1 - Hi,W | 2 - decimal to binary | 3 - binary to decimal | 4 - search on line"
             << endl;
        cin >> n;
        if (n == 0 ){break;}
        switch (n) {
            case 1:
                cout << "Hello, World!" << endl << endl;
                break;
            case 2:
                cout << "decimal to binary " << endl;
                cout << "enter decimal number" << endl;
                cin >> k;
                Binary(k);
                break;
            case 3:
                cout << "binary to decimal" << endl;
                cout << "enter binary number" << endl;
                cin >> k;
                bin_to_dec(k);
                break;
            case 4:
                cout << "search on line" << endl;
                cout << "enter string" << endl;
                search();
                break;
        }
    }
    return 0;
}