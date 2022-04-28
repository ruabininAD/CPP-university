#include <iostream>
#include <ctime>
#include <string>
#include <vector>
#include <climits>

using namespace std;
void selection_sort(int arr[], const int size) 
{
	for (int i = 0; i < size; i++) 
	{
		int arr_min = INT_MAX;
		int index_min = 0;
		for (int j = i; j < size; j++) 
		{
			if (arr[j] < arr_min) 
			{
				arr_min = arr[j];
				index_min = j;
			}
		}
		swap(arr[i], arr[index_min]);
	}
	return;
}

void bubble_sort(int arr[], const int size) 
{
	for (int i = 0; i < size; i++) 
	{
		for (int j = 0; j < size - 1; j++) 
		{
			if (arr[j] > arr[j + 1]) 
			{
				swap(arr[j], arr[j + 1]);
			}
		}
	}
	return;
}

void insertion_sort(int arr[], const int size) 
{

	for (int i = 1; i < size; i++) 
	{
		int x = arr[i];
		int j = i;
		while (j > 0 && arr[j - 1] > x) 
		{
			arr[j] = arr[j - 1];
			j = j - 1;
		}
		arr[j] = x;
	}
	
	return;
}


int main() 
{
cout << "Сортировка выбором : ";
	int arr_1[] = { 11,0,50,41,10, 23, 34, 54, 34, 3};
	int arr_size= sizeof(arr_1)/sizeof(int);
	selection_sort(arr_1, arr_size);
	for (int i = 0; i < arr_size; i++) 
	{
		cout << arr_1[i] << ' ';
	}
	
	
cout << endl <<"Пузырьковая сортировка: " ;

	int arr_2[] = { 11,0,50,41,10, 23,44};
	arr_size= sizeof(arr_2)/sizeof(int);
	bubble_sort(arr_2, arr_size);
	for (int i = 0; i < arr_size; i++) 
	{
		cout << arr_2[i] << ' ';
	}

  cout << endl <<"Сортировка вставками: " ;
 
	int arr_3[] = { 11,0,50,41,10, 100,1 };
	arr_size= sizeof(arr_3)/sizeof(int);
	insertion_sort(arr_3, arr_size);
	for (int i = 0; i < arr_size; i++) 
	{
		cout << arr_3[i] << ' ';
	}
	return 0;
}

