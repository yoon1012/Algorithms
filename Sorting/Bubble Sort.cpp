#include <iostream>
#include <array>

using namespace std;

void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

void printArray(array<int, 6> arr)
{
	for (int i = 0; i < arr.size(); i++)
		cout << arr[i] << " ";
	cout << endl;
}

// Best	   O(n) when elements are mostly sorted
// Average O(n^2)
// Worst   O(n^2)

void bubbleSort(array<int, 6>& arr)
{
	for (int i = 0; i < arr.size() - 1; i++)
	{
		for (int j = 0; j < arr.size() - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
				swap(arr[j], arr[j + 1]);
		}
	}
}

int main(void)
{
	array<int, 6> arr = { 5, 2, 4, 6, 1, 3 };

	bubbleSort(arr);
	printArray(arr);

	return 0;
}
