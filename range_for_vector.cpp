#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
	vector<int> v;
	v = {11,22,33,43,53};

	for (int i : v)
	{
		cout << i << "\n";
	}
	return 0;
}