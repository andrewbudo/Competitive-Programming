#include <iostream>
#include <queue>
#include <cmath>
#include <string>
using namespace std;

struct Human
{
	char name;
	unsigned int count = 1;
};

std::string getSolution(int n)
{
	int degree = 0;
	int N = n / 5;
	if (N > 0)
		degree = static_cast<int>(std::log2(N));
	
	queue<Human> q;
	unsigned int t = static_cast<unsigned int>(pow(2, degree));
	q.push({ 'S', t });
	q.push({ 'L', t });
	q.push({ 'P', t });
	q.push({ 'R', t });
	q.push({ 'H', t });
	
	int k = static_cast<int>(5 * (pow(2, degree) - 1)) + 1;
	int w = (n - k) / t;
	for (int i = 0; i < w; i++)
	{
		q.push({ q.front().name, q.front().count * 2 });
		q.pop();
	}

	/*
	for (int i = k + 1; i < n; i++)
	{
		if (q.back().name == q.front().name)
		{
			q.back().count += 2;
		}
		else
		{
			q.push({ q.front().name, 2 });
		}

		if (--(q.front().count) == 0)
		{
			q.pop();
		}

	}
	*/
	std::string ans;

	switch (q.front().name)
	{
	case 'S':
		ans = "Sheldon";
		break;
	case 'L':
		ans = "Leonard";
		break;
	case 'P':
		ans = "Penny";
		break;
	case 'R':
		ans = "Rajesh";
		break;
	case 'H':
		ans = "Howard";
		break;
	}
	return ans;
}

void Test1()
{
	int n = 1;
	string ans = getSolution(n);
	if (ans == "Sheldon")
		cout << "Test1 is OK" << "\n";
	else
		cout << "Test1 is FAIL" << "\n";
}

void Test2()
{
	int n = 2;
	string ans = getSolution(n);
	if (ans == "Leonard")
		cout << "Test2 is OK" << "\n";
	else
		cout << "Test2 is FAIL" << "\n";
}

void Test3()
{
	int n = 5;
	string ans = getSolution(n);
	if (ans == "Howard")
		cout << "Test3 is OK" << "\n";
	else
		cout << "Test3 is FAIL" << "\n";
}

void Test4()
{
	int n = 6;
	string ans = getSolution(n);
	if (ans == "Sheldon")
		cout << "Test4 is OK" << "\n";
	else
		cout << "Test4 is FAIL" << "\n";
}

void Test5()
{
	int n = 1802;
	string ans = getSolution(n);
	if (ans == "Penny")
		cout << "Test5 is OK" << "\n";
	else
		cout << "Test5 is FAIL" << "\n";
}

void Test6()
{
	int n = 1000000000;
	string ans = getSolution(n);
	if (ans == "Penny")
		cout << "Test6 is OK" << "\n";
	else
		cout << "Test6 is FAIL" << "\n";
}


void TestAll()
{
	Test1();
	Test2();
	Test3();
	Test4();
	Test5();
	Test6();
}

int main()
{
	TestAll();
	int n;
	cin >> n;
	string ans = getSolution(n);
	cout << ans << "\n";

	return 0;
}