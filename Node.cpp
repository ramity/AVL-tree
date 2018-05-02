#include "./Node.h"

Node::Node(int data)
{
    this->decr = NULL;
    this->left = NULL;

    this->data = data;

    this->right = NULL;
    this->incr = NULL;

    this->balanceFactor = 0;
}
