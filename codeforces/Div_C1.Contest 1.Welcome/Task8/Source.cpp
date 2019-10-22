#include <iostream>
#include <string>
#include <vector>

using namespace std;

int getSolution(vector<string>& all)
{
	int ans = all[0].size();
	vector<string> clean(all.size(), "");

	for (int j = 0; j < (all[0]).size(); j++)
	{
		bool flag = true;
		for (int i = 0; i < all.size() - 1; i++)
		{
			string s1 = clean[i] + all[i][j];
			string s2 = clean[i + 1] + all[i + 1][j];
			if (s1 > s2) {
				flag = false;
				break;
			}
		}

		if (flag)
		{
			for (int i = 0; i < all.size(); i++)
				clean[i] += all[i][j];
		}
	}

	ans -= clean[0].size();

	return ans;
}

/*
int getSolution2(vector<string>& all)
{
int ans = all[0].size();
vector<int> bad_rows;

for (int i = 0; i < static_cast<int>((all[0]).size()); i++)
{
for (int j = 0; j < static_cast<int>(all.size()) - 1; j++)
{
if (all[j][i] > all[j + 1][i]) {
bad_rows.push_back(i);
break;
}
}
}
int k = 0;
for (int i = 0; i < static_cast<int>(bad_rows.size()); i++)
{
bool flag = true;

for (int p = 0; p < static_cast<int>(all.size()) - 1; p++)
{
if (all[p] > all[p + 1])
{
flag = false;
break;
}
}
if (flag)
{
break;
}

bool is_need_to_increase = false;
for (int j = 0; j < static_cast<int>(all.size()); j++)
{
int index = bad_rows[i] - k;
auto r = all[j].begin() + index;
all[j].erase(r);
is_need_to_increase = true;
}
if (is_need_to_increase)
{
++k;
}

}

ans -= all[0].size();

return ans;
}
*/


void Test1()
{
	string test = "Test1";
	vector<string> all = { "codeforces" };
	int ans = getSolution(all);

	if (ans == 0)
		cout << test + " is OK" << "\n";
	else
		cout << test + " is FAIL" << "\n";
}

void Test2()
{
	string test = "Test2";
	vector<string> all = { "case", "care", "test", "code" };
	int ans = getSolution(all);

	if (ans == 2)
		cout << test + " is OK" << "\n";
	else
		cout << test + " is FAIL" << "\n";
}

void Test3()
{
	string test = "Test3";
	vector<string> all = { "code", "forc", "esco", "defo", "rces" };
	int ans = getSolution(all);

	if (ans == 4)
		cout << test + " is OK" << "\n";
	else
		cout << test + " is FAIL" << "\n";
}

void Test4()
{
	string test = "Test4";
	vector<string> all;
	int n = 100, m = 100;
	for (int i = 0; i < n; i++)
	{
		string s;
		for (int j = 0; j < m; j++)
		{
			int ddd = 126 - i;
			if (ddd < 48)
				ddd += 78;
			s.push_back(static_cast<char>(ddd));
		}
		all.push_back(s);
	}

	int ans = getSolution(all);

	if (ans == 100)
		cout << test + " is OK" << "\n";
	else
		cout << test + " is FAIL" << "\n";
}

void Test5()
{
	string test = "Test5";
	vector<string> all = {
		"aeaaa",
		"adbaa",
		"bcaaa",
		"bbbaa",
		"bacaa" };
	int ans = getSolution(all);

	if (ans == 1)
		cout << test + " is OK" << "\n";
	else
		cout << test + " is FAIL" << "\n";
}

void Test6()
{
	string test = "Test6";
	vector<string> all = {
		"abzk",
		"bbdk",
		"cbbk",
		"dbak"
	};
	int ans = getSolution(all);

	if (ans == 0)
		cout << test + " is OK" << "\n";
	else
		cout << test + " is FAIL" << "\n";
}

void Test7()
{
	string test = "Test7";
	vector<string> all = {
		"aaz",
		"daa",
		"baa",
	};
	int ans = getSolution(all);

	if (ans == 2)
		cout << test + " is OK" << "\n";
	else
		cout << test + " is FAIL" << "\n";
}

void Test8()
{
	string test = "Test8";
	vector<string> all = {
		"abz",
		"dby",
		"gbx",
		"hbw",
	};
	int ans = getSolution(all);

	if (ans == 0)
		cout << test + " is OK" << "\n";
	else
		cout << test + " is FAIL" << "\n";
}


void Test9()
{
	string test = "Test9";
	vector<string> all = {
		"ab",
		"dc",
		"gd",
		"gc",
		"hx",
	};
	int ans = getSolution(all);

	if (ans == 1)
		cout << test + " is OK" << "\n";
	else
		cout << test + " is FAIL" << "\n";
}

void Test10()
{
	string test = "Test10";
	vector<string> all = {
		"ab",
		"da",
		"xy",
	};
	int ans = getSolution(all);

	if (ans == 0)
		cout << test + " is OK" << "\n";
	else
		cout << test + " is FAIL" << "\n";
}

void Test11()
{
	string test = "Test11";
	vector<string> all = {
		"aa",
		"ab",
		"ba",
		"bb",
		"cc",
	};
	int ans = getSolution(all);

	if (ans == 0)
		cout << test + " is OK" << "\n";
	else
		cout << test + " is FAIL" << "\n";
}

void Test12()
{
	string test = "Test12";
	vector<string> all = {
		"aq",
		"aq",
	};
	int ans = getSolution(all);

	if (ans == 0)
		cout << test + " is OK" << "\n";
	else
		cout << test + " is FAIL" << "\n";
}

void Test13()
{
	string test = "Test13";
	vector<string> all = {
		"dasdf",
		"safaf",
		"fsdff",
		"hhfgh",
		"turur",
	};
	int ans = getSolution(all);

	if (ans == 4)
		cout << test + " is OK" << "\n";
	else
		cout << test + " is FAIL" << "\n";
}

void Test14()
{
	string test = "Test14";
	vector<string> all = {
		"b",
	};
	int ans = getSolution(all);

	if (ans == 0)
		cout << test + " is OK" << "\n";
	else
		cout << test + " is FAIL" << "\n";
}

void Test15()
{
	string test = "Test15";
	vector<string> all = {
		"bac","bac","bac","bac",
	};
	int ans = getSolution(all);

	if (ans == 0)
		cout << test + " is OK" << "\n";
	else
		cout << test + " is FAIL" << "\n";
}
void Test16()
{
	string test = "Test16";
	vector<string> all = {
		"bbb",
		"aaa",
		"ccc",
	};
	int ans = getSolution(all);

	if (ans == 3)
		cout << test + " is OK" << "\n";
	else
		cout << test + " is FAIL" << "\n";
}
void Test17()
{
	string test = "Test17";
	vector<string> all = {
		"bac",
		"abb",
		"aca",
	};
	int ans = getSolution(all);

	if (ans == 1)
		cout << test + " is OK" << "\n";
	else
		cout << test + " is FAIL" << "\n";
}

void Test18()
{
	string test = "Test18";
	vector<string> all = {
		"aaaaa",
		"abbaa",
		"aecba",
		"afbaa",
	};
	int ans = getSolution(all);

	if (ans == 0)
		cout << test + " is OK" << "\n";
	else
		cout << test + " is FAIL" << "\n";
}

void Test19()
{
	string test = "Test19";
	vector<string> all = {
		"powe",
		"comp",

	};
	int ans = getSolution(all);

	if (ans == 2)
		cout << test + " is OK" << "\n";
	else
		cout << test + " is FAIL" << "\n";
}
void Test20()
{
	string test = "Test20";
	vector<string> all = {
		"ab",
		"ab",
		"aa",

	};
	int ans = getSolution(all);

	if (ans == 1)
		cout << test + " is OK" << "\n";
	else
		cout << test + " is FAIL" << "\n";
}

void Test21()
{
	string test = "Test21";
	vector<string> all = {
		"abcd",
		"edfg",
		"hijk",

	};
	int ans = getSolution(all);

	if (ans == 0)
		cout << test + " is OK" << "\n";
	else
		cout << test + " is FAIL" << "\n";
}

void Test22()
{
	string test = "Test22";
	vector<string> all = {
		"geapjlzgiuqziwrmwknapqqkeiduxppotcgnehmknuapnsyoek",
		"gicztcwfyjllnxudgjmhdebinlfxkhpjrdowtoyfqbpdocfanm",
		"grmifkpvwjlpnvprsiovdgufribymadxlttzawossxixidiulh",
		"ghmkyphjrlcqmxzkgnefxuuxaxyftkpdkoxznqembdafjaktiu",
		"gumayphfrlrrjxqiqotgrycoroaiuzszmflyelianwmzlbqgiu",
		"gkqieaeuwresegtoknxaaulqvxvimfbbtieidhddrpfldcfoav",
		"gnqhsajygggvqctabngcoxwbzvflgncusswbgomhcvlnecbqyb",
		"gzqwdapkacjdctvqgxcerbnkhzdzcbwjzlotxasbxjezeycosu",
		"gcxmnehjvjfynfualwdjzhorrjjccloljyubeyzjurgxbefdbi",
		"gpxrllcqtdsaxmtiwdiexxggkahhuqdxzisqeyzjurgxbefdbi",
		"geapjlzgiuqziwrmwknapqqkeiduxppotcgnehmknuapnsyoek",
		"gicztcwfyjllnxudgjmhdebinlfxkhpjrdowtoyfqbpdocfanm",
		"grmifkpvwjlpnvprsiovdgufribymadxlttzawossxixidiulh",
		"ghmkyphjrlcqmxzkgnefxuuxaxyftkpdkoxznqembdafjaktiu",
		"gumayphfrlrrjxqiqotgrycoroaiuzszmflyelianwmzlbqgiu",
		"gkqieaeuwresegtoknxaaulqvxvimfbbtieidhddrpfldcfoav",
		"gnqhsajygggvqctabngcoxwbzvflgncusswbgomhcvlnecbqyb",
		"gzqwdapkacjdctvqgxcerbnkhzdzcbwjzlotxasbxjezeycosu",
		"gcxmnehjvjfynfualwdjzhorrjjccloljyubeyzjurgxbefdbi",
		"gpxrllcqtdsaxmtiwdiexxggkahhuqdxzisqeyzjurgxbefdbi",
		"geapjlzgiuqziwrmwknapqqkeiduxppotcgnehmknuapnsyoek",
		"gicztcwfyjllnxudgjmhdebinlfxkhpjrdowtoyfqbpdocfanm",
		"grmifkpvwjlpnvprsiovdgufribymadxlttzawossxixidiulh",
		"ghmkyphjrlcqmxzkgnefxuuxaxyftkpdkoxznqembdafjaktiu",
		"gumayphfrlrrjxqiqotgrycoroaiuzszmflyelianwmzlbqgiu",
		"gkqieaeuwresegtoknxaaulqvxvimfbbtieidhddrpfldcfoav",
		"gnqhsajygggvqctabngcoxwbzvflgncusswbgomhcvlnecbqyb",
		"gzqwdapkacjdctvqgxcerbnkhzdzcbwjzlotxasbxjezeycosu",
		"gcxmnehjvjfynfualwdjzhorrjjccloljyubeyzjurgxbefdbi",
		"gpxrllcqtdsaxmtiwdiexxggkahhuqdxzisqeyzjurgxbefdbi",
		"geapjlzgiuqziwrmwknapqqkeiduxppotcgnehmknuapnsyoek",
		"gicztcwfyjllnxudgjmhdebinlfxkhpjrdowtoyfqbpdocfanm",
		"grmifkpvwjlpnvprsiovdgufribymadxlttzawossxixidiulh",
		"ghmkyphjrlcqmxzkgnefxuuxaxyftkpdkoxznqembdafjaktiu",
		"gumayphfrlrrjxqiqotgrycoroaiuzszmflyelianwmzlbqgiu",
		"gkqieaeuwresegtoknxaaulqvxvimfbbtieidhddrpfldcfoav",
		"gnqhsajygggvqctabngcoxwbzvflgncusswbgomhcvlnecbqyb",
		"gzqwdapkacjdctvqgxcerbnkhzdzcbwjzlotxasbxjezeycosu",
		"gcxmnehjvjfynfualwdjzhorrjjccloljyubeyzjurgxbefdbi",
		"gpxrllcqtdsaxmtiwdiexxggkahhuqdxzisqeyzjurgxbefdbi",
		"geapjlzgiuqziwrmwknapqqkeiduxppotcgnehmknuapnsyoek",
		"gicztcwfyjllnxudgjmhdebinlfxkhpjrdowtoyfqbpdocfanm",
		"grmifkpvwjlpnvprsiovdgufribymadxlttzawossxixidiulh",
		"ghmkyphjrlcqmxzkgnefxuuxaxyftkpdkoxznqembdafjaktiu",
		"gumayphfrlrrjxqiqotgrycoroaiuzszmflyelianwmzlbqgiu",
		"gkqieaeuwresegtoknxaaulqvxvimfbbtieidhddrpfldcfoav",
		"gnqhsajygggvqctabngcoxwbzvflgncusswbgomhcvlnecbqyb",
		"gzqwdapkacjdctvqgxcerbnkhzdzcbwjzlotxasbxjezeycosu",
		"gcxmnehjvjfynfualwdjzhorrjjccloljyubeyzjurgxbefdbi",
		"gpxrllcqtdsaxmtiwdiexxggkahhuqdxzisqeyzjurgxbefdbi",

	};
	int ans = getSolution(all);

	if (ans == 4)
		cout << test + " is OK" << "\n";
	else
		cout << test + " is FAIL" << "\n";
}
void Test23()
{
	string test = "Test23";
	vector<string> all = {
		"geapjlzgiuqziwrmwknapqqkeiduxppotcgnehmknuapnsyoek",
		"gicztcwfyjllnxudgjmhdebinlfxkhpjrdowtoyfqbpdocfanm",
		"grmifkpvwjlpnvprsiovdgufribymadxlttzawossxixidiulh",
		"ghmkyphjrlcqmxzkgnefxuuxaxyftkpdkoxznqembdafjaktiu",
		"gumayphfrlrrjxqiqotgrycoroaiuzszmflyelianwmzlbqgiu",
		"gkqieaeuwresegtoknxaaulqvxvimfbbtieidhddrpfldcfoav",
		"gnqhsajygggvqctabngcoxwbzvflgncusswbgomhcvlnecbqyb",
		"gzqwdapkacjdctvqgxcerbnkhzdzcbwjzlotxasbxjezeycosu",
		"gcxmnehjvjfynfualwdjzhorrjjccloljyubeyzjurgxbefdbi",
		"gpxrllcqtdsaxmtiwdiexxggkahhuqdxzisqeyzjurgxbefdbi",
	};
	int ans = getSolution(all);

	if (ans == 4)
		cout << test + " is OK" << "\n";
	else
		cout << test + " is FAIL" << "\n";
}

void Test24()
{
	string test = "Test24";
	vector<string> all = {
		"axc",
		"bxa",
	};
	int ans = getSolution(all);

	if (ans == 0)
		cout << test + " is OK" << "\n";
	else
		cout << test + " is FAIL" << "\n";
}

void Test25()
{
	string test = "Test25";
	vector<string> all = {
		"abc",
		"bbb",
		"cba",

	};
	int ans = getSolution(all);

	if (ans == 0)
		cout << test + " is OK" << "\n";
	else
		cout << test + " is FAIL" << "\n";
}

void Test26()
{
	string test = "Test26";
	vector<string> all = {
		"aa",
		"bc",
		"ba",

	};
	int ans = getSolution(all);

	if (ans == 1)
		cout << test + " is OK" << "\n";
	else
		cout << test + " is FAIL" << "\n";
}

void Test27()
{
	string test = "Test27";
	vector<string> all = {
		"aaaeaa",
		"ababab",
		"acacac",
		"adadad",
		"aeaeae",
	};
	int ans = getSolution(all);

	if (ans == 0)
		cout << test + " is OK" << "\n";
	else
		cout << test + " is FAIL" << "\n";
}

void Test28()
{
	string test = "Test28";
	vector<string> all = {
		"vukbophwywivktidxlqnhkazsdbqfkusvwpdzdmtimaarwpuweifymealqobsiqexhalvcyfsiravyhnfrifirfnezmmerobeemc",
		"vukbophwywivktidxlqnhkazsdbqfkusvwpdzdmtimaarwpuweifymealqobsiqexhalvcyfsiravyhnfrifirfnezmmerobeemc",
		"vukbophwywivktidxlqnhkazsdbqfkusvwpdzdmtimaarwpuweifymealqobsiqexhalvcyfsiravyhnfrifirfnezmmerobeemc",
		"vukbophwywivktidxlqnhkazsdbqfkusvwpdzdmtimaarwpuweifymealqobsiqexhalvcyfsiravyhnfrifirfnezmmerobeemc",
		"vukbophwywivktidxlqnhkazsdbqfkusvwpdzdmtimaarwpuweifymealqobsiqexhalvcyfsiravyhnfrifirfnezmmerobeemc",
		"vukbophwywivktidxlqnhkazsdbqfkusvwpdzdmtimaarwpuweifymealqobsiqexhalvcyfsiravyhnfrifirfnezmmerobeemc",
		"vukbophwywivktidxlqnhkazsdbqfkusvwpdzdmtimaarwpuweifymealqobsiqexhalvcyfsiravyhnfrifirfnezmmerobeemc",
		"vukbophwywivktidxlqnhkazsdbqfkusvwpdzdmtimaarwpuweifymealqobsiqexhalvcyfsiravyhnfrifirfnezmmerobeemc",
		"vukbophwywivktidxlqnhkazsdbqfkusvwpdzdmtimaarwpuweifymealqobsiqexhalvcyfsiravyhnfrifirfnezmmerobeemc",
		"vukbophwywivktidxlqnhkazsdbqfkusvwpdzdmtimaarwpuweifymealqobsiqexhalvcyfsiravyhnfrifirfnezmmerobeemc",
		"vukbophwywivktidxlqnhkazsdbqfkusvwpdzdmtimaarwpuweifymealqobsiqexhalvcyfsiravyhnfrifirfnezmmerobeemc",
		"vukbophwywivktidxlqnhkazsdbqfkusvwpdzdmtimaarwpuweifymealqobsiqexhalvcyfsiravyhnfrifirfnezmmerobeemc",
		"vukbophwywivktidxlqnhkazsdbqfkusvwpdzdmtimaarwpuweifymealqobsiqexhalvcyfsiravyhnfrifirfnezmmerobeemc",
		"vukbophwywivktidxlqnhkazsdbqfkusvwpdzdmtimaarwpuweifymealqobsiqexhalvcyfsiravyhnfrifirfnezmmerobeemc",
		"vukbophwywivktidxlqnhkazsdbqfkusvwpdzdmtimaarwpuweifymealqobsiqexhalvcyfsiravyhnfrifirfnezmmerobeemc",
		"vukbophwywivktidxlqnhkazsdbqfkusvwpdzdmtimaarwpuweifymealqobsiqexhalvcyfsiravyhnfrifirfnezmmerobeemc",
		"vukbophwywivktidxlqnhkazsdbqfkusvwpdzdmtimaarwpuweifymealqobsiqexhalvcyfsiravyhnfrifirfnezmmerobeemc",
		"vukbophwywivktidxlqnhkazsdbqfkusvwpdzdmtimaarwpuweifymealqobsiqexhalvcyfsiravyhnfrifirfnezmmerobeemc",
		"vukbophwywivktidxlqnhkazsdbqfkusvwpdzdmtimaarwpuweifymealqobsiqexhalvcyfsiravyhnfrifirfnezmmerobeemc",
		"vukbophwywivktidxlqnhkazsdbqfkusvwpdzdmtimaarwpuweifymealqobsiqexhalvcyfsiravyhnfrifirfnezmmerobeemc",
		"vukbophwywivktidxlqnhkazsdbqfkusvwpdzdmtimaarwpuweifymealqobsiqexhalvcyfsiravyhnfrifirfnezmmerobeemc",
		"vukbophwywivktidxlqnhkazsdbqfkusvwpdzdmtimaarwpuweifymealqobsiqexhalvcyfsiravyhnfrifirfnezmmerobeemc",
		"vukbophwywivktidxlqnhkazsdbqfkusvwpdzdmtimaarwpuweifymealqobsiqexhalvcyfsiravyhnfrifirfnezmmerobeemc",
		"vukbophwywivktidxlqnhkazsdbqfkusvwpdzdmtimaarwpuweifymealqobsiqexhalvcyfsiravyhnfrifirfnezmmerobeemc",
		"vukbophwywivktidxlqnhkazsdbqfkusvwpdzdmtimaarwpuweifymealqobsiqexhalvcyfsiravyhnfrifirfnezmmerobeemc",
		"vukbophwywivktidxlqnhkazsdbqfkusvwpdzdmtimaarwpuweifymealqobsiqexhalvcyfsiravyhnfrifirfnezmmerobeemc",
		"vukbophwywivktidxlqnhkazsdbqfkusvwpdzdmtimaarwpuweifymealqobsiqexhalvcyfsiravyhnfrifirfnezmmerobeemc",
		"vukbophwywivktidxlqnhkazsdbqfkusvwpdzdmtimaarwpuweifymealqobsiqexhalvcyfsiravyhnfrifirfnezmmerobeemc",
		"vukbophwywivktidxlqnhkazsdbqfkusvwpdzdmtimaarwpuweifymealqobsiqexhalvcyfsiravyhnfrifirfnezmmerobeemc",
		"vukbophwywivktidxlqnhkazsdbqfkusvwpdzdmtimaarwpuweifymealqobsiqexhalvcyfsiravyhnfrifirfnezmmerobeemc",
		"vukbophwywivktidxlqnhkazsdbqfkusvwpdzdmtimaarwpuweifymealqobsiqexhalvcyfsiravyhnfrifirfnezmmerobeemc",
		"vukbophwywivktidxlqnhkazsdbqfkusvwpdzdmtimaarwpuweifymealqobsiqexhalvcyfsiravyhnfrifirfnezmmerobeemc",
		"vukbophwywivktidxlqnhkazsdbqfkusvwpdzdmtimaarwpuweifymealqobsiqexhalvcyfsiravyhnfrifirfnezmmerobeemc",
		"vukbophwywivktidxlqnhkazsdbqfkusvwpdzdmtimaarwpuweifymealqobsiqexhalvcyfsiravyhnfrifirfnezmmerobeemc",
		"vukbophwywivktidxlqnhkazsdbqfkusvwpdzdmtimaarwpuweifymealqobsiqexhalvcyfsiravyhnfrifirfnezmmerobeemc",
		"vukbophwywivktidxlqnhkazsdbqfkusvwpdzdmtimaarwpuweifymealqobsiqexhalvcyfsiravyhnfrifirfnezmmerobeemc",
		"vukbophwywivktidxlqnhkazsdbqfkusvwpdzdmtimaarwpuweifymealqobsiqexhalvcyfsiravyhnfrifirfnezmmerobeemc",
		"vukbophwywivktidxlqnhkazsdbqfkusvwpdzdmtimaarwpuweifymealqobsiqexhalvcyfsiravyhnfrifirfnezmmerobeemc",
		"vukbophwywivktidxlqnhkazsdbqfkusvwpdzdmtimaarwpuweifymealqobsiqexhalvcyfsiravyhnfrifirfnezmmerobeemc",
		"vukbophwywivktidxlqnhkazsdbqfkusvwpdzdmtimaarwpuweifymealqobsiqexhalvcyfsiravyhnfrifirfnezmmerobeemc",
		"vukbophwywivktidxlqnhkazsdbqfkusvwpdzdmtimaarwpuweifymealqobsiqexhalvcyfsiravyhnfrifirfnezmmerobeemc",
		"vukbophwywivktidxlqnhkazsdbqfkusvwpdzdmtimaarwpuweifymealqobsiqexhalvcyfsiravyhnfrifirfnezmmerobeemc",
		"vukbophwywivktidxlqnhkazsdbqfkusvwpdzdmtimaarwpuweifymealqobsiqexhalvcyfsiravyhnfrifirfnezmmerobeemc",
		"vukbophwywivktidxlqnhkazsdbqfkusvwpdzdmtimaarwpuweifymealqobsiqexhalvcyfsiravyhnfrifirfnezmmerobeemc",
		"vukbophwywivktidxlqnhkazsdbqfkusvwpdzdmtimaarwpuweifymealqobsiqexhalvcyfsiravyhnfrifirfnezmmerobeemc",
		"vukbophwywivktidxlqnhkazsdbqfkusvwpdzdmtimaarwpuweifymealqobsiqexhalvcyfsiravyhnfrifirfnezmmerobeemc",
		"vukbophwywivktidxlqnhkazsdbqfkusvwpdzdmtimaarwpuweifymealqobsiqexhalvcyfsiravyhnfrifirfnezmmerobeemc",
		"vukbophwywivktidxlqnhkazsdbqfkusvwpdzdmtimaarwpuweifymealqobsiqexhalvcyfsiravyhnfrifirfnezmmerobeemc",
		"vukbophwywivktidxlqnhkazsdbqfkusvwpdzdmtimaarwpuweifymealqobsiqexhalvcyfsiravyhnfrifirfnezmmerobeemc",
		"vukbophwywivktidxlqnhkazsdbqfkusvwpdzdmtimaarwpuweifymealqobsiqexhalvcyfsiravyhnfrifirfnezmmerobeemc",
		"vukbophwywivktidxlqnhkazsdbqfkusvwpdzdmtimaarwpuweifymealqobsiqexhalvcyfsiravyhnfrifirfnezmmerobeemc",
		"vukbophwywivktidxlqnhkazsdbqfkusvwpdzdmtimaarwpuweifymealqobsiqexhalvcyfsiravyhnfrifirfnezmmerobeemc",
		"vukbophwywivktidxlqnhkazsdbqfkusvwpdzdmtimaarwpuweifymealqobsiqexhalvcyfsiravyhnfrifirfnezmmerobeemc",
		"vukbophwywivktidxlqnhkazsdbqfkusvwpdzdmtimaarwpuweifymealqobsiqexhalvcyfsiravyhnfrifirfnezmmerobeemc",
		"vukbophwywivktidxlqnhkazsdbqfkusvwpdzdmtimaarwpuweifymealqobsiqexhalvcyfsiravyhnfrifirfnezmmerobeemc",
		"vukbophwywivktidxlqnhkazsdbqfkusvwpdzdmtimaarwpuweifymealqobsiqexhalvcyfsiravyhnfrifirfnezmmerobeemc",
		"vukbophwywivktidxlqnhkazsdbqfkusvwpdzdmtimaarwpuweifymealqobsiqexhalvcyfsiravyhnfrifirfnezmmerobeemc",
		"vukbophwywivktidxlqnhkazsdbqfkusvwpdzdmtimaarwpuweifymealqobsiqexhalvcyfsiravyhnfrifirfnezmmerobeemc",
		"vukbophwywivktidxlqnhkazsdbqfkusvwpdzdmtimaarwpuweifymealqobsiqexhalvcyfsiravyhnfrifirfnezmmerobeemc",
		"vukbophwywivktidxlqnhkazsdbqfkusvwpdzdmtimaarwpuweifymealqobsiqexhalvcyfsiravyhnfrifirfnezmmerobeemc",
		"vukbophwywivktidxlqnhkazsdbqfkusvwpdzdmtimaarwpuweifymealqobsiqexhalvcyfsiravyhnfrifirfnezmmerobeemc",
		"vukbophwywivktidxlqnhkazsdbqfkusvwpdzdmtimaarwpuweifymealqobsiqexhalvcyfsiravyhnfrifirfnezmmerobeemc",
		"vukbophwywivktidxlqnhkazsdbqfkusvwpdzdmtimaarwpuweifymealqobsiqexhalvcyfsiravyhnfrifirfnezmmerobeemc",
		"vukbophwywivktidxlqnhkazsdbqfkusvwpdzdmtimaarwpuweifymealqobsiqexhalvcyfsiravyhnfrifirfnezmmerobeemc",
		"vukbophwywivktidxlqnhkazsdbqfkusvwpdzdmtimaarwpuweifymealqobsiqexhalvcyfsiravyhnfrifirfnezmmerobeemc",
		"vukbophwywivktidxlqnhkazsdbqfkusvwpdzdmtimaarwpuweifymealqobsiqexhalvcyfsiravyhnfrifirfnezmmerobeemc",
		"vukbophwywivktidxlqnhkazsdbqfkusvwpdzdmtimaarwpuweifymealqobsiqexhalvcyfsiravyhnfrifirfnezmmerobeemc",
		"vukbophwywivktidxlqnhkazsdbqfkusvwpdzdmtimaarwpuweifymealqobsiqexhalvcyfsiravyhnfrifirfnezmmerobeemc",
		"vukbophwywivktidxlqnhkazsdbqfkusvwpdzdmtimaarwpuweifymealqobsiqexhalvcyfsiravyhnfrifirfnezmmerobeemc",
		"vukbophwywivktidxlqnhkazsdbqfkusvwpdzdmtimaarwpuweifymealqobsiqexhalvcyfsiravyhnfrifirfnezmmerobeemc",
		"vukbophwywivktidxlqnhkazsdbqfkusvwpdzdmtimaarwpuweifymealqobsiqexhalvcyfsiravyhnfrifirfnezmmerobeemc",
		"vukbophwywivktidxlqnhkazsdbqfkusvwpdzdmtimaarwpuweifymealqobsiqexhalvcyfsiravyhnfrifirfnezmmerobeemc",
		"vukbophwywivktidxlqnhkazsdbqfkusvwpdzdmtimaarwpuweifymealqobsiqexhalvcyfsiravyhnfrifirfnezmmerobeemc",
		"vukbophwywivktidxlqnhkazsdbqfkusvwpdzdmtimaarwpuweifymealqobsiqexhalvcyfsiravyhnfrifirfnezmmerobeemc",
		"vukbophwywivktidxlqnhkazsdbqfkusvwpdzdmtimaarwpuweifymealqobsiqexhalvcyfsiravyhnfrifirfnezmmerobeemc",
		"vukbophwywivktidxlqnhkazsdbqfkusvwpdzdmtimaarwpuweifymealqobsiqexhalvcyfsiravyhnfrifirfnezmmerobeemc",
		"vukbophwywivktidxlqnhkazsdbqfkusvwpdzdmtimaarwpuweifymealqobsiqexhalvcyfsiravyhnfrifirfnezmmerobeemc",
		"vukbophwywivktidxlqnhkazsdbqfkusvwpdzdmtimaarwpuweifymealqobsiqexhalvcyfsiravyhnfrifirfnezmmerobeemc",
		"vukbophwywivktidxlqnhkazsdbqfkusvwpdzdmtimaarwpuweifymealqobsiqexhalvcyfsiravyhnfrifirfnezmmerobeemc",
		"vukbophwywivktidxlqnhkazsdbqfkusvwpdzdmtimaarwpuweifymealqobsiqexhalvcyfsiravyhnfrifirfnezmmerobeemc",
		"vukbophwywivktidxlqnhkazsdbqfkusvwpdzdmtimaarwpuweifymealqobsiqexhalvcyfsiravyhnfrifirfnezmmerobeemc",
		"vukbophwywivktidxlqnhkazsdbqfkusvwpdzdmtimaarwpuweifymealqobsiqexhalvcyfsiravyhnfrifirfnezmmerobeemc",
		"vukbophwywivktidxlqnhkazsdbqfkusvwpdzdmtimaarwpuweifymealqobsiqexhalvcyfsiravyhnfrifirfnezmmerobeemc",
		"vukbophwywivktidxlqnhkazsdbqfkusvwpdzdmtimaarwpuweifymealqobsiqexhalvcyfsiravyhnfrifirfnezmmerobeemc",
		"vukbophwywivktidxlqnhkazsdbqfkusvwpdzdmtimaarwpuweifymealqobsiqexhalvcyfsiravyhnfrifirfnezmmerobeemc",
		"vukbophwywivktidxlqnhkazsdbqfkusvwpdzdmtimaarwpuweifymealqobsiqexhalvcyfsiravyhnfrifirfnezmmerobeemc",
		"vukbophwywivktidxlqnhkazsdbqfkusvwpdzdmtimaarwpuweifymealqobsiqexhalvcyfsiravyhnfrifirfnezmmerobeemc",
		"vukbophwywivktidxlqnhkazsdbqfkusvwpdzdmtimaarwpuweifymealqobsiqexhalvcyfsiravyhnfrifirfnezmmerobeemc",
		"vukbophwywivktidxlqnhkazsdbqfkusvwpdzdmtimaarwpuweifymealqobsiqexhalvcyfsiravyhnfrifirfnezmmerobeemc",
		"vukbophwywivktidxlqnhkazsdbqfkusvwpdzdmtimaarwpuweifymealqobsiqexhalvcyfsiravyhnfrifirfnezmmerobeemc",
		"vukbophwywivktidxlqnhkazsdbqfkusvwpdzdmtimaarwpuweifymealqobsiqexhalvcyfsiravyhnfrifirfnezmmerobeemc",
		"vukbophwywivktidxlqnhkazsdbqfkusvwpdzdmtimaarwpuweifymealqobsiqexhalvcyfsiravyhnfrifirfnezmmerobeemc",
		"vukbophwywivktidxlqnhkazsdbqfkusvwpdzdmtimaarwpuweifymealqobsiqexhalvcyfsiravyhnfrifirfnezmmerobeemc",
		"vukbophwywivktidxlqnhkazsdbqfkusvwpdzdmtimaarwpuweifymealqobsiqexhalvcyfsiravyhnfrifirfnezmmerobeemc",
		"vukbophwywivktidxlqnhkazsdbqfkusvwpdzdmtimaarwpuweifymealqobsiqexhalvcyfsiravyhnfrifirfnezmmerobeemc",
		"vukbophwywivktidxlqnhkazsdbqfkusvwpdzdmtimaarwpuweifymealqobsiqexhalvcyfsiravyhnfrifirfnezmmerobeemc",
		"vukbophwywivktidxlqnhkazsdbqfkusvwpdzdmtimaarwpuweifymealqobsiqexhalvcyfsiravyhnfrifirfnezmmerobeemc",
		"vukbophwywivktidxlqnhkazsdbqfkusvwpdzdmtimaarwpuweifymealqobsiqexhalvcyfsiravyhnfrifirfnezmmerobeemc",
		"vukbophwywivktidxlqnhkazsdbqfkusvwpdzdmtimaarwpuweifymealqobsiqexhalvcyfsiravyhnfrifirfnezmmerobeemc",
		"vukbophwywivktidxlqnhkazsdbqfkusvwpdzdmtimaarwpuweifymealqobsiqexhalvcyfsiravyhnfrifirfnezmmerobeemc",




	};
	int ans = getSolution(all);

	if (ans == 0)
		cout << test + " is OK" << "\n";
	else
		cout << test + " is FAIL" << "\n";
}

void Test29()
{
	string test = "Test29";
	vector<string> all = {
		"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",
		"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",
		"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",
		"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",
		"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",
		"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",
		"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",
		"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",
		"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",
		"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",
		"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",
		"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",
		"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",
		"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",
		"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",
		"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",
		"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",
		"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",
		"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",
		"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",
		"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",
		"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",
		"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",
		"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",
		"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",
		"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",
		"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",
		"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",
		"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",
		"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",
		"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",
		"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",
		"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",
		"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",
		"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",
		"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",
		"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",
		"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",
		"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",
		"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",
		"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",
		"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",
		"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",
		"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",
		"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",
		"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",
		"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",
		"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",
		"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",
		"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",
		"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",
		"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",
		"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",
		"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",
		"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",
		"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",
		"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",
		"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",
		"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",
		"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",
		"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",
		"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",
		"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",
		"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",
		"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",
		"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",
		"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",
		"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",
		"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",
		"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",
		"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",
		"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",
		"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",
		"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",
		"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",
		"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",
		"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",
		"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",
		"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",
		"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",
		"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",
		"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",
		"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",
		"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",
		"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",
		"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",
		"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",
		"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",
		"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",
		"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",
		"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",
		"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",
		"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",
		"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",
		"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",
		"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",
		"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",
		"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",
		"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",
		"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",

	};
	int ans = getSolution(all);

	if (ans == 0)
		cout << test + " is OK" << "\n";
	else
		cout << test + " is FAIL" << "\n";
}

void Test30()
{
	string test = "Test30";
	vector<string> all = {
		"bcd",
		"bbe",
		"ccf",

	};
	int ans = getSolution(all);

	if (ans == 1)
		cout << test + " is OK" << "\n";
	else
		cout << test + " is FAIL" << "\n";
}

void Test31()
{
	string test = "Test31";
	vector<string> all = {
		"bad",
		"bbe",
		"ccf",

	};
	int ans = getSolution(all);

	if (ans == 0)
		cout << test + " is OK" << "\n";
	else
		cout << test + " is FAIL" << "\n";
}

void Test32()
{
	string test = "Test32";
	vector<string> all = {
		"dad",
		"bbe",
		"ccf",

	};
	int ans = getSolution(all);

	if (ans == 1)
		cout << test + " is OK" << "\n";
	else
		cout << test + " is FAIL" << "\n";
}

void Test33()
{
	string test = "Test33";
	vector<string> all = {
		"bbe",
		"bbd",
		"cbb",

	};
	int ans = getSolution(all);

	if (ans == 1)
		cout << test + " is OK" << "\n";
	else
		cout << test + " is FAIL" << "\n";
}

void Test34()
{
	string test = "Test34";
	vector<string> all = {
		"chessbase",
		"chfsbbase",
	};
	int ans = getSolution(all);

	if (ans == 0)
		cout << test + " is OK" << "\n";
	else
		cout << test + " is FAIL" << "\n";
}

void Test35()
{
	string test = "Test35";
	vector<string> all = {
		"acc",
		"bcb",
		"bca"
	};
	int ans = getSolution(all);

	if (ans == 1)
		cout << test + " is OK" << "\n";
	else
		cout << test + " is FAIL" << "\n";
}

void Test36()
{
	string test = "Test36";
	vector<string> all = {
		"abaa",
		"baaa",
		"dzaa",
		"cyaa",
	};
	int ans = getSolution(all);

	if (ans == 2)
		cout << test + " is OK" << "\n";
	else
		cout << test + " is FAIL" << "\n";
}

void Test37()
{
	string test = "Test37";
	vector<string> all = {
		"aab",
		"baa",
		"caa",
		"daa",
		"caa",
	};
	int ans = getSolution(all);

	if (ans == 2)
		cout << test + " is OK" << "\n";
	else
		cout << test + " is FAIL" << "\n";
}
void Test38()
{
	string test = "Test38";
	vector<string> all = {
		"aab",
		"aba",
		"aac",
	};
	int ans = getSolution(all);

	if (ans == 2)
		cout << test + " is OK" << "\n";
	else
		cout << test + " is FAIL" << "\n";
}

void Test39()
{
	string test = "Test39";
	vector<string> all = {
		"gdgmmejiigzsmlarrnfsypvlbutvoxazcigpcospgztqkowfhhbnnbxxrbmwbxwkvxlxzabjjjdtbebedukdelooqlxnadjwjpnp",
		"dmtsnsbsfdzqvydxcdcnkkfcbseicxhvclsligbhqlkccwujpirymoshkqcosbtlxdypsdqkqaolrqtiibymavcwmbfryttdckhw",
		"jtdmpdljcpciuuoznvqqmafvoqychzfslmwqouuarxctunlzegxsucrwontjplkkxhgixgdbvnewphnatxnwqxqshcexpxlyjuwq",
		"vhdtvexkyhjmahejbhyfeaompjkdvxmbtdbmvrxrixhnkkjgyvfbxlviatbikfejnqhkrtafftmsgyznpsfxsnzaqdzhxridzilo",
	};
	int ans = getSolution(all);

	if (ans == 4)
		cout << test + " is OK" << "\n";
	else
		cout << test + " is FAIL" << "\n";
}

void Test40()
{
	string test = "Test40";
	vector<string> all = {
		"b",
		"a",
	};
	int ans = getSolution(all);

	if (ans == 1)
		cout << test + " is OK" << "\n";
	else
		cout << test + " is FAIL" << "\n";
}

void Test41()
{
	string test = "Test41";
	vector<string> all = {
		"abd",
		"acc",
		"bdx",
		"bcy",
	};
	int ans = getSolution(all);

	if (ans == 2)
		cout << test + " is OK" << "\n";
	else
		cout << test + " is FAIL" << "\n";
}

void Test42()
{
	string test = "Test42";
	vector<string> all = {
		"aac",
		"bab",
		"caa",
	};
	int ans = getSolution(all);

	if (ans == 0)
		cout << test + " is OK" << "\n";
	else
		cout << test + " is FAIL" << "\n";
}

void Test43()
{
	string test = "Test43";
	vector<string> all = {
		"adc",
		"bdb",
		"cda",
	};
	int ans = getSolution(all);

	if (ans == 0)
		cout << test + " is OK" << "\n";
	else
		cout << test + " is FAIL" << "\n";
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
	/*
	Test22();
	Test23();
	*/
	Test24();
	Test25();
	Test26();
	Test27();
	Test28();
	Test29();
	Test30();
	Test31();
	Test32();
	Test33();
	Test34();
	Test35();
	Test36();
	Test37();
	Test38();
	Test39();
	Test40();
	Test41();
	Test42();
	Test43();
}

int main()
{
	TestAll();

	int n, m;
	cin >> n >> m;
	vector<string> all;
	for (int i = 0; i < n; i++)
	{
		string s;
		cin >> s;
		all.push_back(s);
	}

	int ans = getSolution(all);

	cout << ans << "\n";
}