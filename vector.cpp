#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
	// 1D and 2D vector
	vector<int> v_1;
	vector<int> v_2;

	v_1 = {1,2,3,4,5,6};
	v_2 = {2,3,4,5,6,7,8};

	vector<vector<int>> v_3;
	vector<vector<int>> v_4;

	v_3 = {v_1, v_2};
	v_4 = {{1,2,3,4,5},{1,2,4,5}};

	cout<<v_1[0]<<","<<v_1[2]<<","<<v_1[3]<<endl;

	// Grid for project
	vector<vector<int>> v;
	v = {{0, 1, 0, 0, 0, 0},
		{0, 1, 0, 0, 0, 0},
		{0, 1, 0, 0, 0, 0},
		{0, 1, 0, 0, 0, 0},
		{0, 0, 0, 0, 1, 0}};

	cout<<"Everything worked!"<<endl;
	return 0;
}