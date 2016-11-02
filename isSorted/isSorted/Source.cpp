#include <iostream>
using namespace std;

template <typename t>
bool isSorted(const t list[], int size)
{
	bool isFalse = true;
	for (int i = 0; i < size-1; i++)
	{
		//cout << "ran\n";
		int j = i + 1;
		if (list[i] > list[j])
		{
			isFalse = false;
			//cout << "kaboom\n";
		}
	}
	return isFalse;
}

int main() {
	//double list[] = { 3,6.5,2,8,5,9,56 };
	//int list[] = { 1,2,3,4,6,5,7};
	string list[] = { "a", "b", "c", "d", "e", "f", "g" };

	int size = 7;
	cout << isSorted(list, size) << endl;



	return 0;
}