#include <iostream>
#include <vector>
using namespace std;

void findmin_words(vector<string>& data)
{
	int min_len = data[0].size();

	for (string var : data)
	{
		if (var.length() < min_len) 
		{
			min_len = var.length();
		}
	}

	for (string var : data)
	{
		if (var.length() == min_len) 
		{
			cout << var + " ";
		}

	}

}


int main(int argc, char** argv) {
	setlocale(LC_ALL, "ru");

	vector<string> data {"kol", "pino", "skot", "ren", "ko", "pino777", "ot", "rn" };

	findmin_words(data);

	return 0;
}