#ifndef BST_H
#define BST_H
class BST
{
public:
     virtual void add (int val)=0;
     virtual void preOrderTraversal()=0;
     virtual bool isIn (int val)=0;
};
#endif // BST_H

