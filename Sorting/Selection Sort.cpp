#include <iostream>
#include <array>

using namespace std;

void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

// Best	   O(n^2)
// Average O(n^2)
// Worst   O(n^2)

void printArray(array<int, 6> arr)
{
	for (int i = 0; i < arr.size(); i++)
		cout << arr[i] << " ";
	cout << endl;
}

void selectionSort(array<int, 6>& arr)
{
	for (int i = 0; i < arr.size() - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1 ; j < arr.size() ; j++)
        {
            if (arr[minIndex] > arr[j])
            {
                minIndex = j;
            }
        }

        if (minIndex != i) swap(arr[i], arr[minIndex]);
    }
}

int main(void)
{
	array<int, 6> arr = { 5, 2, 4, 6, 1, 3 };

	selectionSort(arr);
	printArray(arr);

	return 0;
}
