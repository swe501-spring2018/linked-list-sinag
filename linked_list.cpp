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

struct List {
	Node* head;
	Node* last;
	List(){
		head = nullptr;
		last = nullptr;
	}
	void Append(int data){
		if (head == nullptr) {
			head = new Node(data, nullptr);
			last = head;
		}
		else {
			last->next = new Node(data, nullptr);
			last = last->next;
		}
	}
	void operator*=(int b){
		for (Node* p=head; p != nullptr; p = p->next )
			p->data = p->data*b;
	}
};

ostream& operator<<(ostream& os, List& l){
	for (Node* p=l.head; p != nullptr; p = p->next ){
		os << p->data << " ";
	}
	return os;
}

int main() {
	int N = 10;
	int d;
	List lst;

	for (int i=0; i<N; i++) {
		d = rand()%30;
		lst.Append(d);
	}

	cout << lst << endl;
	lst*=2;
	cout << lst << endl;

	return 0;
}
