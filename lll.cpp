//Linearly Linked List practice
//Recursion based practice

#include <iostream>

using namespace std;


class Node
{
	public:
		int data;
		Node* next;
};
void printList(Node* n)
{
//traverse list and print out node data
	while(n != NULL)
	{
		cout << " Node data: " << n->data << endl;
		n = n->next;
	}
}
int main()
{
//create a linked list with three nodes
	Node* head = NULL;
	Node* second = NULL;
	Node* third = NULL;

	//allocate 3 node in the heap
	head = new Node();
	second = new Node();
	third = new Node();

	//assign data to nodes
	head->data = 1;
	head->next = second; //linking first node to second node

	//second node assignments
	second->data = 2;
	second->next = third;

	//third node
	third->data = 3;
	third->next = NULL; //no following node

//traverse and print list using function call
	printList(head);

	return 0;
}
