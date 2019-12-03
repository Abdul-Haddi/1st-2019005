#include <iostream>
using namespace std;
int sum(int x)
{
	for (int i = x; i > 0; i--)
	{
		return (i + sum(i - 1));

	}


}
int main()
{
	int num = 0;
    cout << "Enter a positive integer\n";
	cin >> num;
	
	cout << "Sum = " << sum(num);
}
