#include <iostream>

using namespace std;

int main(void)
{
	int arr[6] = { 5, 2, 4, 6, 1, 3 };

	for (int j = 1; j < 6; j++)
	{
		int key = arr[j];

		// 정렬이 되어있지 않으면 뒤에서부터 한 칸씩 이동하는 과정
		int i = j - 1;

		while (i >= 0 && arr[i] > key)
		{
			arr[i + 1] = arr[i];
			i--;
		}

		arr[i + 1] = key;
	}

	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << " ";
	}

	cout << endl;
	return 0;
}

// 최선의 경우
// 비교만 하고 끝나므로 O(n)

// 최악의 경우
// 역순으로 정렬된 배열이 들어오면 모든 루프를 다 돌아야하므로 O(n^2)
