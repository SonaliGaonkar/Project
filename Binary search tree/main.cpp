#include "tree.cpp"
Tree t;
int choice = 0, d, n;
void myData()
{
    std::cout << "\n\n1. Add a node";
    std::cout << "\n\n2. Delete a node";
    std::cout << "\n\n3. print data in Preorder";
    std::cout << "\n\n4. print data in Inorder";
    std::cout << "\n\n5. print data in Postorder";
    std::cout << "\n\n6. Search data";
    std::cout << "\n\n7. EXIT";

    std::cout << "\n\nEnter your choice : ";
    std::cin >> choice;
    switch (choice)
    {
    case 1:
        std::cout << "How many values do you want enter : ";
        std::cin >> n;
        std::cout << "Please enter node data :";
        for (int i = 0; i < n; i++)
        {

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
        std::cout << "Would you like to perform any other task ";
        myData();
        break;

    case 3:
        t.preorder(t.root);
        std::cout << "Would you like to perform any other task ";
        myData();
        break;

    case 4:
        t.inorder(t.root);
        std::cout << "Would you like to perform any other task ";
        myData();
        break;

    case 5:
        t.postorder(t.root);
        std::cout << "Would you like to perform any other task ";
        myData();
        break;

    case 6:

        std::cout << "please Insert data of Node you want to search :"
                  << "\n";
        std::cin >> d;
        {
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
        }
        std::cout << "Would you like to perform any other task ";
        myData();
        break;

    case 7:
        return;
        break;
    }
}
int main()
{
    myData();
}
