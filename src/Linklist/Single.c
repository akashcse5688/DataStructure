#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node* next;
} *head = NULL, *current = NULL;
void create()
{
    int n;
    int i = 1;
    printf("Enter the Linklist  Size= ");
    scanf("%d", &n);
    printf("Enter the value input to the linlist= ");
    while (i <= n)
    {
        int value;

        scanf("%d", &value);
        struct node* newnode;
        newnode = (struct node*)malloc(sizeof(struct node));
        newnode->data = value;
        newnode->next = NULL;
        if (head == NULL)
        {
            head = newnode;
            current = newnode;
        }
        else
        {
            current->next = newnode;
            current = newnode;
        }
        i++;
    }
}
void insertAtfirst()
{
    int value;
    printf("Enter the value do you insert At first position= \n");
    scanf("%d", &value);
    struct node* newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = value;
    newnode->next = head;
    head=newnode;
}
void insertAtlast()
{
    int value;
    printf("Enter the value do you insert At last position = \n");
    scanf("%d", &value);
    struct node* newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = value;
    newnode->next=NULL;
    if (head == NULL)
    {
        head = newnode;
        current = newnode;
    }
    else
    {
        current->next = newnode;
        current = newnode;
    }
}
void insertAtspecific()
{
    int i=1;
    int n;
    struct node *ptr;
    ptr=head;
    printf("Enter your specific position= ");
    scanf("%d",&n);
    while(i<n-1)
    {
        ptr=ptr->next;
        i++;
    }
    int value;
    printf(" NOW, Enter the value do you insert= \n");
    scanf("%d", &value);
    struct node* newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = value;
    newnode->next=ptr->next;
    ptr->next=newnode;
}
void deleteAtfirst()

{
    printf("\nDelete sucsesfully AT FIRST\n");
    struct node*temp;
    temp=head;
    head=head->next;
    free(temp);
}
void deleteAtlast()

{
    printf("\nDelete sucsesfully AT last\n");
    int i=1;
    struct node *ptr;
    ptr=head;
    while(ptr->next!=current)
    {
        ptr=ptr->next;
        i++;
    }
    ptr->next=NULL;
    current=ptr;
}
void deleteAtspecific()
{
    int n;
    int i=1;
    struct node*temp;
    temp=head;
    printf("Enter the specific positon  Do you want delete= ");
    scanf("%d",&n);
    while(i<n-1)
    {
        temp=temp->next;
        i++;
    }
    temp->next=temp->next->next;
}
 void printList()
{
    struct node* ptr;
    ptr = head;
    while (ptr != NULL)
    {
        printf("%d->", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL");
}
int searchList(int key) {
    struct node* ptr = head;
    int position = 1;
    while (ptr != NULL) {
        if (ptr->data == key) {
            return position;
        }
        ptr = ptr->next;
        position++;
    }
    return -1; // Key not found
}


int main()
{
    create();
    //insertAtfirst();
    //insertAtlast();
    //insertAtspecific();
  // deleteAtlast();
   //deleteAtspecific();


    // int key;
    //printf("Enter a value to search in the list: ");
    //scanf("%d", &key);
    //int position = searchList(key);
    //if (position != -1) {
       // printf("%d found at position %d\n", key, position);
   // } else {
        //printf("%d not found in the list\n", key);
    //}
    printList();
    return 0;
}
