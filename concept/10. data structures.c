#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure Example
struct Student {
    char name[50];
    int age;
    float gpa;
};

// Queue Implementation
#define SIZE 5
int queue[SIZE], front = -1, rear = -1;
void enqueue(int value) {
    if (rear == SIZE - 1) return;
    if (front == -1) front = 0;
    queue[++rear] = value;
}
int dequeue() {
    if (front == -1 || front > rear) return -1;
    return queue[front++];
}

// Stack Implementation
int stack[SIZE], top = -1;
void push(int value) {
    if (top == SIZE - 1) return;
    stack[++top] = value;
}
int pop() {
    if (top == -1) return -1;
    return stack[top--];
}

// Linked List Implementation
struct Node {
    int data;
    struct Node* next;
};
struct Node* head = NULL;
void insert(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = head;
    head = newNode;
}
void display() {
    struct Node* temp = head;
    while (temp) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    struct Student s1 = {"Alice", 20, 3.8};
    printf("Name: %s\n", s1.name);
    printf("Age: %d\n", s1.age);
    printf("GPA: %.2f\n", s1.gpa);
    
    enqueue(10);
    enqueue(20);
    printf("Dequeued: %d\n", dequeue());
    
    push(30);
    push(40);
    printf("Popped: %d\n", pop());
    
    insert(50);
    insert(60);
    display();
    
    return 0;
}
