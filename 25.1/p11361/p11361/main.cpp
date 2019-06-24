#include <iostream>

using namespace std;

int main()
{
	int const n = 5;
	int a[n];

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int k = 0;
	for (int i = 0; i < n - 1; i++)
	{
		if (a[i] % 10 == 2 || a[i + 1] % 10 == 2)
		{
			++k;
		}
	}
	cout << k;
	return 0;
}