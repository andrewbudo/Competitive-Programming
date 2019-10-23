#include <iostream>
#include <string>
#include <vector>
using namespace std;
typedef long long ll;
int gcd(int a, int b)
{
	while (b)
	{
		a = a % b;
		swap(a, b);
	}
	return a;
}

long long getSolution2(int N, int a, int b, int A, int B)
{
	ll c = N / (a*b / gcd(a, b));
	ll ans;
	if (A > B)
		ans = (N / a - c)*A + (N / b - c)*B + c * A;
	else
		ans = (N / a - c)*A + (N / b - c)*B + c * B;
	
	return ans;
}

long long getSolution(int n, int a, int b, int p, int q)
{
	int n_a = n / a;
	int n_b = n / b;

	int GCD = gcd(a, b);
	long long LCD = 1ll * a * b / GCD;

	int n_common = n / LCD;
		
	long long ans;

	if (p > q)
	{		
		ans = 1ull * n_a * p + 1ull * q  * (n_b - n_common);
	}
	else
	{
		ans = 1ull * p * (n_a - n_common) + 1ull * n_b * q;
	}

	return ans;
}

/*
long long getSolution(int n, int a, int b, int p, int q)
{
	long long ans;

	if (p < q)
	{
		int temp = b;
		int temp2 = q;
		b = a;
		q = p;
		a = temp;
		p = temp2;
	}

	int sum = 0;
	for (int i = a; i <= n; i += a) {
		sum += 1;
	}
	ans = 1ll * sum * p;
	sum = 0;
	for (int i = b; i <= n; i += b) {
		if (i % a != 0)
		{
			sum += 1;
		}
	}

	ans += 1ll * sum * q;

	return ans;
}
*/
/*
long long getSolution(int n, int a, int b, int p, int q)
{
	long long ans;

	//bool A[1000000000];
	//vector<bool> A(1000000000);

	if (p < q)
	{
		int temp = b;
		int temp2 = q;
		b = a;
		q = p;
		a = temp;
		p = temp2;
	}

	int sum = 0;
	for (int i = a; i <= n; i += a) {
		A[i] = '1';
		sum += 1;
	}
	ans = 1ll * sum * p;
	sum = 0;
	for (int i = b; i <= n; i += b) {
		if (A[i] == '\0')
		{
			sum += 1;
		}
	}

	ans += 1ll * sum * q;

	return ans;
}

*/
/*
long long getSolution(int  n, int a, int b, int p, int q)
{
	long long ans;

	if (p < q)
	{
		int temp = b;
		int temp2 = q;
		b = a;
		q = p;
		a = temp;
		p = temp2;
	}

	long long sum_a = 0;
	long long sum_b = 0;

	for (long long i = b; i <= n; i += b) {
		sum_b += 1;
		if (i % a == 0)
			sum_a += 1;

		if (!A[i])
		{
			A[i] = true;
			sum_b += 1;
		}
	}




	for (long long i = a; i <= n; i += a) {
		if (!A[i])
		{
			A[i] = true;
			sum += 1;
		}
	}
	ans = sum * p;
	sum = 0;
	for (long long i = b; i <= n; i += b) {
		if (!A[i])
		{
			A[i] = true;
			sum += 1;
		}
	}

	ans += sum * q;

	return ans;
}
*/
/*
long long getSolution(int n, int a, int b, int p, int q)
{	
	long long ans;

	//bool A[1000000000];
	//vector<bool> A(1000000000);
	
	if (p < q)
	{
		int temp = b;
		int temp2 = q;
		b = a;
		q = p;
		a = temp;
		p = temp2;
	}
	
	int sum = 0;
	for (int i = a; i <= n; i += a) {
		if (!A[i]) 
		{
			A[i] = true;
			sum += 1;
		}
	}
	ans = 1ll * sum * p;
	sum = 0;
	for (int i = b; i <= n; i += b) {
		if (!A[i])
		{
			A[i] = true;
			sum += 1;
		}
	}

	ans += 1ll * sum * q;

	return ans;
}
*/


void Test1()
{
	string test = "Test1";
	long long ans = getSolution(5,2,3,12,15);
	if (ans == 39)
		cout << test << " is OK" << "\n";
	else
		cout << test << " is FAIL" << "\n";
}
void Test2()
{
	string test = "Test2";
	long long ans = getSolution(20,2,3,3,5);
	if (ans == 51)
		cout << test << " is OK" << "\n";
	else
		cout << test << " is FAIL" << "\n";
}

void Test3()
{
	string test = "Test3";
	int n = 1000000000, a = 12345678, b = 123456789, p = 1000000000, q = 999999999;
	long long ans = getSolution(n, a, b, p, q);
	if (ans == 88999999992ll)
		cout << test << " is OK" << "\n";
	else
		cout << test << " is FAIL" << "\n";
}

void Test4()
{
	string test = "Test4";
	long long ans = getSolution(1000000000,1,3,1000000000,999999999);
	if (ans == 1000000000000000000ll)
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
}

int main()
{
	TestAll();
	int n, a, b, p, q;
	cin >> n >> a >> b >> p >> q;

	long long ans = getSolution(n, a, b, p, q);
	cout << ans << "\n";
}