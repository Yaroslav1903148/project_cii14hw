#pragma once
#include <iostream>
#include <vector>
#include <string>
using std::cout;
using std::endl;
using std::vector;
using std::string;


namespace Queue {
	template <typename T>
	class MyQueue
	{
	private:
		vector<T*> arr;
	protected:
		string info;
	public:
		MyQueue() {
			info = "undf";
		}
		MyQueue(string info) {
			this->info = info;
		}
		~MyQueue() {
			while (!isEmpty()) {
				pop();
			}
		}

		void setInfo(string info) {
			this->info = info;
		}
		string getInfo() {
			return info;
		}

		bool isEmpty()const {
			return arr.empty();
		}
		T* first()const {
			if (isEmpty()) {

				cout << "Is empty!\n";
				
			}
			return arr.front();
		}
		void push(T* obj) {
			arr.push_back(obj);
		}
		void pop() {
			if (isEmpty()) {
				cout << "Is empty!\n";
			}
			delete arr.front();
			arr.erase(arr.begin());
		}
		void showInfo()const {
			for (auto item : arr) {
				cout << *item << " " << endl;
			}
		}
		
		
	};
}

