#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
} *root = NULL, *temp = NULL;

void creation(int value)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = value;
    newnode->left = NULL;
    newnode->right = NULL;
    if (root == NULL)
    {
        root = newnode;
    }
    else
    {
        struct node *temp = root;
        while (1)
        {
            if (newnode->data <= temp->data)
            {
                // left sub tree
                if (temp->left == NULL)
                {
                    temp->left = newnode;
                    break;
                }
                else
                {
                    temp = temp->left;
                }
            }
            else
            {
                // right subtree
                if (temp->right == NULL)
                {
                    temp->right = newnode;
                    break;
                }
                else
                {
                    temp = temp->right;
                }
            }
        }
    }
}
void preOrder(struct node*rot) //root->data,root->left,root->right
{
    if(rot==NULL)
    {
        return;
    }
    printf("%d->",rot->data);//root print

    preOrder(rot->left);//left subtree

    preOrder(rot->right);//right subtree

}


void inOrder(struct node*rot)  //root->left,root->data,root->right
{
    if(rot==NULL)
    {
        return;
    }
    inOrder(rot->left);//left subtree
    printf("%d->",rot->data);//root print
    inOrder(rot->right);//right subtree
}

void postOrder(struct node* rot)  //root->left,root->right,root->data
{
    if (rot == NULL)
    {
        return;
    }

    postOrder(rot->left);  // Traverse the left subtree
    postOrder(rot->right); // Traverse the right subtree
    printf("%d->", rot->data); // Print the root data
}




int main()
{
// You can add code to test the binary search tree here if needed
    creation(55);
    creation(40);
    creation(80);
    creation(34);
    creation(28);
    creation(38);
    creation(60);
    creation(90);
    //Traverse
  //  preOrder(root);
  //  postOrder(root);
    inOrder(root);
    return 0;
}
