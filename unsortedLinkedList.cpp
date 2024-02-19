#include <iostream>
#include "unsortedLinkedList.h"
using namespace std;

int main() {
	cout << "Hello unsortedLinkedList" << endl;

	LinkedList<int> ll;
	ll.PrintList();
	ll.PrintAddresses();

	ll.InsertItem(3);
	ll.PrintList();
	ll.PrintAddresses();
	
	ll.InsertItem(5);
	ll.InsertItem(9);
	ll.InsertItem(7);

	ll.PrintList();
	ll.PrintAddresses();

	ll.DeleteItem(5);
	ll.PrintList();
	
	ll.DeleteItem(5);
	ll.PrintList();

	LinkedList<int> list2;
	list2.InsertItem(2);
	list2.InsertItem(4);
	list2.InsertItem(6);

	ll.Union(list2);
	ll.PrintList();

	return 0;
}
