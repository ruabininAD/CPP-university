#define _USE_MATH_DEFINES 
#include <string> 
#include <stack>
#include <algorithm> 
#include <cmath> 
#include <iomanip> 
#include <fstream> 
#include <deque> 
#include <vector> 
#include <stdlib.h> 
#include <set> 
#include <queue>
#include <iostream>
#include <climits>

using namespace std;

double StringToDouble(string s1) {
	int mainpart_size = 0;
	while (s1[mainpart_size] != '.') {
		mainpart_size++;
	}
	int decpart_size = s1.size() - mainpart_size - 1;
	bool decpart = true;
	double k = 1, m = pow(10,-decpart_size),result=0;
	for (int i = s1.size() - 1; i >= 0; i--) {
		if (isdigit(s1[i]) && decpart == true) {
			result += (s1[i] - '0') * m;
			m *= 10;
		}
		else if (isdigit(s1[i]) && decpart == false) {
			result += (s1[i] - '0') * k;
			k *= 10;
		}
		else {
			decpart = false;
		}
	}

	return result;
}

vector<string> StringToVector(string s1) {

	vector<string>vec;
	for (int i = 0; i < s1.size(); i++) {
		string to_add = "";
		char c = s1[i];
		if (s1[i] == '+' || s1[i] == '-' || s1[i] == '*' || s1[i] == '/') {
			to_add += s1[i];
			//vec.push_back(to_add);
		}
		else if (isdigit(c)) {
			while (isdigit(s1[i])) {
				to_add += s1[i];
				i++;
			}
			i--;
			//			continue;
		}
		else if (isalpha(c)) {
			while (isalpha(s1[i])) {
				to_add += s1[i];
				i++;
			}
			i--;
			//			continue;
		}
		vec.push_back(to_add);
	}

	return vec;
}


int main() {
	string s1 = ""; // ¬водить число в формате xxxxx.yyyyy или строку из операндов
	cin >> s1;

	cout << StringToDouble(s1) << endl;

	string s2;
	cin >> s2;

	vector<string>ans = StringToVector(s2);
	for (int i = 0; i < ans.size(); i++) {
		cout << ans[i] << ' ';
	}

return 0;
}