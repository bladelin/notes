#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;

void ShellSort(int *a, int len)
{
	int count = 0;
	for (int r = len / 2;r >= 1;r /= 2)
	{
		for (int i = r;i < len;i++)
		{
			int temp = a[i];
			int j = i - r;
			while (j >= 0 && temp < a[j])
			{
				a[j + r] = a[j];
				j -= r;
			}
			a[j + r] = temp;
		}
		count++;
		cout << "the " << count << "th sorting:";
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
		arr[i] = rand() / 1000+100;
	cout << "before sorting:";
	for (int i = 0;i < 10;i++)
		cout << arr[i] << ' ';
	cout << endl;
	ShellSort(arr, 10);
	cout << "after sorting:";
	for (int i = 0;i < 10;i++)
		cout << arr[i] << ' ';
	cout << endl;
}