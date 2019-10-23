#include <iostream>
#include <vector>
#include <string>

using namespace std;

long long getSolution(long long n, int k)
{
	vector<long long> all(1, 1);
	for (long long i = 2; i*i <= n; i++)
	{
		if (n % i == 0)
		{
			all.push_back(i);
			if (all.size() == k)
				return i;
		}
	}
	int size = all.size();
	for (long long i = size - 1; i >= 0; --i)
	{
		long long factor = n / all[i];
		if (n > 1 && all[i] != factor)
			all.push_back(factor);
		if (all.size() >= k)
			break;		
	}

	if (all.size() >= k)
	{
		return all[k -1];
	}

	return -1;
}

void Test1()
{
	string test = "Test1";
	long long ans = getSolution(4, 2);
	if (ans == 2)
		cout << test << " is OK" << "\n";
	else
		cout << test << " is FAIL" << "\n";
}
void Test2()
{
	string test = "Test2";
	long long ans = getSolution(5, 3);
	if (ans == -1)
		cout << test << " is OK" << "\n";
	else
		cout << test << " is FAIL" << "\n";
}

void Test3()
{
	string test = "Test3";
	long long ans = getSolution(12, 5);
	if (ans == 6)
		cout << test << " is OK" << "\n";
	else
		cout << test << " is FAIL" << "\n";
}
void Test4()
{
	string test = "Test4";
	long long ans = getSolution(999999993568952, 17);
	if (ans == 31622777)
		cout << test << " is OK" << "\n";
	else
		cout << test << " is FAIL" << "\n";
}
void Test5()
{
	string test = "Test5";
	long long ans = getSolution(99999999994190, 9);
	if (ans == 241656799)
		cout << test << " is OK" << "\n";
	else
		cout << test << " is FAIL" << "\n";
}
void Test6()
{
	string test = "Test6";
	long long ans = getSolution(999999999999989, 2);
	if (ans == 999999999999989)
		cout << test << " is OK" << "\n";
	else
		cout << test << " is FAIL" << "\n";
}

void Test7()
{
	string test = "Test7";
	long long ans = getSolution(1, 1);
	if (ans == 1)
		cout << test << " is OK" << "\n";
	else
		cout << test << " is FAIL" << "\n";
}
void Test8()
{
	string test = "Test8";
	long long ans = getSolution(4, 3);
	if (ans == 4)
		cout << test << " is OK" << "\n";
	else
		cout << test << " is FAIL" << "\n";
}
void Test9()
{
	string test = "Test9";
	long long ans = getSolution(67280421310721, 1);
	if (ans == 1)
		cout << test << " is OK" << "\n";
	else
		cout << test << " is FAIL" << "\n";
}
void TestAll()
{
	Test1();
	Test2();
	Test3();
	Test4();
	Test5();
	Test6();
	Test7();
	Test8();
	Test9();
}

int main()
{
	TestAll();
	long long n;
	int k;
	cin >> n >> k;
	long long ans = getSolution(n, k);
	cout << ans << "\n";

}