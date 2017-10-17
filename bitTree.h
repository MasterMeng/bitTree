#pragma once

#include <iostream>

struct tree
{
	int data;
	tree *liftChild, *rightChild;
};

class bitTree
{
public:
	bitTree();
	~bitTree();

	void insertTree(int data);

	//前序遍历
	void preorder(tree *p);
	//中序遍历
	void interthem(tree *p);
	//后序遍历
	void postorder(tree *p);

	//计算二叉树节点数
	int count(tree *p);
	//统计叶子节点数
	int findLeafNum(tree *p);

	//获取二叉树根节点
	tree *getRoot();

	static int leafNum;

private:
	tree *root;
};

