// �ǽ�8 2���� �迭 (�����Ҵ�����)

#include <iostream>
using namespace std;

int main()
{

	int col, row;

	cout << "��� ���� ���� �Է��ϼ��� : ";
	cin >> col >> row;

	int** arr = new int* [col];

	for (int i = 0; i < col ; i++)
	{
		arr[i] = new int[row];
	}
	cout << "��� ���Ҹ� �Է��ϼ��� : " << endl;

	for (int i = 0; i < col; i++)
	{
		for (int j = 0; j < row; j++)
		{		
			cin >> arr[i][j];
		}
	}
	cout << "�� ���� �� : " << endl;

	for (int i = 0; i < col; i++)
	{
		int colsum = 0;

		cout << "�� " << i + 1 << ": ";
		for (int j = 0; j < row; j++)
		{
			colsum += arr[i][j];
		}
		cout << colsum << endl;
	}
	cout << endl;

	cout << "�� ���� �� : " << endl;
	for (int i = 0; i < col; i++)
	{
		int rowsum = 0;

		cout << "�� " << i + 1 << ": ";
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