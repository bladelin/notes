#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;

void InsertionSort(int *a, int len)
{
	for (int i = 1;i < len;i++)
	{
		int t = a[i];
		int j = i - 1;
		while (j >= 0 && t<a[j])
		{
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = t;
		cout << i << "th sorting";
		for (int i = 0;i < len;i++)
			cout << a[i] << ' ';
		cout << endl;
	}
}

void main()
{
	int arr[10];

	srand(time(NULL));
	for (int i = 0;i < 10;i++)
		arr[i] = rand() / 1000 + 100;
	cout << "before sorting:";
	for (int i = 0;i < 10;i++)
		cout << arr[i] << ' ';
	cout << endl;
	InsertionSort(arr, 10);
	cout << "after sorting:";
	for (int i = 0;i < 10;i++)
		cout << arr[i] << ' ';
	cout << endl;
}