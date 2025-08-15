#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 10

int deque[MAX_SIZE];
int front = -1;
int rear = -1;

void insert_front() {
    if ((front == 0 && rear == MAX_SIZE - 1) || (rear == front - 1)) {
        printf("Error: Queue is full.\n");
        return;
    }

    if (front == -1) {
        front = 0;
        rear = 0;
    } else if (front == 0) {
        front = MAX_SIZE - 1;
    } else {
        front--;
    }

    printf("Enter the element to insert: ");
    scanf("%d", &deque[front]);
}

void insert_rear() {
    if ((front == 0 && rear == MAX_SIZE - 1) || (rear == front - 1)) {
        printf("Error: Queue is full.\n");
        return;
    }

    if (front == -1) {
        front = 0;
        rear = 0;
    } else if (rear == MAX_SIZE - 1) {
        rear = 0;
    } else {
        rear++;
    }

    printf("Enter the element to insert: ");
    scanf("%d", &deque[rear]);
}

void delete_front() {
    if (front == -1) {
        printf("Error: Queue is empty.\n");
        return;
    }

    if (front == rear) {
        front = -1;
        rear = -1;
    } else if (front == MAX_SIZE - 1) {
        front = 0;
    } else {
        front++;
    }
}

void delete_rear() {
    if (front == -1) {
        printf("Error: Queue is empty.\n");
        return;
    }

    if (front == rear) {
        front = -1;
        rear = -1;
    } else if (rear == 0) {
        rear = MAX_SIZE - 1;
    } else {
        rear--;
    }
}

void display() {
    if (front == -1) {
        printf("Error: Queue is empty.\n");
        return;
    }

    int i = front;

    if (i <= rear) {
        while (i <= rear) {
            printf("%d ", deque[i]);
            i++;
        }
    } else {
        while (i <= MAX_SIZE - 1) {
            printf("%d ", deque[i]);
            i++;
        }

        i = 0;

        while (i <= rear) {
            printf("%d ", deque[i]);
            i++;
        }
    }

    printf("\n");
}

int main() {
    int choice;

    while (1) {
        printf("1. Insert at front\n");
        printf("2. Insert at rear\n");
        printf("3. Delete from front\n");
        printf("4. Delete from rear\n");
        printf("5. Display\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                insert_front();
                break;
            case 2:
                insert_rear();
                break;
            case 3:
                delete_front();
                break;
            case 4:
                delete_rear();
                break;
            case 5:
                display();
                break;
            case 6:
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}