#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
	vector<vector<char>> v;
	v = v = {{0, 1, 0, 0, 0, 0},
		{0, 1, 0, 0, 0, 0},
		{0, 1, 0, 0, 0, 0},
		{0, 1, 0, 0, 0, 0},
		{0, 0, 0, 0, 1, 0}};

	cout << "Everything worked" << endl;
	cout << v.size() <<endl;

	for (int i = 0; i < v.size(); i++)
	{
		for (int j = 0; j < v[1].size(); j++)
		{
			cout << v[i][j];
		}
		cout << "\n";
	}
	return 0;
}