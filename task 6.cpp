#include <iostream>
using namespace std;

void prime(int n)
{
	int divider;
	int flag;
	int count = 0;
	divider = n / 2;
	int j = 2;
	while (count < n)
	{
		flag = 1;
		for (int i = 2; i <= divider; i++)
		{
			if (j % i == 0 && j !=i)
			{
				flag = 0;
				j = j + 1;
				break;
			}
		}
		if (flag == 1)
		{
			cout << j << " ";
			count = count + 1;
			j = j + 1;
		}
	}
}
				
        
	

	
/*int main()
{
	string message1 = "please inter positive number";
	cout << message1 << endl;
	int n;
	cin >> n;
	prime(n);

}
*/