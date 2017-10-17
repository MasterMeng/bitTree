#include <iostream>

#include <stdlib.h>

#include "bitTree.h"

using namespace std;

int main(int argc, char* argv[])
{
	bitTree node;
	int arr[15];

	for (int i = 0; i < 15; ++i)
	{
		int tmp = rand()%100;
		arr[i] = tmp;
		node.insertTree(tmp);
	}

	cout << "原数组:" << endl;
	for (int i = 0; i < 15; ++i)
		cout << arr[i] << " ";
	cout << endl;

	node.preorder(node.getRoot());
	cout << endl;
	node.interthem(node.getRoot());
	cout << endl;
	node.postorder(node.getRoot());

	cout<<endl << "二叉树节点数:" << node.findLeafNum(node.getRoot()) << endl;

	system("pause");
	return 0;
}
