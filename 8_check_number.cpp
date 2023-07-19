#include <iostream>
#include <vector>
using namespace std;

vector<int> count_digits(int num)
{
	vector<int> count(10);
	int lastdigit = 0;
	while (num > 0)
	{
		lastdigit = num % 10;
		count[lastdigit] += 1;
		num /= 10;
	}

	return count;
}


bool check_nums(int x, int y)
{
	vector<int> digitsx = count_digits(x);
	vector<int> digitsy = count_digits(y);

	for (int i = 0; i < 10; ++i)
	{
		if (digitsx[i] != digitsy[i])
		{
			return false;
		}
	}
	return true;
}



int main(int argc, char** argv) {
	setlocale(LC_ALL, "ru");

	int x = 651, y = 561;
	cout << check_nums(x, y);

	return 0;
}