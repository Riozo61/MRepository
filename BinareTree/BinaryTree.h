#pragma once
#include<iostream>
using namespace std;

struct node
{
	int data;
	node* left = NULL;
	node* right = NULL;
};
class BinaryTree
{
private:
	node* root;
public:
	BinaryTree(node* = NULL);
	void AddRight(int);
	void AddLeft(int);



};
