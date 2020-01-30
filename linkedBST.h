

#include "BST.h"

class Node{
int data;
Node *left;
Node *right;
};


class LinkedBST:public BST{

private:
    Node *root;

public:
    void add(int val);
    void preOrderTraversal();
    bool isIN(int val);
    };
