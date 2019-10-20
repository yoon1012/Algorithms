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

// Best	   O(n) when elements are sorted
// Average O(n^2)
// Worst   O(n^2)

void insertionSort(array<int, 6>& arr)
{
	for (int i = 1; i < arr.size(); i++)
	{
		int key = arr[i];
		int j = i - 1;

		while (j >= 0 && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			j--;
		}

		arr[j + 1] = key;
	}
}

int main(void)
{
	array<int, 6> arr = { 5, 2, 4, 6, 1, 3 };

	insertionSort(arr);
	printArray(arr);

	return 0;
}
