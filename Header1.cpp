#include "Header1.h"
#include <iostream>


q1::BinaryTree::Node* q1::BinaryTree::treeret(Node* root)
{
	functionate(root);
	return root;
}

void q1::BinaryTree::functionate(Node* node)
{
	if (node == nullptr)
		return;
	
	std::swap(node->left,node->right);
	functionate(node->left);
	functionate(node->right);

}
