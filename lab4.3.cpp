#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	double a, b, c, xp, xk, dx, x, F;

	cout << "a="; cin >> a;
	cout << "b="; cin >> b;
	cout << "c="; cin >> c;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;

	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(10) << "x" << " |"
		<< setw(10) << "F" << " |" << endl;
	cout << "---------------------------" << endl;

	x = xp;
	while (x <= xk)
	{
		if (x < 1 && c != 0)
			F = a * x * x + b / c;
		else
			if (x > 1.5 && c == 0)
				F = (x - a) / (pow((x - c), 2));
			else
				F = x * x * 1.0 / (c * c);
		cout << "|" << setw(10) << setprecision(3) << x
			<< " |" << setw(10) << setprecision(3) << F
			<< " |" << endl;
		x += dx;
	}

	cout << "---------------------------" << endl;

	return 0;
}
