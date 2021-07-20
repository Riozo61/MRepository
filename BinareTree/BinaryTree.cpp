#include"BinaryTree.h"

void BinaryTree::_PreOder(node* current)
{
	if (current == NULL)
		return;
	cout << current->key << "\t";
	this->_PreOder(current->left);
	this->_PreOder(current->right);
}

void BinaryTree::_InOrder(node* current)
{
	if (current == NULL)
		return;
	this->_InOrder(current->left);
	cout << current->key << "\t";
	this->_InOrder(current->right);

}

//void BinaryTree::_PostOrder(node* current)
//{
//	if (current == NULL)
//		return;
//	this->_PostOrder(current->right);
//
//}

void BinaryTree::_Add(node*& current, int data)
{
	node* newNode = new node{ data, NULL, NULL };
	if (current == NULL)
	{
		current = newNode;
		return;
	}
	else if (data < current->key)
		_Add(current->left, data);
	else
		_Add(current->right, data);
}

BinaryTree::BinaryTree(node* _root)
{
	this->root = _root;
}

void BinaryTree::AddRight(int value)
{
	node* newNode = new node{ value,NULL,NULL };
	if (this->root == NULL)
	{
		this->root = newNode;
		return;
	}
	node* help = this->root;
	while (help->right != NULL)
		help = help->right;

	help->right = newNode;

}

void BinaryTree::AddLeft(int value)
{
	node* newNode = new node{ value,NULL,NULL };
	if (this->root == NULL)
	{
		this->root = newNode;
		return;
	}
	node* help = this->root;
	while (help->left != NULL)
		help = help->left;

	help->left = newNode;
}

void BinaryTree::Clear()
{
	

}

