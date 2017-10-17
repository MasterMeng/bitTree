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

	//ǰ�����
	void preorder(tree *p);
	//�������
	void interthem(tree *p);
	//�������
	void postorder(tree *p);

	//����������ڵ���
	int count(tree *p);
	//ͳ��Ҷ�ӽڵ���
	int findLeafNum(tree *p);

	//��ȡ���������ڵ�
	tree *getRoot();

	static int leafNum;

private:
	tree *root;
};

