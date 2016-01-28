#ifndef NODE_H
#define NODE_H


class Node
{
public:
    Node();
    unsigned char value;
    unsigned int frequency;
    Node *left;
    Node *right;
};

#endif // NODE_H
