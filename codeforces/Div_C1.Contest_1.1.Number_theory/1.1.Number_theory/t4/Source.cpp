#include <iostream>
#include <vector>
#include <string>
using namespace std;

int getSolution(int n, vector<int>& vans)
{
	int ans = 1;
	vector<char> prime(n + 2, true);
	prime[0] = prime[1] = false;
	vans[2] = vans[3] = 1;
	int ind = 1;
	for (int i = 2; i <= n + 1; ++i)
	{
		if (prime[i])
		{
			if (i * 1ll * i <= n + 1)
			{
				++ind;
				for (int j = i * i; j <= n + 1; j += i)
				{
					prime[j] = false;
					vans[j] = ind;
					++ans;
				}
			}
		}
	}
	return ans;
}

void Test1()
{
	string test = "Test1";
	int n = 3;
	vector<int> vans(n + 2, 0);
	int ans = getSolution(n, vans);
	vector<int> vans_true = { 0, 0, 1, 1, 2 };
	if (ans == 2 && vans_true == vans)
		cout << test << " is OK" << "\n";
	else
		cout << test << " is FAIL" << "\n";
}
void Test2()
{
	string test = "Test2";
	int n = 4;
	vector<int> vans(n + 2, 1);
	int ans = getSolution(n, vans);
	vector<int> vans_true = { 0, 0, 1, 2, 2, 1 };
	if (ans == 2 && vans_true == vans)
		cout << test << " is OK" << "\n";
	else
		cout << test << " is FAIL" << "\n";
}
void TestAll()
{
	Test1();
	Test2();
}

int main()
{
	TestAll();
	int n;
	cin >> n;
	vector<int> vans(n + 2, 0);
	int ans = getSolution(n, vans);
	cout << ans << "\n";
	for (auto a : vans)
		cout << a << " ";
}