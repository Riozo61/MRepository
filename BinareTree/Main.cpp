#include <iostream>
#include"BinaryTree.h"

int main()
{
    BinaryTree tree;
    tree.Add(8);
    tree.Add(3);
    tree.Add(10);
    tree.Add(6);
    tree.Add(8);
    tree.InOrder();

}

