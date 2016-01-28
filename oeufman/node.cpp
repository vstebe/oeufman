#include "node.h"

Node::Node():
    value(0),
    frequency(0),
    left(0),
    right(0),
    isLeaf(false)
{

}

Node::Node(Node *left, Node *right):
    value(0),
    frequency(0),
    isLeaf(false)
{
    this->left = left;
    this->right = right;
}

Node::Node(unsigned char value, unsigned int frequency):
    value(value),
    frequency(frequency),
    isLeaf(true)
{

}

unsigned int Node::count()
{
    int frequency = 0;

    if(left)
        frequency += left->count();
    if(right)
        frequency += right->count();

    frequency += this->frequency;

    return frequency;
}

void Node::updateFrequencies()
{
    frequency = count();
    if(left)
        left->updateFrequencies();
    if(right)
        right->updateFrequencies();
}

bool Node::getIsLeaf() const
{
    return isLeaf;
}

unsigned char Node::getValue() const
{
    return value;
}

void Node::setValue(unsigned char value)
{
    this->value = value;
}

unsigned int Node::getFrequency() const
{
    return frequency;
}

void Node::setFrequency(unsigned int value)
{
    frequency = value;
}
