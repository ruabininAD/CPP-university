#include <iostream>
#include <thread>
#include <chrono>//для работы в любой ОС
#include <cmath>



using namespace std;

void printing(int n) {
    int i = 1;
    while (0 < n){
        this_thread::sleep_for(chrono::nanoseconds(1000000000));
        cout << n << endl;
        n -=1;
    }
}
void ending(int n) {

    cout << n;
    if ((n<21) and (n>4)){cout << " yablok" << endl;}
    else if (n % 10 == 1) {cout << " yabloko" << endl;}
    else if ((n%10<5) and (n%10>1)){cout << " yabloka" << endl;}
    else if ((n%10==0) or (n%10>4)){cout << " yablok" << endl;}
}

void calculat() {
    cout << "pishi cherez probel:" << endl;
    double a, b, c;
    char operation;
    cin >> a >> operation >> b;

    switch (operation){
        case '+':   c = a+b; break;
        case '-':   c = a-b; break;
        case '*':   c = a*b; break;
        case '/':   c = a/b; break;
        case '^':   c = pow(a, b); break;
    }
    cout <<" = "<< c<< endl;
}






int main() {
    int n,k;
    cout << "practice 1"<< endl;
    while (1) {

        cout <<  "enter 0 to exit"<< endl;
        cout << "enter the issue number: 1 - calculator | 2 - calculation of seconds | 3 - calculation of apples"
             << endl;
        cin >> n;
        if (n == 0 ){break;}
        switch (n) {
            case 1:
                cout << "calculator" << endl;
                calculat();
                break;
            case 2:
                cout << "calculation of seconds" << endl;
                cout << "enter number" << endl;
                cin >> k;
                printing(k);
                break;
            case 3:
                cout << "alculation of apples" << endl;
                cout << "enter number" << endl;
                cin >> k;
                ending(k);
                break;

        }
    }
    return 0;
}