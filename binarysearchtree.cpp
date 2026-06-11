#include <iostream>
using namespace std;

class Node 
{
public:
    string info;
    Node *leftchild;
    Node *rightchild;

    // Constructor for the node class
    Node (string i, Node *l, Node *r)
    {
        info = i;
        leftchild = l;
        rightchild = r;
    }

};

class BinaryTree
{
public:
    Node *ROOT;

    BinaryTree()
    {
        ROOT = NULL; //initializing ROOT TO NULL
    }

    //insert a Node in the binary search tree
    void insert (string element)
    {