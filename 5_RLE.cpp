#include <iostream>
#include <vector>
#include <set>
#include <string>
using namespace std;
string  find_pair(vector<int>& nums, const int x)
{
	set<int> prevnums;
	for (int i = 0; i < nums.size(); ++i)
	{
		if (prevnums.find(x - nums[i]) != prevnums.end())
		{
			return to_string(nums[i]) + " ," + to_string(x - nums[i]);
		}
		prevnums.insert(nums[i]);
	}



	return to_string(0) + " ," + to_string(0);
}




int main(int argc, char** argv) {
	setlocale(LC_ALL, "ru");

	vector<int>  nums {1, 3, 5, 15, 8, 2};
	int x = 10;

	cout << find_pair(nums, x);


	return 0;
}