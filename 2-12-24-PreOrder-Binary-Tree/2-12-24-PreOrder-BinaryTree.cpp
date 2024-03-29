#include <iostream> // Including the input/output stream library

using namespace std; // Using the standard namespace for easier access to standard library components

// Defining a structure for a binary tree node
struct Node {
    int data; // Data stored in the node
    struct Node* left, * right; // Pointers to the left and right child nodes
};
     
// Function to create a new node with the given data
Node* newNode(int data) {
    Node* temp = new Node; // Allocating memory for a new node
    temp->data = data; // Assigning the given data to the node
    temp->left = temp->right = NULL; // Initializing left and right pointers to NULL
    return temp; // Returning the newly created node
}

// Function to print binary tree recursively in preorder
void printTreePreorder(Node* root) {
    if (root == NULL) // If the root is NULL, return (base case for recursion)
        return;
    cout << root->data << " "; // Print the data of the current node
    printTreePreorder(root->left); // Recursively traverse left subtree
    printTreePreorder(root->right); // Recursively traverse right subtree
}

int main() {
    // Creating the binary tree structure
    Node* root = newNode(1); // Creating the root node with data 1
    root->left = newNode(2); // Creating left child node with data 2
    root->right = newNode(3); // Creating right child node with data 3
    root->left->left = newNode(4); // Creating left child of the left child node with data 4
    root->left->right = newNode(5); // Creating right child of the left child node with data 5
    root->left->right->left = newNode(9); // Creating left child of the right child of the left child node with data 9
    root->right->left = newNode(6); // Creating left child of the right child node with data 6
    root->right->right = newNode(7); // Creating right child of the right child node with data 7
    root->right->right->left = newNode(15); // Creating left child of the right child of the right child node with data 15

    // Printing the binary tree using preorder traversal
    cout << "Binary Tree (Preorder traversal):" << endl;
    printTreePreorder(root); // Calling the function to print the tree in preorder

    return 0; // Indicating successful execution
}
#include <iostream>

using namespace std;



struct Node {

    int data;

    struct Node* left, * right;

};
     


Node* newNode(int data) {

    Node* temp = new Node;

    temp->data = data;

    temp->left = temp->right = NULL;

    return temp;

}



// Function to print binary tree recursively in preorder

void printTreePreorder(Node* root) {

    if (root == NULL)

        return;

    cout << root->data << " "; // Visit the current node

    printTreePreorder(root->left); // Traverse left subtree

    printTreePreorder(root->right); // Traverse right subtree

}



int main() {

    Node* root = newNode(1);

    root->left = newNode(2);

    root->right = newNode(3);

    root->left->left = newNode(4);

    root->left->right = newNode(5);

    root->left->right->left = newNode(9);

    root->right->left = newNode(6);

    root->right->right = newNode(7);

    root->right->right->left = newNode(15);



    cout << "Binary Tree (Preorder traversal):" << endl;

    printTreePreorder(root);



    return 0;

}

