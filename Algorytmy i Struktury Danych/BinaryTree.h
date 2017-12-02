#pragma once
namespace DrzewoBinarne
{

struct Node
{
	Node* left; 
	Node* right;
	int value;
	Node(int val) { value = val; right = nullptr; left = nullptr; }
};

class BinaryTree
{
public:
	Node* root;
	BinaryTree();

	void PrintAllBFS();
	void PrintAllDFS();
	void PrintAllDFS(Node* t);
	void PrintAllInfix();
	void PrintAllInfix(Node* t);
	Node* FindMax();
	Node* FindMin();
	Node* Search(int val);
	Node* Search(int val, Node** &prev);
	void Insert(int val);
	Node* Remove(int val);
};

}
