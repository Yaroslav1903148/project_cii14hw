#include <iostream>
#include "MyQueue.h"
using namespace std;
int main()
{
	/*Queue::MyQueue<int> arr("Info");

	arr.push(new int(5));
	arr.push(new int(10));
	arr.push(new int(15));
	arr.push(new int(20));
	arr.showInfo();
	cout << "\n=======================================================\n";
	arr.first();
	arr.pop();
	arr.showInfo();
	cout << "\n=======================================================\n";
	arr.pop();
	arr.showInfo();*/

	Queue::MyQueue<string> arr("Info");

	arr.push(new string ("one"));
	arr.push(new string ("two"));
	arr.push(new string ("three"));
	arr.push(new string ("four"));
	arr.push(new string ("five"));
	arr.push(new string ("six"));
	arr.showInfo();
	cout << "\n=======================================================\n";
	arr.pop();
	arr.pop();
	arr.push(new string("seven"));
	arr.showInfo();
	cout << "\n=======================================================\n";
	int count = 0;
	
	while (!arr.isEmpty()) {
		string* s = arr.first();

		auto t = s->begin();
		if (t != s->end() && (*t == 'f' || *t == 't')) {
			count++;
		}
		arr.pop();
		
	}
	cout << "Count: " << count;

}

