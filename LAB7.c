#include <stdio.h>
#include <stdlib.h>

struct node {
    char data;
    struct node *left,*right;
};

struct node* newNode(char data) {
    struct node* n = (struct node*)malloc(sizeof(struct node));
    n->data=data; n->left=n->right=NULL;
    return n;
}

void inorder(struct node* root) {
    if(root) {
        inorder(root->left);
        printf("%c ",root->data);
        inorder(root->right);
    }
}

int main() {
    struct node* root = newNode('+');
    root->left = newNode('a');
    root->right = newNode('*');
    root->right->left = newNode('b');
    root->right->right = newNode('c');

    inorder(root);
    return 0;
}