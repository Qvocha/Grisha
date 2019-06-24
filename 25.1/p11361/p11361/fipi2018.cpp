#include "task25.h"
#include <iostream>

using namespace std;

void fipi2018()
{
	int const n = 6;
	int a[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int k = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] > 100  && a[i] % 5 == 0)
		{
			++k;
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 5 == 0 && a[i] > 100)
		{
			a[i] = k;
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << endl;
	}
}