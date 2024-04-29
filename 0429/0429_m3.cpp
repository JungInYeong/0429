// 실습8 2차원 배열 (동적할당으로)

#include <iostream>
using namespace std;

int main()
{

	int col, row;

	cout << "행과 열의 수를 입력하세요 : ";
	cin >> col >> row;

	int** arr = new int* [col];

	for (int i = 0; i < col ; i++)
	{
		arr[i] = new int[row];
	}
	cout << "행렬 원소를 입력하세요 : " << endl;

	for (int i = 0; i < col; i++)
	{
		for (int j = 0; j < row; j++)
		{		
			cin >> arr[i][j];
		}
	}
	cout << "각 행의 합 : " << endl;

	for (int i = 0; i < col; i++)
	{
		int colsum = 0;

		cout << "행 " << i + 1 << ": ";
		for (int j = 0; j < row; j++)
		{
			colsum += arr[i][j];
		}
		cout << colsum << endl;
	}
	cout << endl;

	cout << "각 열의 합 : " << endl;
	for (int i = 0; i < col; i++)
	{
		int rowsum = 0;

		cout << "열 " << i + 1 << ": ";
		for (int j = 0; j < row; j++)
		{
			rowsum += arr[j][i];
		}
		cout << rowsum << endl;
	}
	for (int i = 0; i < col; i++)
	{
		delete[] arr[i];
	}
	delete[]arr;

	return 0;
}