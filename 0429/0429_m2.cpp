// 실습8 vector 중복삭제

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void printV(vector<int>& myVector) {
	cout << " ";
	for (auto it = myVector.begin(); it != myVector.end(); ++ it) {
		cout << *it << " ";
	}
	cout << endl;
}

int main()
{
	vector<int>myVector = { 10,20,30,20,40,10,50 };

	sort(myVector.begin(), myVector.end());	
	
	myVector.erase(unique(myVector.begin(), myVector.end()), myVector.end());
		
	printV(myVector);

	return 0;
}