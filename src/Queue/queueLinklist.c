#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
} * front = NULL, * rear = NULL;

void enque(int value) {
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = value;
    newnode->next = NULL;

    if (front == NULL) {
        front = newnode;
        rear = newnode;
    }
    else {
        rear->next = newnode;
        rear = newnode;
    }
}

void deque() {
    if (front == NULL) {
        printf("Queue is empty.\n");
        return;
    }

    struct node* temp = front;
    printf("Your dequeued data is: %d\n", temp->data);
    front = front->next;
    free(temp);
}

void display() {
    if (front == NULL) {
        printf("Queue is empty.\n");
        return;
    }

    struct node* temp = front;
    while (temp != NULL) {
        printf("Your data is: %d\n", temp->data);
        temp = temp->next;
    }
}

int main() {
    // You can test your code here by calling enque, deque, and display functions.
    return 0;
}
