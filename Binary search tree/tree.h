#include "node.cpp"
class Tree
{
public:
    std::vector<int> v;

    Node *root;
    Tree();
    void insertNode(int);
    Node* deleteNode(Node *, int);
    void findMax(Node*);
    Node* search(Node*, int);
    void preorder(Node*);
    void inorder(Node*);
};