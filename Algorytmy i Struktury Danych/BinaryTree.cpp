#include "BinaryTree.h"
#include <stack>
#include <queue>
#include <iostream>

using namespace DrzewoBinarne;

BinaryTree::BinaryTree()
{
	root = nullptr;
}

void DrzewoBinarne::BinaryTree::PrintAllBFS()
{
	std::queue<Node*> S;
	if (!root)
		return;
	S.push(root);
	while (!S.empty())
	{
		Node* cur = S.front();
		S.pop();
		std::cout << cur->value << std::endl;
		if (cur->left)
			S.push(cur->left);
		if (cur->right)
			S.push(cur->right);
	}
}

void DrzewoBinarne::BinaryTree::PrintAllDFS()
{
	PrintAllDFS(root);
}

void DrzewoBinarne::BinaryTree::PrintAllDFS(Node * t)
{
	if (!t)
		return;
	PrintAllDFS(t->left);
	PrintAllDFS(t->right);
	std::cout << t->value << std::endl;
}

void DrzewoBinarne::BinaryTree::PrintAllInfix()
{
	PrintAllInfix(root);
}

void DrzewoBinarne::BinaryTree::PrintAllInfix(Node * t)
{
	if (!t)
		return;
	PrintAllInfix(t->left);
	std::cout << t->value << std::endl;
	PrintAllInfix(t->right);
}

Node * DrzewoBinarne::BinaryTree::FindMax()
{
	if (!root)
		return nullptr;
	Node* p = root;
	while (p->right)
	{
		p = p->right;
	}
	return p;
}

Node * DrzewoBinarne::BinaryTree::FindMin()
{
	if (!root)
		return nullptr;
	Node* p = root;
	while (p->left)
	{
		p = p->left;
	}
	return p;
}

Node * DrzewoBinarne::BinaryTree::Search(int val)
{
	if (!root)
		return nullptr;
	Node* p = root;
	while (p && p->value != val)
	{
		if (val < p->value)
		{
			p = p->left;
		}
		else
			p = p->right;
	}
	return p;
}

Node * DrzewoBinarne::BinaryTree::Search(int val, Node** &prev)
{
	prev = &root;
	if (!root)
		return nullptr;

	Node* p = root;
	while (p && p->value != val)
	{
		if (val < p->value)
		{
			prev = &(p->left);
			p = p->left;
		}
		else
		{
			prev = &(p->right);
			p = p->right;
		}
	}
	return p;
}

void DrzewoBinarne::BinaryTree::Insert(int val)
{
	Node* pNew = new Node(val);
	Node* p = root;
	if (!root)
	{
		root = pNew;
		return;
	}
	while (true)
	{
		if (p->value == val)
			return;
		if (val < p->value)
		{
			if (p->left)
				p = p->left;
			else
			{
				p->left = pNew;
				return;
			}
		}
		else
		{
			if (p->right)
				p = p->right;
			else
			{
				p->right = pNew;
				return;
			}
		}
	}
}

Node * DrzewoBinarne::BinaryTree::Remove(int val)
{
	Node** doUsPrev;
	Node* doUs = Search(val, doUsPrev);
	if (!doUs)
		return nullptr;
	if (!doUs->left && !doUs->right)
	{
		*doUsPrev = nullptr;
	}
	else if (!doUs->left)
	{
		*doUsPrev = doUs->right;
	}
	else if (!doUs->right)
	{
		*doUsPrev = doUs->left;
	}
	else
	{
		// Znajduje element o srodkowej wartosci
		Node* p = doUs->left;
		Node* pPrev = doUs;
		while (p->right)
		{
			pPrev = p;
			p = p->right;
		}
		p->left = doUs->left;
		p->right = doUs->right;
		pPrev->right = nullptr;
		*doUsPrev = p;
	}

	doUs->left = nullptr;
	doUs->right = nullptr;
	return doUs;
}
