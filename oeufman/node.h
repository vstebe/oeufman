#ifndef NODE_H
#define NODE_H


class Node
{
public:
    Node();
    Node(Node *left, Node *right);
    Node(unsigned char value, unsigned int frequency);
    unsigned int count();
    void updateFrequencies();

    bool getIsLeaf() const;

    unsigned char getValue() const;
    void setValue(unsigned char value);

    unsigned int getFrequency() const;
    void setFrequency(unsigned int value);

protected:
    unsigned char value;
    unsigned int frequency;
    Node *left;
    Node *right;
    bool isLeaf;
};

#endif // NODE_H
