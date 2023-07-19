void findmax2(vector<int> data)
{
	int max1, max2;
	max1 = max(data[0], data[1]);
	max2 = min(data[0], data[1]);


	for (int var : data)
	{
		if (var > max1)
		{
			max2 = max1;
			max1 = var;
		}
		else if (var > max2)
		{
			max2 = var;
		}
	}

	cout << "max1: " << max1 << endl;
	cout << "max2: " << max2 << endl;
}


int main(int argc, char** argv) {
	setlocale(LC_ALL, "ru");

	vector<int> data = { 11, 0, 1, 66, 3, 5, -1,11, 0, 1, 100, 32, 555, 87 };
	findmax2(data);



	return 0;
}