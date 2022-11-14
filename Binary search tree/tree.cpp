#include "tree.h"

Tree::Tree()
{
    root = nullptr;
}
void Tree::insertNode(int d)
{

    Node *temp = new Node(d);
    Node *current = root;
    if (root == nullptr)
    {
        root = temp;
    }
    else
    {
        while (true)
        {
            if (d < current->data)
            {
                if (current->left == nullptr)
                {
                    current->left = temp;
                    break;
                }
                current = current->left;
            }

            if (d > current->data)
            {
                if (current->right == nullptr)
                {
                    current->right = temp;
                    break;
                }
                current = current->right;
            }
        }
    }
}