#include <stdio.h>
#include <stdlib.h>
#include  <string.h>

struct Node {
    int roll;
    char name[20];
    int age;
    struct Node* next;
};

struct Node* start = NULL;

void create() {
    struct Node* temp, * ptr;
    temp = (struct Node*)malloc(sizeof(struct Node));
    if (temp == NULL) {
        printf("Out of Memory Space\n");
        return;
    }
    printf("Enter the roll number: ");
    scanf("%d", &temp->roll);
    printf("Enter the name: ");
    scanf("%s", temp->name);
    printf("Enter the age: ");
    scanf("%d", &temp->age);
    temp->next = NULL;
    if (start == NULL) {
        start = temp;
    } else {
        ptr = start;
        while (ptr->next != NULL) {
            ptr = ptr->next;
        }
        ptr->next = temp;
    }
}

void display() {
    struct Node* ptr;
    if (start == NULL) {
        printf("List is empty\n");
        return;
    } else {
        ptr = start;
        printf("The list is:\n");
        while (ptr != NULL) {
            printf("Roll: %d, Name: %s, Age: %d\n", ptr->roll, ptr->name, ptr->age);
            ptr = ptr->next;
        }
    }
}

void insert_intermediate() {
    struct Node* temp, * ptr, * prev;
    int pos, i;
    temp = (struct Node*)malloc(sizeof(struct Node));
    if (temp == NULL) {
        printf("Out of Memory Space\n");
        return;
    }
    printf("Enter the position to insert: ");
    scanf("%d", &pos);
    printf("Enter the roll number: ");
    scanf("%d", &temp->roll);
    printf("Enter the name: ");
    scanf("%s", temp->name);
    printf("Enter the age: ");
    scanf("%d", &temp->age);
    temp->next = NULL;
    if (pos == 0) {
        temp->next = start;
        start = temp;
    } else {
        ptr = start;
        for (i = 0; i < pos - 1; i++) {
            if (ptr == NULL) {
                printf("Position not found\n");
                return;
            }
            prev = ptr;
            ptr = ptr->next;
        }
        temp->next = ptr;
        prev->next = temp;
    }
}

void delete_intermediate() {
    struct Node* temp, * ptr, * prev;
    int pos, i;
    printf("Enter the position to delete: ");
    scanf("%d", &pos);
    if (start == NULL) {
        printf("List is empty\n");
        return;
    } else if (pos == 0) {
        temp = start;
        start = start->next;
        printf("Deleted roll: %d, Name: %s, Age: %d\n", temp->roll, temp->name, temp->age);
        free(temp);
    } else {
        temp = start;
        for (i = 0; i < pos - 1; i++) {
            if (temp == NULL) {
                printf("Position not found\n");
                return;
            }
            ptr = temp;
            temp = temp->next;
        }
        if (temp == NULL) {
            printf("Position not found\n");
            return;
        }
        ptr->next = temp->next;
        printf("Deleted roll: %d, Name: %s, Age: %d\n", temp->roll, temp->name, temp->age);
        free(temp);
    }
}

int main() {
    int choice;
    while (1) {
        printf("1. Create\n2. Display\n3. Insert in intermediate\n4. Delete from intermediate\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                create();
                break;
            case 2:
                display();
                break;
            case 3:
                insert_intermediate();
                break;
            case 4:
                delete_intermediate();
                break;
            case 5:
                exit(0);
            default:
                printf("Invalid choice\n");
        }
    }
    return 0;
}
