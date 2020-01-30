#include <iostream>
#ifndef NODE_H
#define NODE_H
using namespace std;

class node{
    private:
        int *LB
        int *RB
        int value
    public:
        int getValue(){
            return value;
        }
        int getLB(){
            return LB
        }
        int getRB(){
            return RB
        }
        void setValue(int val){
            value = val;
        }
        void setLB(int val){
            LB = &val
        }

        void setRB(int val){
            RB = &val
        }
    };
#endif // NODE_H

