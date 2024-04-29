// 실습2
// 1. 이름이 test_vec1이고 크기가 1인 정수형 벡터 생성
// 2. test_vect1에 push_back()을 1억회 수행하여 1부터 1억까지 값을 추가, 소요신을 ms단위로 측정 후 출력
 // 3. 이름이 test_vec2이고 크기가 1인 정수형 벡터 생성
 // 4. reserve()로 1억개 만큼의 공간을 예약
 // 5. test_vec2에 push)back()을 1억회 수행하여 1부터 1억까지 값을 추가하고, 소요시간을 ms단위로 측정 후 출력

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

	cout << "첫 번째 수행 시간 : " << result1 << "ms" << endl;


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

	cout << "두 번째 수행 시간 : " << result2 << "ms" << endl;



	return 0;
}