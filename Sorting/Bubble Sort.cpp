#include <iostream>

using namespace std;

int main(void)
{
	int arr[6] = { 5, 2, 4, 6, 1, 3 };

	// 처음부터 n - 1까지
	for (int i = 0; i < 6 - 1; i++)
	{
        // 가장 큰 수를 맨 뒤로 보내면 정렬해야 할 개수가 하나씩 줄어듬
		for (int j = 0; j < 6 - 1 - i ; j++)
		{
			if (arr[j] > arr[j+1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		} 
	}

	for (int i = 0; i < 6; i++)
	{
		cout << arr[i] << " ";
	}

	cout << endl;
	return 0;
}

// 거의 정렬된 경우 O(n), 그렇지 않으면 O(n^2)
