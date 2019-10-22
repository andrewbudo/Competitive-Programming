#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;

	for (int i = -n; i <= n; i++)
	{
		bool isEnd = false;
		for (int j = -n; j <= n; j++)
		{
			int k = n - abs(i) - abs(j);
			if (k < 0 && isEnd)
			{
				break;
			}
			else if (k < 0 && j == -n)
			{
				cout << " ";
			}
			else if (k < 0)
			{
				cout << "  ";
			}
			else if (j == -n)
			{
				cout << k;
				isEnd = true;
			}
			else
			{
				cout << " " << k;
				isEnd = true;
			}
		}
		cout << "\n";
	}

	return 0;
}