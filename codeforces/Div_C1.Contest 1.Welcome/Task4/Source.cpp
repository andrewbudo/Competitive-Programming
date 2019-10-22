#include <iostream>
using namespace std;

int main()
{
	int row = -1, col = -1;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			int number;
			cin >> number;
			if (number == 1)
			{
				row = i + 1;
				col = j + 1;
			}			
		}
	}
	int k = abs(3 - row) + abs(3 - col);
	cout << k << "\n";
	return 0;
}