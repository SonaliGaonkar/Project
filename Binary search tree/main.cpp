#include "tree.cpp"
Tree t;
int choice = 0, d, n;
void myData()
{
    std::cout << "\n\n1. Add a node";
    std::cout << "\n\n2. Delete a node";
    std::cout << "\n\n3. print data in preorder";
    std::cout << "\n\n4. Search data";

    std::cout << "\n\nEnter your choice : ";
    std::cin >> choice;
    switch (choice)
    {
    case 1:
        std::cout << "How many values do you want enter : ";
        std::cin >> n;
        for (int i = 0; i < n; i++)
        {
            std::cout << "Please enter node data :";
            std::cin >> d;
            t.insertNode(d);
        }
        std::cout << "Would you like to perform any other task ";
        myData();
        break;

    case 2:
        std::cout << "please Insert data of Node you want to delete : ";
        std::cin >> d;
        t.root = t.deleteNode(t.root, d);
        break;

    case 3:
        t.preorder(t.root);
        break;

    case 4:
        std::cout << "please Insert data of Node you want to search :"
                  << "\n";
        std::cin >> d;
        Node *temp = t.search(t.root, d);
        if (temp != nullptr)
        {
            std::cout << "Number Found"
                      << "\n";
        }
        else
        {
            std::cout << "not found"
                      << "\n";
        }
        break;
    }
}
int main()
{
    myData();
}
