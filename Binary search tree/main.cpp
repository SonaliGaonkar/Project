#include "tree.cpp"

int main()
{
    Tree t;
    int choice = 0, d;
    std::cout << "\n\n1. Add a node";
    std::cout << "\n\n2. Delete a node";

    std::cout << "\n\nEnter your choice : ";
    std::cin >> choice;
    switch (choice)
    {
    case 1:
        std::cout << "Please insert node data : ";
        std::cin >> d;
        t.insertNode(d);
        break;

    case 2:
        std::cout << "please Insert data of Node you want to delete : ";
        std::cin >> d;
        t.root = t.deleteNode(t.root, d);
    }
}