#include <iostream>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int getSolution(int n, int a, vector<int>& criminal)
{
	int sum = criminal[a];


	int min1 = min(a - 1, n - a);
	if (a - 1 <= n - a)
	{
		for (int i = a + a; i <= n; i++)
		{
			sum += criminal[i];
		}

	}
	else
	{
		for (int i = 1; i < a - min1; i++)
		{
			sum += criminal[i];
		}
	}

	for (int i = a - min1; i < a; i++)
	{
		int j = a + (a - i);
		if (j < criminal.size())
		{
			if (criminal[i] == criminal[j] && criminal[i] == 1)
				sum += 2;
		}
	}

	return sum;
}

void Test1()
{
	int n = 6, a = 3;
	vector<int> v = {0, 1, 1, 1, 0, 1, 0 };
	int ans = getSolution(n, a, v);
	if (ans == 3)
		cout << "Test1 is OK" << "\n";
	else
		cout << "Test1 is FAIL" << "\n";
}

void Test2()
{
	int n = 5, a = 2;
	vector<int> v = { 0, 0, 0, 0, 1, 0 };
	int ans = getSolution(n, a, v);
	if (ans == 1)
		cout << "Test2 is OK" << "\n";
	else
		cout << "Test2 is FAIL" << "\n";
}

void Test3()
{
	int n = 1, a = 1;
	vector<int> v = { 0, 0};
	int ans = getSolution(n, a, v);
	if (ans == 0)
		cout << "Test3 is OK" << "\n";
	else
		cout << "Test3 is FAIL" << "\n";
}

void Test4()
{
	int n = 1, a = 1;
	vector<int> v = { 0, 1 };
	int ans = getSolution(n, a, v);
	if (ans == 1)
		cout << "Test4 is OK" << "\n";
	else
		cout << "Test4 is FAIL" << "\n";
}

void Test5()
{
	int n = 100, a = 100;	
	vector<int> v(101);
	int ans = getSolution(n, a, v);
	if (ans == 0)
		cout << "Test5 is OK" << "\n";
	else
		cout << "Test5 is FAIL" << "\n";
}

void Test6()
{
	int n = 100, a = 100;
	vector<int> v(101);
	v[1] = 1;
	int ans = getSolution(n, a, v);
	if (ans == 1)
		cout << "Test6 is OK" << "\n";
	else
		cout << "Test6 is FAIL" << "\n";
}

void Test7()
{
	int n = 100, a = 100;
	vector<int> v(101);
	v[1] = 1;
	v[a] = 1;
	int ans = getSolution(n, a, v);
	if (ans == 2)
		cout << "Test7 is OK" << "\n";
	else
		cout << "Test7 is FAIL" << "\n";
}

void Test8()
{
	int n = 5, a = 3;
	vector<int> v = { 0, 0, 1, 1, 0, 0 };
	int ans = getSolution(n, a, v);
	if (ans == 1)
		cout << "Test8 is OK" << "\n";
	else
		cout << "Test8 is FAIL" << "\n";
}

void Test9()
{
	int n = 6, a = 2;
	vector<int> v = { 0, 1, 1, 1, 0, 0, 0 };
	int ans = getSolution(n, a, v);
	if (ans == 3)
		cout << "Test9 is OK" << "\n";
	else
		cout << "Test9 is FAIL" << "\n";
}

void Test10()
{
	int n = 6, a = 2;
	vector<int> v = { 0, 1, 1, 1, 1, 1, 1 };
	int ans = getSolution(n, a, v);
	if (ans == 6)
		cout << "Test10 is OK" << "\n";
	else
		cout << "Test10 is FAIL" << "\n";
}

void Test11()
{
	int n = 6, a = 2;
	vector<int> v = { 0, 0, 0, 0, 0, 0, 0 };
	int ans = getSolution(n, a, v);
	if (ans == 0)
		cout << "Test11 is OK" << "\n";
	else
		cout << "Test11 is FAIL" << "\n";
}

void Test12()
{
	int n = 10, a = 1;
	vector<int> v = { 0, 1, 1, 1, 0, 1, 0, 1, 1, 0, 0 };
	int ans = getSolution(n, a, v);
	if (ans == 6)
		cout << "Test12 is OK" << "\n";
	else
		cout << "Test12 is FAIL" << "\n";
}

void Test13()
{
	int n = 5, a = 5;
	vector<int> v = { 0, 1, 1, 1, 1, 1 };
	int ans = getSolution(n, a, v);
	if (ans == 5)
		cout << "Test13 is OK" << "\n";
	else
		cout << "Test13 is FAIL" << "\n";
}

void Test14()
{
	int n = 10, a = 2;
	vector<int> v = { 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 };
	int ans = getSolution(n, a, v);
	if (ans == 10)
		cout << "Test14 is OK" << "\n";
	else
		cout << "Test14 is FAIL" << "\n";
}

void Test15()
{
	int n = 5, a = 3;
	vector<int> v = { 0, 1, 0, 0, 1, 0 };
	int ans = getSolution(n, a, v);
	if (ans == 0)
		cout << "Test15 is OK" << "\n";
	else
		cout << "Test15 is FAIL" << "\n";
}

void Test16()
{
	int n = 6, a = 2;
	vector<int> v = { 0, 0, 0, 0, 0, 0, 0 };
	int ans = getSolution(n, a, v);
	if (ans == 0)
		cout << "Test16 is OK" << "\n";
	else
		cout << "Test16 is FAIL" << "\n";
}

void Test17()
{
	int n = 10, a = 1;
	vector<int> v = { 0, 0, 1, 0, 1, 1, 1, 1, 1, 1, 1 };
	int ans = getSolution(n, a, v);
	if (ans == 8)
		cout << "Test17 is OK" << "\n";
	else
		cout << "Test17 is FAIL" << "\n";
}

void Test18()
{
	string test = "Test18";
	int n = 10, a = 1;
	vector<int> v = { 0, 1, 1, 1, 0, 1, 1, 0, 1, 0, 1 };
	int ans = getSolution(n, a, v);
	if (ans == 7)
		cout << test << " is OK" << "\n";
	else
		cout << test << " is FAIL" << "\n";
}

void Test19()
{
	string test = "Test19";
	int n = 2, a = 1;
	vector<int> v = { 0, 0, 1 };
	int ans = getSolution(n, a, v);
	if (ans == 1)
		cout << test << " is OK" << "\n";
	else
		cout << test << " is FAIL" << "\n";
}

void Test20()
{
	string test = "Test20";
	int n = 2, a = 1;
	vector<int> v = { 0, 1, 1 };
	int ans = getSolution(n, a, v);
	if (ans == 2)
		cout << test << " is OK" << "\n";
	else
		cout << test << " is FAIL" << "\n";
}

void Test21()
{
	string test = "Test21";
	int n = 10, a = 7;
	vector<int> v = { 0, 1, 1, 1, 0, 0, 1, 1, 0, 1, 1 };
	int ans = getSolution(n, a, v);
	if (ans == 4)
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
	Test10();
	Test11();
	Test12();
	Test13();
	Test14();
	Test15();
	Test16();
	Test17();
	Test18();
	Test19();
	Test20();
	Test21();
}

int main()
{	
	TestAll();
	int n, a;
	cin >> n >> a;
	vector<int> criminal(n + 1);
	for (int i = 1; i <= n; i++)
	{
		cin >> criminal[i];
	}

	int ans = getSolution(n, a, criminal);
	cout << ans << "\n";
}