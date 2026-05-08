#include <iostream>
using namespace std;


class node {

public:
	int data;
	node* next;
	node* prev;

};

class DoubledLinkedList {

	node* head;
public:
	DoubledLinkedList() { head = nullptr; };

	void createNode(int value) {

		node* curr;
		node* temp = new node();

		temp->data = value;
		temp->next = NULL;

		if (head == NULL) {

			temp->prev = NULL;
			head = temp;
			cout << "Element Inserted" << endl;
		}
		else {

			curr = head;
			while (curr->next != NULL) {
				curr = curr->next;
			}

			curr->next = temp;
			temp->prev = curr;
			cout << "Element Inserted" << endl;
		}


	}

	void insertAtStart(int value) {

		node* temp = new node();

		if (head == NULL) {
			cout << "Create a list first." << endl;
			return;
		}
		else {

			temp->data = value;
			temp->prev = NULL;
			temp->next = head;
			head->prev = temp;
			head = temp;
			cout << "Element Inserted" << endl;


		}

	
	}

	void insertAtEnd(int value) {

		if (head == NULL) {
			cout << "List is empty.";
			return;
		}
		else {

			node* curr;
			node* temp=new node();
			curr = head;
			while (curr->next != NULL) {
				curr = curr->next;
			}

			curr->next = temp;
			temp->prev = curr;
			temp->next = NULL;
			temp->data = value;

			cout << "Element Inserted" << endl;

		}
	}

	void insertAtPosition(int value, int pos) {
		
		if (head == NULL) {
			cout << "First Create the list." << endl;
			return;
		}

		if (pos == 1) {
			insertAtStart(value); // Assuming you have this function
			return;
		}

		node* current = head;
		
		for (int i = 1; i < pos ; i++) {
			current = current->next;
		}

		if (current == NULL) {
			cout << "Position out of range." << endl;
			return;
		}

		
		node* tmp = new node;
		tmp->data = value;

		tmp->next = current->next;
		tmp->prev = current;

		if (current->next != NULL) {
			// If we are NOT at the very end, update the next node's back pointer
			current->next->prev = tmp;
		}
		current->next = tmp;

		cout << "Element Inserted" << endl;
	}

	void TraverseForward() {
		node* temp;
		temp = head;
		while (temp != NULL) {
			cout << temp->data << " -> ";
			temp = temp->next;
		}
	}

	void TraverseBackward() {

		node* temp;
		temp = head;
		while (temp->next != NULL) {
			temp = temp->next;
		}

		// Now, walk backward to the start

		while (temp != NULL) {
			cout << temp->data << " -> ";
			temp = temp->prev;
		}

	}
};

int main() {

	DoubledLinkedList D1;

	D1.createNode(10);
	D1.createNode(20);
	D1.createNode(30);
	D1.insertAtStart(40);
	D1.insertAtEnd(25);
	D1.insertAtPosition(70, 3);
	cout << "Traverse Forward" << endl;
	D1.TraverseForward();
	cout << "\nTraverse Backward" << endl;	
	D1.TraverseBackward();
}












