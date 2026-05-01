#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int main() {
    int n, i, x, count = 0;
    scanf("%d", &n);

    struct Node *head = NULL, *temp = NULL, *newNode;

    for(i = 0; i < n; i++) {
        scanf("%d", &x);

        newNode = (struct Node*)malloc(sizeof(struct Node));
        newNode->data = x;
        newNode->next = NULL;

        if(head == NULL) {
            head = newNode;
            temp = newNode;
        } else {
            temp->next = newNode;
            temp = newNode;
        }
    }

    temp = head;

    while(temp != NULL) {
        count++;
        temp = temp->next;
    }

    printf("%d", count);

    return 0;
}
