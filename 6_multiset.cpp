﻿#include <iostream>
#include <vector>
#include <string>
using namespace std;

void add(vector<vector<int> >& myset, const int SIZE, int x)
{
	myset[x % SIZE].push_back(x);
}

bool find(vector<vector<int> >& myset, const int SIZE, int x)
{
	for (int var : myset[x % SIZE])
	{
		if (var == x)
		{
			return true;
		}
	}
	return false;
}


bool remove(vector<vector<int> >& myset, const int SIZE, int x)
{
	for (auto it = myset[x % SIZE].begin(); it < myset[x % SIZE].end(); ++it)
	{
		if (*it == x)
		{
			myset[x % SIZE].erase(it);
			return true;
		}
		else
		{
			return false;
		}
	}
}


int main(int argc, char** argv) {
	setlocale(LC_ALL, "ru");
	int SIZE = 10;
	vector<vector<int> > myset(SIZE);
	add(myset, SIZE, 23);
	add(myset, SIZE, 213);
	add(myset, SIZE, 3);

	remove(myset, SIZE, 23);

	cout << "Find 3: " << find(myset, SIZE, 3) << "\n";
	cout << "Find 23: " << find(myset, SIZE, 23) << "\n";

	for (int i = 0; i < SIZE; ++i)
	{
		for (int var : myset[i])
		{
			cout << var << " ";
		}
		cout << "\n";
	}

	return 0;
}