#include "task25.h"
#include <iostream>

using namespace std;

void taskFipi2019()
{
	int const n = 6;
	int a[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int min = 10001;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 6 != 0 && a[i] < min)
		{
			min = a[i];
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 6 != 0)
		{
			a[i] = min;
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << endl;
	}
}