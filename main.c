#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


typedef struct __NODE__
{
    int value;
    struct __NODE__* next;
}node;

node* newNode(int value)
{
    node* output=(node*) malloc(sizeof(node));
    output->value = value;
    output->next = NULL;
    return output;
}

void addEnd(node* head ,node* newNode ){
    node* current;
    for (current = head ; current->next != NULL ; current = current->next);

    current->next = newNode;
}

void addHead(node** head , node* newNode){
    newNode->next = *head;
    *head = newNode;
}

void print(node* head){
    int index = 0;
    node* current = head;
    while(current != NULL ){
        printf("value of node no. %d:%d\n" , index , current->value);
        index++;
        current = current->next;
    }
}

int main() {
    /*int a[100];
    a[10];
    // struct __NODE__ == node;
    struct __NODE__ b;
    node c;*/

    node* head = newNode(-1);

    addEnd(head , newNode(0));
    addEnd(head , newNode(1));
    addEnd(head , newNode(2));
    addEnd(head , newNode(3));

    addHead(&head , newNode(-2));

    print(head);


}
