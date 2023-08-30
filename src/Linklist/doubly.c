#include<stdio.h>
#include<stdlib.h>
struct node 
{
  
struct node *prev;
   
int data;
   
struct node *next;
 
} *head, *current;

void
creation ()
{
  
int size;
  
printf ("Enter the linklist size= ");
  
scanf ("%d", &size);
  
int i = 1;
  
while (i <= size)
    {
      
int value;
      
printf ("Enter the value= ");
      
scanf ("%d", &value);
      
struct node *newnode;
      
newnode = (struct node *) malloc (sizeof (struct node));
      
newnode->prev = NULL;
      
newnode->data = value;
      
newnode->prev = NULL;
      
if (head == NULL)
	{
	  
head = newnode;
	  
current = newnode;
	
}
      
      else
	{
	  
current->next = newnode;
	  
newnode->prev = current;
	  
current = newnode;
	
}
      
i++;
    
}

}


void
display ()
{
  
struct node *temp;
  
temp = head;
  
while (temp != NULL)
    {
      
printf ("%d->", temp->data);
      
temp = temp->next;
    
}

 
}


void
insertAtfast ()
{
  
int value;
  
printf ("Enter the value= ");
  
scanf ("%d", &value);
  
struct node *newnode;
  
newnode = (struct node *) malloc (sizeof (struct node));
  
newnode->data = value;
  
newnode->prev = NULL;
  
newnode->next = head;
  
head->prev = newnode;
  
head = newnode;

} 
void

insertAtlast ()
{
  
int value;
  
printf ("Enter the value= ");
  
scanf ("%d", &value);
  
struct node *newnode;
  
newnode = (struct node *) malloc (sizeof (struct node));
  
newnode->data = value;
  
newnode->next = NULL;
  
current->next = newnode;
  
newnode->prev = current;
  
current = newnode;

 
} 
void

specific ()
{
  
int pos;
  
printf ("Enter the position= ");
  
scanf ("%d", &pos);
  
struct node *temp = head;
  
for (int i = 1; i < pos - 1; i++)
    {
      
temp = temp->next;
    
} 
int value;
  
printf ("Enter the value= ");
  
scanf ("%d", &value);
  
struct node *newnode;
  
newnode = (struct node *) malloc (sizeof (struct node));
  
newnode->data = value;
  
newnode->next = temp->next;
  
temp->next->prev = newnode;
  
temp->next = newnode;
  
temp->prev = newnode;
  
newnode->prev = temp;

 
} 
void

deleteAtfirst ()
{
  
struct node *temp = head;
  
head = head->next;
  
free (temp);
  
head->prev = NULL;

} 
void

deleteAtlast ()
{
  
struct node *temp = current;
  
current = current->prev;
  
free (temp);
  
current->next = NULL;

} 
void

deleteAtspecific ()
{
  
struct node *temp = head;
  
int pos;
  
printf ("Enter the position= ");
  
scanf ("%d", &pos);
  
for (int i = 1; i < pos - 1; i++)
    {
      
temp = temp->next;
    
} 
temp->next = temp->next->next;
  
temp->next->prev = temp;

} 
int

main ()
{
  
creation ();
  
    //insertAtfast();
    // insertAtlast();
    //specific();
    // deleteAtfirst();
    // deleteAtlast();
    // deleteAtspecific();
    display ();

}
