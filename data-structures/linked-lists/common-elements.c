#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure for Ticket counter
typedef struct ticket_counter {
    char name[50];
    int age;
    int rink;
    struct ticket_counter *next;
} TicketCounter;

// Function to add new person to the counter
void addPerson(TicketCounter **head_ref, char *name, int age) {
    TicketCounter *new_node = (TicketCounter *)malloc(sizeof(TicketCounter));
    strcpy(new_node->name, name);
    new_node->age = age;
    new_node->rink = (*head_ref)->rink + 1;
    new_node->next = *head_ref;
    *head_ref = new_node;
}

// Function to remove person after issuing ticket
void removePerson(TicketCounter **head_ref) {
    if (*head_ref == NULL)
        return;
    TicketCounter *temp = *head_ref;
    *head_ref = (*head_ref)->next;
    free(temp);
}

// Function to display ticket details
void displayTicketDetails(TicketCounter *head) {
    printf("Rink\tName\tAge\n");
    printf("%d\t%s\t%d\n", head->rink, head->name, head->age);
}

int main() {
    TicketCounter *head = NULL;
    char name[50];
    int age;
    int n;

    // Initially linked list is empty
    printf("Enter the number of people: ");
    scanf("%d", &n);

    // Iterate through each person
    for (int i = 0; i < n; i++) {
        printf("Enter the name of person %d: ", i + 1);
        scanf("%s", name);
        printf("Enter the age of person %d: ", i + 1);
        scanf("%d", &age);

        // Add new person to the counter
        addPerson(&head, name, age);

        // Display ticket details
        displayTicketDetails(head);

        // Remove person after issuing ticket
        removePerson(&head);
    }

    return 0;
}
