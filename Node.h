#ifndef NODE_H
#define NODE_H

class Node
{
public:
    Node * decr;
    Node * left;

    int data;

    Node * right;
    Node * incr;

    int balanceFactor;
};

#endif
