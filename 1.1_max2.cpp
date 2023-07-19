#include <iostream>
#include <set>
using namespace std;

int max(set<int>::const_iterator& it)
{
	it--;

	if (*it > 1) {
		return *it;
	}
	else
	{
		return -1;
	}

}


int main(int argc, char** argv) {


	set<int> mySet = { 1, 2, 1, 2, 3, 5, 1 };
	auto it = mySet.end();
	cout << "max1: " << max(it) << "\n";
	cout << "max2: " << max(it) << "\n";

	return 0;
}