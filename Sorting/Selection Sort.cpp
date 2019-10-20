#include <iostream>

using namespace std;

int main(void)
{
	int arr[6] = { 5, 2, 4, 6, 1, 3 };

	for (int i = 0; i < 6 - 1; i++)
	{
		// 가장 작은 인덱스를 찾음
		int min = i;

		// 정렬 후 비교하는 인덱스 감소
		for (int j = i + 1; j < 6; j++)
		{
			if (arr[min] > arr[j]) min = j;
		}

		int temp;
		temp = arr[min];
		arr[min] = arr[i];
		arr[i] = temp;
	}

	for (int i = 0; i < 6; i++)
	{
		cout << arr[i] << " ";
	}

	cout << endl;
	return 0;
}

// O(n^2)
