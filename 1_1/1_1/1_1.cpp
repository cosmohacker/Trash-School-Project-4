#include <iostream>

using namespace std;

int main()
{
    double x, y;
    int n;

    cout << "x=";
    cin >> x;
    cout << "n=";
    cin >> n;

    if (x < 0)
    {
        y = 0;
        for (int i = 1; i <= n - 1; i++)
        {
            double s = 0;
            for (int j = 1; j <= n; j++)
                s += (x - i + j);
            y += s;
        }
    }
    else
    {
        y = 0;
        for (int i = 0; i <= n - 1; i++)
            y += (x / i);
    }

    cout << "y=" << y << endl;
    system("pause");
}