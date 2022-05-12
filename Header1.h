#pragma once
namespace q1 {
	struct BinaryTree {
	private:
		struct Node {
			Node* left = nullptr;
			Node* right = nullptr;
			Node(Node* left, Node* right);
		};
		Node* root = nullptr;
	public:
		Node* treeret(Node* root);
		void functionate(Node* node);
	};
	
}