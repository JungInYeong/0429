// �ǽ�2
// 1. �̸��� test_vec1�̰� ũ�Ⱑ 1�� ������ ���� ����
// 2. test_vect1�� push_back()�� 1��ȸ �����Ͽ� 1���� 1����� ���� �߰�, �ҿ���� ms������ ���� �� ���
 // 3. �̸��� test_vec2�̰� ũ�Ⱑ 1�� ������ ���� ����
 // 4. reserve()�� 1�ﰳ ��ŭ�� ������ ����
 // 5. test_vec2�� push)back()�� 1��ȸ �����Ͽ� 1���� 1����� ���� �߰��ϰ�, �ҿ�ð��� ms������ ���� �� ���

#include <iostream>
#include <time.h>
#include <vector>

using namespace std;

int main()
{
	vector<int>test_vec1(1);

	clock_t start1, end1;
	double result1;

	start1 = clock();

	for (int i = 0; i < 100000000; i++)
	{
		test_vec1.push_back(i);
	}
	end1 = clock();
	result1 = (double)(end1 - start1);

	cout << "ù ��° ���� �ð� : " << result1 << "ms" << endl;


	vector<int>test_vec2(1);

	clock_t start2, end2;
	double result2;

	start2 = clock();

	for (int i = 0; i < 100000000; i++)
	{
		test_vec2.reserve(100000000);
		test_vec2.push_back(i);
	}
	end2 = clock();
	result2 = (double)(end2 - start2);

	cout << "�� ��° ���� �ð� : " << result2 << "ms" << endl;



	return 0;
}