#include <iostream>
#include <vector>
using namespace std;

int isleflood(vector<int> data)
{
	int ans = 0;
	int max_pos = 0;

	for (int i = 1; i < data.size(); ++i)
	{
		if (data[i] > data[max_pos])
		{
			max_pos = i;
		}
	}

	int nown = 0;
	for (int i = 0; i < max_pos; ++i)
	{
		if (data[i] > data[nown])
		{
			nown = i;
		}
		else ans += (data[nown] - data[i]);

	}

	int now_right = data.size() - 1;
	for (int i = now_right; i > max_pos; --i)
	{
		if (data[i] > data[now_right])
		{
			now_right = i;
		}
		else ans += (data[now_right] - data[i]);

	}



	return ans;
}




int main(int argc, char** argv) {
	setlocale(LC_ALL, "ru");

	vector<int> data {1, 4, 2, 2, 5, 4, 4, 6, 1, 1, 1, 4, 2, 1, 3 };
	cout << isleflood(data);




	return 0;
}