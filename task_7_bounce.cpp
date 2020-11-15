#include <iostream>
using namespace std;

void  descending_ascending(int n)
{
	if (n < 0)
		cout << "Error! Input cannot be negative.";
	for (int i = n; i >= 0; i--)
	{
		cout << i;
	}
	for (int i = 1; i <=n; i++)
	{
		cout << i;
	}
}


/*int main()
{
	string message1 = "please inter positive number";
	cout << message1 << endl;
	int n;
	cin >> n;
	descending_ascending(n);

}
*/