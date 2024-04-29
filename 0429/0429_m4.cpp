//실습1 list사용해보기

#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

void printmy(list<int> myList)
{
	cout << "{ ";
	for (auto iter = myList.begin(); iter != myList.end(); iter++)
	{
		cout << *iter << " ";
	}
	cout << "}";
}

int main()
{
	list<int> myList = { 5,4,3,4,2,1,1 };

	int count = 0;
	for (auto iter = myList.begin(); iter != myList.end(); iter++)
	{
		if (*iter == 4)
		{
			count++;
		}
	}
	cout << "4는 " << count << "개 입니다.";

	cout << endl;
	
	myList.sort();
	printmy(myList);

	cout << endl;

	myList.unique();
	printmy(myList);

	cout << endl;

	list<int>List = { 6,7 };
	myList.splice(myList.end(), List);
	printmy(myList);

	cout << endl;

	list<int>List2 = { 0 };
	myList.splice(myList.begin(), List2);
	printmy(myList);


	return 0;
}