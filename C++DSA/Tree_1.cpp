#include <iostream>
using namespace std;
class Node {
public:
 int data;
 Node* left;
 Node* right;
 Node(int value) {
 data = value;
 left = nullptr;
 right = nullptr;
 }
};
void inorderTraversal(Node* root) {
 if (root) {
 inorderTraversal(root->left);
 cout << root->data << " ";
 inorderTraversal(root->right);
 }
}
void preorderTraversal(Node* root) {
 if (root) {
 cout << root->data << " ";
 preorderTraversal(root->left);
 preorderTraversal(root->right);
 }
}
void postorderTraversal(Node* root) {
 if (root) {
 postorderTraversal(root->left);
 postorderTraversal(root->right);
 cout << root->data << " ";
 }
};
int main() {
 Node* root = new Node(1);
 root->left = new Node(2);
 root->right = new Node(3);
 root->left->left = new Node(4);
 root->left->right = new Node(5);
 cout << "Inorder traversal: ";
 inorderTraversal(root);
 cout << endl;
 cout << "Preorder traversal: ";
 preorderTraversal(root);
 cout << endl;
 cout << "Postorder traversal: ";
 postorderTraversal(root);
 cout << endl;
 return 0;
}