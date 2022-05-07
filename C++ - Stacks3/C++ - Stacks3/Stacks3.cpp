#include <iostream>
#include <stack>
#include <cstdlib>

using namespace std;

int main() {
	stack<int> st1;
	stack <int> st2;

	//emplace constructs and inserts a new element on top of the stack
	st1.emplace(25);
	st1.emplace(50);
	st1.emplace(100);

	cout << "st1 = ";
	while (!st1.empty()) {
		cout << st1.top() << " ";
		st1.pop();
	}

	st2.emplace(125);
	st2.emplace(150);
	st2.emplace(175);

	cout << endl << "st2 = ";
	while (!st2.empty()) {
		cout << st2.top() << " ";
		st2.pop();
	}

	//swap changes one stacks elements with anothers
	st1.emplace(200);
	st1.emplace(225);
	st1.emplace(250);
	st2.emplace(300);
	st2.emplace(325);
	st2.emplace(350);
	st1.swap(st2);

	cout << "\nst1 = ";
	while (!st1.empty()) {
		cout << st1.top() << " ";
		st1.pop();
	}

	cout << endl << "st2 = ";
	while (!st2.empty()) {
		cout << st2.top() << " ";
		st2.pop();
	}

	//output:
		/*st1 = 100 50 25
		st2 = 175 150 125
		st1 = 350 325 300
		st2 = 250 225 200*/

	return 0;
}
