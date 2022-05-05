#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <vector>

using namespace std;

const int arr_size = 5;

void q_sort(int mas[], int size) {
	int i = 0;
	int j = size - 1;

	int mid = mas[size / 2];

	do {
		while (mas[i] < mid) {
			i++;
		}
		while (mas[j] > mid) {
			j--;
		}

		if (i <= j) {
			swap(mas[i], mas[j]);
			i++;
			j--;
		}
	} while (i <= j);


	if (j > 0) {
		q_sort(mas, j + 1);
	}
	if (i < size) {
		q_sort(&mas[i], size - i);
	}
}

int binarysearch(int mas[], int l, int r, int digit) {
	if (r >= l) {
		int mid = l + ((r - l) / 2);
		if (mas[mid] == digit) {
			return mid;
		}

		if (digit < mas[mid]) {
			return binarysearch(mas, l, mid - 1, digit);
		}
		return binarysearch(mas, mid + 1, r, digit);
	}
	else {
		return -1;
	}

}



int main() {

	int arr[arr_size] = { 4,2,5,3,1 };
	int res[10][2];
	int k = 5;
	int iter = 0;
	for (int i = 0; i < arr_size; i++) {
		for (int j = i; j < arr_size; j++) {
			if (arr[i] + arr[j] == k) {
				int res_iter[1][2] = { arr[i],arr[j] };
				memcpy(res[iter], res_iter, sizeof(res_iter));
				iter++;
			}
		}
	}

	for (int i = 0; i < iter; i++) {
		for (int j = 0; j < 2; j++) {
			cout << res[i][j] << ' ';
		}
		cout << endl;
	}

	return 0;
}