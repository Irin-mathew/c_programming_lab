#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Defining the structure of the node
typedef struct node {
    int roll_no;
    char name[20];
    int total_mark;
    struct node *next;
} node;

//Inserting a new node at the beginning of the list
void insert(node **head, int roll_no, char *name, int total_mark) {
    node *new_node = (node *)malloc(sizeof(node));
    new_node->roll_no = roll_no;
    strcpy(new_node->name, name);
    new_node->total_mark = total_mark;
    new_node->next = *head;
    *head = new_node;
    printf("\nInserted Successfully!\n");
}

//Deleting a node from the list based on the roll number
void delete(node **head, int roll_no) {
    node *temp = *head, *prev;
    if (temp != NULL && temp->roll_no == roll_no) {
        *head = temp->next;
        free(temp);
        printf("\nDeleted Successfully!\n");
        return;
    }
    while (temp != NULL && temp->roll_no != roll_no) {
        prev = temp;
        temp = temp->next;
    }
    if (temp == NULL) {
        printf("\nNo Record Found!\n");
        return;
    }
    prev->next = temp->next;
    free(temp);
    printf("\nDeleted Successfully!\n");
}

//Searching for a node in the list based on the roll number
void search(node *head, int roll_no) {
    node *temp = head;
    while (temp != NULL) {
        if (temp->roll_no == roll_no) {
            printf("\nRoll No: %d\nName: %s\nTotal Mark: %d\n", temp->roll_no, temp->name, temp->total_mark);
            return;
        }
        temp = temp->next;
    }
    printf("\nNo Record Found!\n");
}

//Displaying the linked list
void display(node *head) {
    node *temp = head;
    printf("\nDisplaying Records:\n");
    while (temp != NULL) {
        printf("\nRoll No: %d\nName: %s\nTotal Mark: %d\n", temp->roll_no, temp->name, temp->total_mark);
        temp = temp->next;
    }
}

int main() {
    node *head = NULL;
    int choice, roll_no, total_mark;
    char name[20];

    while (1) {
        printf("\n1. Insert\n2. Delete\n3. Search\n4. Display\n5. Exit\n\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\nEnter Roll No: ");
                scanf("%d", &roll_no);
                printf("Enter Name: ");
                scanf("%s", name);
                printf("Enter Total Mark: ");
                scanf("%d", &total_mark);
                insert(&head, roll_no, name, total_mark);
                break;

            case 2:
                printf("\nEnter Roll No: ");
                scanf("%d", &roll_no);
                delete(&head, roll_no);
                break;

            case 3:
                printf("\nEnter Roll No: ");
                scanf("%d", &roll_no);
                search(head, roll_no);
                break;

            case 4:
                display(head);
                break;

            case 5:
                exit(0);

            default:
                printf("\nInvalid Choice!\n");
        }
    }
    return 0;
}
