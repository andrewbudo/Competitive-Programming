#include <iostream>

using namespace std;

unsigned long long  getSolution(unsigned long long k, unsigned long long n, unsigned long long w)
{
	unsigned long long  N = (k * w * w + k * w) / 2.0;
	if (N >= n)
		return N - n;
	else
		return 0;
}

void Test1()
{
	unsigned long long  k = 3, n = 17, w = 4;
	unsigned long long  N = getSolution(k, n, w);
	if (N == 13)
		cout << "Test1 is OK" << "\n";
	else
		cout << "Test1 is FAIL" << "\n";
}

void Test2()
{
	unsigned long long  k = 1, n = 0, w = 1;
	unsigned long long  N = getSolution(k, n, w);
	if (N == 1)
		cout << "Test2 is OK" << "\n";
	else
		cout << "Test2 is FAIL" << "\n";
}

void Test3()
{
	unsigned long long  k = 1, n = 1, w = 1;
	unsigned long long  N = getSolution(k, n, w);
	if (N == 0)
		cout << "Test3 is OK" << "\n";
	else
		cout << "Test3 is FAIL" << "\n";
}

void Test4()
{
	unsigned long long  k = 1, n = 1000000000, w = 1;
	unsigned long long  N = getSolution(k, n, w);
	if (N == 0)
		cout << "Test4 is OK" << "\n";
	else
		cout << "Test4 is FAIL" << "\n";
}


int main()
{
	Test1();
	Test2();
	Test3();
	Test4();
	unsigned long long  k, n, w;
	cin >> k >> n >> w;
	unsigned long long  N = getSolution(k, n, w);
	cout << N << "\n";
	return 0;
}