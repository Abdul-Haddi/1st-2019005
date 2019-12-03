#include <iostream>
using namespace std;
#include<math.h>
int pow(int x, int y)
{
	if (y > 1)
	{
		return x * pow(x, y - 1);
	}
	else
	{
		return x;
	}
	
}

int main()
{
	int base, exp;
    cout << "Enter base: \n";
	cin >> base;
	cout << "Enter exponent: \n";
	cin >> exp;
	cout <<base<< "^"<<exp<<" = "<<pow(base,exp);
	return 0;
}

