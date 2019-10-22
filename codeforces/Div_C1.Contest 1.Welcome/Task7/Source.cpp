#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
#include <algorithm>

using namespace std;

long double getSolution(std::stringstream& ss)
{
	int home_x, home_y, n;
	cin >> home_x >> home_y >> n;
	//ss >> home_x >> home_y >> n;

	//long double mintime = 200.0;
	long double mintime = numeric_limits<long double>::max();
	for (int i = 0; i < n; i++)
	{
		int x, y, v;
		cin >> x >> y >> v;
		//ss >> x >> y >> v;
		long double length = sqrt(1.0*(x - home_x) * (x - home_x) + 1.0*(y - home_y) * (y - home_y));
		long double time = length / v;
		if (time < mintime)
			mintime = time;
	}

	return mintime;
}

void Test1()
{
	string test = "Test1 ";
	string s = 
		"0 0 " 
		"1 " 
		"10 0 6 ";
	std::stringstream ss(s);
	double ans = getSolution(ss);
	double exp = 1.6666667;
	if (abs(ans - exp)/max(1.0, exp) <= pow(10, -6))
		cout << test << "is OK" << "\n";
	else
		cout << test << "is FAIL" << "\n";
}

void TestAll()
{
	Test1();

}

int main()
{
	//TestAll();
	string s = "0 0 1 10 0 6";
	std::stringstream ss(s);
		
	long double ans = getSolution(ss);
	cout.setf(ios::fixed);
	/* cout << fixed;*/
	cout << setprecision(20);	
	cout << ans << "\n";	
}