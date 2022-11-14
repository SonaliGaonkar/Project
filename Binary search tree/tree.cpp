#include "tree.h"
#include <algorithm>

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
Node *Tree::deleteNode(Node *root, int d)
{
    if (root == nullptr)
    {
        std::cout << "It seems that Tree is empty or data doesn't exist";
    }
    else if (d < root->data)
    {
        root->left = deleteNode(root->left, d);
    }
    else if (d > root->data)
    {
        root->right = deleteNode(root->right, d);
    }
    else
    {
        if (root->left && root->right)
        {
            findMax(root->left);
            root->data = v.back();
            root->left = deleteNode(root->left, root->data);
        }
        else
        {
            Node *temp = root;
            if (root->left == nullptr)
                root = root->right;
            else if (root->right == nullptr)
                root = root->left;
            delete temp;
        }
    }

    return (root);
}
void Tree::findMax(Node* root)
{
	if (root)
	{
		findMax(root->left);
		v.push_back(root->data);
		findMax(root->right);
	}
}