#ifndef ARRAYBST_H
#define ARRAYBST_H
#include "BST.h"
#define MAX_SIZE 1000
class ArrayBST:public BST{

private:
    int data[MAX_SIZE];

public:
    void add(int val);
    void preOrderTraversal();
    bool isIN(int val);
    };

void ArrayBST::add(int val)
{

}
#endif // ARRAYBST_H

