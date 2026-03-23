#ifndef STACK_H
#define STACK_H

#include <iostream>
using namespace std;

// Part 1: Node structure
struct Node
{
    int data;
    Node* next;
};

class Stack
{
private:
    Node* top;

public:
    Stack();            // constructor

    void push(int value);
    void pop();
    int peek();
    bool isEmpty();
    void display();
};

#endif