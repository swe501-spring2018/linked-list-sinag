# linked_list

Encapsulate the following code written in class as a separate object like

struct List{
  Node* head; 
  .....
}

Add the following functions:

. printing 
. *= double
. append to list


~~~
List lst;
lst.append(10);
lst*=7;
cout << lst,
~~~





Code written in class
~~~

#include <iostream>
#include <cstdlib>

using namespace std;

struct Node {
	int data;
	Node* next;
	Node(int d, Node* n = nullptr) {
		data = d;
		next = n;
	}

};


int main() {
	int N = 10;
	double d;
	Node* head = nullptr;
	Node* last = nullptr;

	for (int i=0; i<N; i++) {
		d = rand()%30;
		if (head == nullptr) {
			head = new Node(d, nullptr);
			last = head;
		}
		else {
			last->next = new Node(d, nullptr);
			last = last->next;
		}
	}

	for (Node* p=head; p != nullptr; p = p->next )
		cout << p->data << endl;

	return 0;
}

~~~


