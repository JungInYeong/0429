﻿// 실습8 vector 중복삭제

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void printV(vector<int>& myVector) {
	cout << " { ";
	for (auto it = myVector.begin(); it != myVector.end(); ++ it) {
		cout << *it << " ";
	}
	cout << " }" << endl;
}

int main()
{
	vector<int>myVector = { 10,20,30,20,40,10,50 };

	sort(myVector.begin(), myVector.end());	
	
	myVector.erase(unique(myVector.begin(), myVector.end()), myVector.end()); //unique는 쓰레기가 남음 그래서 미리 sort(정렬)한 후 unique
	
	
	printV(myVector);
	
	return 0;
}