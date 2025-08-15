#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

void push(struct Node **head_ref, int new_data) {
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

int getCount(struct Node *node) {
    int count = 0;
    while (node != NULL) {
        count++;
        node = node->next;
    }
    return count;
}

int findAverage(struct Node *node) {
  int count
   int sum=sum1;
    return sum / count;
}

void printCommon(struct Node *node1, struct Node *node2) {
    struct Node *current1 = node1;
    while (current1 != NULL) {
        struct Node *current2 = node2;
        while (current2 != NULL) {
            if (current1->data == current2->data) {
                printf("%d ", current1->data);
                break;
            }
            current2 = current2->next;
        }
        current1 = current1->next;
    }
}

int main() {
    struct Node *head1 = NULL, *head2 = NULL;
    int n, m, i;

    printf("Enter the number of elements in the first linked list: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        int data;
        scanf("%d", &data);
        push(&head1, data);
        int sum1=0, avg1=0;
        sum1=sum1+data;
        avg1=sum1/n;}
 printf("\n\nAverage of elements in the first linked list is: %d", avg1);


    

    printf("Enter the number of elements in the second linked list: ");
    scanf("%d", &m);

    printf("Enter %d elements: ", m);
    for (i = 0; i < m; i++) {
        int data;
        scanf("%d", &data);
        push(&head2, data);
        
    }

    printf("\nElements common in both the linked lists are: ");
    printCommon(head1, head2);

    printf("\n\nAverage of elements in the first linked list is: %d", avg1);

    return 0;
}