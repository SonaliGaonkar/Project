#include <iostream>
#include <vector>
#include <string>


class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node();
    Node(int);
};