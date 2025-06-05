#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node()
    {
        next = NULL;
    }
};

class Stack
{
private:
    Node *top;

public:
    Stack()
    {
        top = NULL;
    }

    int push(int value)
    {
        Node *newNode = new Node();
        newNode->data = value;
        newNode->next = top;
        top = newNode;
        cout << "Push Value : " << value << endl;
        return value;
    }
    bool isEmpty()
    {
        return top == NULL;
    }

    void pop()
    {
        if (isEmpty())
        {
            cout << "stack is empty" << endl;
            return;
        }
        cout << "Poped value :" << top->data << endl;
        top = top->next;
    }

    void peek()
    {
        if (isEmpty())
        {
            cout << "List is empty" << endl;
        }
        else
        {
            Node *current = top;
            while (current != NULL)
            {
                cout << current->data << "" << endl;
                current = current->next;
            }
            cout << endl;
        }
    }
};

int main()
{
    Stack stack;
    int choise = 0;
    int value;

    while (choise != 4)
    {
        cout << "1. push\n";
        cout << "2. pop\n";
        cout << "3. peek\n";
        cout << "4. Exit\n";
        cout << "Enter your choice :";
        cin >> choise;

        switch (choise)
        {
        case 1:
        cout << "Enter value to push:";
            cin >> value;
            stack.push(value);
            break;
        case 2:
        stack.pop();
            break;
        case 3:
        stack.peek();
            break;
        case 4:  
        cout << "Exiting program." << endl;  
        break;
        default:
            cout << "Invalid choise. Try again." << endl;
        }
        cout << endl;
    }
    return 0;
}