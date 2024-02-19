#include<iostream>

template <typename T>
class LinkedList {
	private:
		int MAXITEMS = 3;
		int length = 0;
		class Node {
			public:
				T data;
				Node* next;

				Node(T d, Node* n) {
					data = d;
					next = n;
				}
		};

		Node* head = nullptr;
		Node* position = head;
	public:
		Node* Search(T item){
			Node* curr = head;

			while (curr != nullptr) {
				if (curr->data == item) {
					position = curr;
				}
				else {
					curr = curr->next;
				}
			}
			return nullptr;
		}

		void InsertItem(T item) {
			if (length < MAXITEMS){
				Node* curr = head;
				if (head == nullptr) {
					head = new Node(item, nullptr);
				}
				else {
					while (curr->next != nullptr){
						curr = curr->next;
					}
					curr->next = new Node (item, nullptr);
				}
				length ++;
			}
			else {
				std::cout << "list is full" << std::endl;
			}
		}

		void DeleteItem(T item) {
			Node* curr = head;
			if (curr->data == item) {
				Node* tmp = curr;
				head = curr->next;
				length--;
				delete tmp;
			}
			while (curr->next != nullptr) {
				if (curr->next->data == item){
					Node* tmp = curr->next;
					curr->next = curr->next->next;
					length--;
					delete tmp;
				}
				curr = curr->next;
			}
		}

		void MakeEmpty() {
			while (head != nullptr) {
				Node* tmp = head;
				head = head->next;
				delete tmp;
			}
		}

		bool IsFull() {
			if (length < MAXITEMS) {
				return false;
			} else{
				return true;
			}
		}

		void ResetList() {
			position = head;
		}

		void ComparedTo(Node* n) {
			
		}

		int GetLength() {
			int length = 0;
			return length;
		}

		void Union(LinkedList<T> otherList) {
			Node* curr = head;
			while (curr->next != nullptr) {
				curr = curr->next;
			}
			curr->next = otherList.head;
		}

		//Function to print out contents of the list
		void PrintList(){
			Node* curr = head;
			if (head != nullptr){
				std::cout  << "List data: (" << curr->data;
				while (curr->next != nullptr){
					std::cout << ", " << curr->next->data;
					curr = curr->next;
				}
				std::cout << ")" << std::endl;
			}
			else {
				std::cout << "The list is empty" << std::endl;
			}
		}

		void PrintAddresses() {
			Node* curr = head;
			if (head != nullptr){
				std::cout << "List addresses: (" << curr;
				while (curr->next != nullptr){
					std::cout << ", " << curr->next;
					curr = curr->next;
				}
				std::cout << ")" << std::endl;
			}
			else {
				std::cout << nullptr << std::endl;
			}

		}
};
