#include <iostream>

using namespace std;

unsigned long long getSolution(long long n, long long m, long long a)
{
	unsigned long long n1, m1;
	if (n % a == 0)
		n1 = n / a;
	else
		n1 = n / a + 1;

	if (m % a == 0)
		m1 = m / a;
	else
		m1 = m / a + 1;

	return n1 * m1;
}

void Test1()
{
	unsigned long long n = 6, m = 6, a = 4;
	unsigned long long ans = getSolution(n, m, a);
	if (ans == 4)
	{
		cout << "Test1 is OK" << "\n";
	}
	else
	{
		cout << "Test1 is FAIL" << "\n";
	}
}
/*
void Test2()
{
	long long n = 10^9, m = 10^9, a = 4;
	long long ans = getSolution(n, m, a);
	if (ans == 4)
	{
		cout << "Test1 is OK" << "\n";
	}
	else
	{
		cout << "Test1 is FAIL" << "\n";
	}
}
*/
void TestAll() {
	Test1();
	//Test2();
}

int main()
{
	TestAll();
	unsigned long long n, m, a;
	cin >> n >> m >> a;
	unsigned long long ans = getSolution(n, m, a);
	cout << ans << "\n";
	return 0;
}