#include <iostream>

using namespace std;

int main()
{
	double x, y;
	int n, step, step2;

	cout << "x=";
	cin >> x;
	cout << "n=";
	cin >> n;
	cout << "\n Please specify amount of increase : ";
	cin >> step;
	cout << "\n Please specify amount of increase : ";
	cin >> step2;
	if (x < 0)
	{
		y = 0;
		for (int i = 1; i <= n - 1; i = i + step)
		{
			double s = 0;
			for (int j = 1; j <= n; j = j + step2)
				s += (x - i + j);
			y += s;
		}
	}
	else
	{
		y = 0;
		for (int i = 0; i <= n - 1; i = i + step)
			y += (x / i);
	}

	cout << "y=" << y << endl;
	system("pause");
}