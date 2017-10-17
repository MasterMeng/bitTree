#include "bitTree.h"

int bitTree::leafNum = 0;

bitTree::bitTree()
{
	root = NULL;
}


bitTree::~bitTree()
{
}

void bitTree::insertTree(int data)
{
	tree *newTree = new tree;
	newTree->data = data;
	newTree->liftChild = newTree->rightChild = NULL;

	if (NULL == root)
		root = newTree;
	else
	{
		tree *backup = NULL;
		tree *current = root;
		while (current != NULL)
		{
			backup = current;
			if (current->data > data)
				current = current->liftChild;
			else
				current = current->rightChild;
		}
		if (backup->data > data)
			backup->liftChild = newTree;
		else
			backup->rightChild = newTree;
	}
}

void bitTree::preorder(tree * p)
{
	if (p != NULL)
	{
		std::cout << p->data << " ";
		preorder(p->liftChild);
		preorder(p->rightChild);
	}
}

void bitTree::interthem(tree * p)
{
	if (p != NULL)
	{
		interthem(p->liftChild);
		std::cout << p->data << " ";
		interthem(p->rightChild);
	}
}

void bitTree::postorder(tree * p)
{
	if (p != NULL)
	{
		postorder(p->liftChild);
		postorder(p->rightChild);
		std::cout << p->data << " ";
	}
}

int bitTree::count(tree *p)
{
	if (NULL == p)
		return 0;
	else
		return count(p->liftChild) + count(p->rightChild) + 1;
}

int bitTree::findLeafNum(tree *p)
{
	if (NULL == p)
		return 0;
	else
	{
		if (p->liftChild == NULL && p->rightChild == NULL)
			return leafNum += 1;
		else
		{
			findLeafNum(p->liftChild);
			findLeafNum(p->rightChild);
		}
		return leafNum;
	}
}

tree * bitTree::getRoot()
{
	return root;
}
