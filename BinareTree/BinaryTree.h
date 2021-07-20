#pragma once
#include<iostream>
using namespace std;

struct node
{
	int key;
	//string data;
	node* left = NULL;
	node* right = NULL;
};
class BinaryTree
{
private:
	node* root = NULL;

	void _PreOder(node*);
	void _InOrder(node*);
	//void _PostOrder(node*);
	void _Add(node*&, int);

public:
	BinaryTree(node* = NULL);
	void AddRight(int);
	void AddLeft(int);
	void Add(int value) { this->_Add(this->root, value); }
	void InOrder() { this->_InOrder(this->root); }
	//void PostOrder() { this->_PostOrder(this->root); }
	void PreOrder() { this->_PreOder(this->root); }

	void Clear();
	~BinaryTree() { this->Clear(); }



};
