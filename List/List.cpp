#include <iostream>


using namespace std;

template<typename T>
struct Node
{
	T data;
	Node<T>* next = NULL;
	Node<T>* prev = NULL;
};


template<typename T>
void ViewForward(Node<T>* head)
{
	Node<int>* help = head;
	while (help != NULL)
	{
		cout << help->data << "\t";
		help = help->next;
	}
}

template<typename T>
void AddNodeEnd(Node<T>*& head, Node<T>*& tail, T data)
{
	Node<T>* newNode = new Node<T>;
	newNode->data = data;
	if (head == NULL)
	{
		head = new Node <T>;
		tail = new Node <T>;
		return;
	}
	
	newNode->prev = tail;
	tail->next = newNode;
	tail = newNode;
}
int main()
{
	Node<int>* head;
	Node<int>* tail;
	for (int i = 0; i < 3; i++)
		AddNodeEnd(head, tail, i);

	ViewForward(head);


	

}
