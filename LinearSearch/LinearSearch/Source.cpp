#include <iostream>
using namespace std;

template <typename t>
int linearSearch(const t list[], t key, t arraySize)
{
	for (int i = 0; i < arraySize; i++)
	{
		if (key== list[i]) {
			return i;
		}
	}
	return -1;
}

int main()
{
	float list[] =  {1, 4, 4, 2, 5, -3, 6, 2};
	float x = 5;
	float y = 3;
	int i = linearSearch(list, x, y);
	int j = linearSearch(list, -x, y);
	int k = linearSearch(list, x, -y);

	cout << i << endl << j << endl << k << endl;

	return 0;
}