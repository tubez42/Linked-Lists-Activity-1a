#include "stack.h"

// constructor initializes the stack as empty
Stack::Stack()
{
    top = nullptr;
}

// Push operation
void Stack::push(int value)
{
    Node* newNode = new Node;  // create new node and allocate its memory
    newNode->data = value;

    newNode->next = top;       // sets its next pointer to the current top
    top = newNode;             // update top pointer
}

// Pop operation
void Stack::pop()
{
    if (isEmpty())
    {
        cout << "Stack Underflow" << endl;
        return;
    }

    Node* temp = top;      // store current top
    top = top->next;       // update top pointer

    delete temp;           // free up memory
}

// Peek operation
int Stack::peek()
{
    if (isEmpty())
    {
        cout << "Stack is empty" << endl;
        return -1;
    }

    return top->data;
}

// Check if stack is empty
bool Stack::isEmpty()
{
    return (top == nullptr);
}

// Display stack elements
void Stack::display()
{
    if (isEmpty())
    {
        cout << "Stack is empty" << endl;
        return;
    }

    Node* temp = top;

    cout << "Stack elements:" << endl;

    while (temp != nullptr)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }

    cout << endl;
}