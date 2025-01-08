#include <stdio.h>

void enqueue(int queue[], int *front, int *rear, int size);
void dequeue(int queue[], int *front, int *rear);
void display(int queue[], int front, int rear);
void menu();

int main() {
    int size = 10; // Queue size variable
    int queue[size];
    int front = -1, rear = -1;
    int choice;

    while (1) {
        menu();
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                enqueue(queue, &front, &rear, size);
                break;
            case 2:
                dequeue(queue, &front, &rear);
                break;
            case 3:
                display(queue, front, rear);
                break;
            case 4:
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
}

void menu() {
    printf("Menu:\n");
    printf("1. Enqueue (Insert)\n");
    printf("2. Dequeue (Remove)\n");
    printf("3. Display\n");
    printf("4. Exit\n");
}

void enqueue(int queue[], int *front, int *rear, int size) {
    if (*rear == size - 1) {
        printf("Queue Overflow!\n");
    } else {
        if (*front == -1) {
            *front = 0; // First element inserted
        }
        int value;
        printf("Enter value to enqueue: ");
        scanf("%d", &value);
        (*rear)++;
        queue[*rear] = value;
        printf("%d enqueued into queue.\n", value);
    }
}

void dequeue(int queue[], int *front, int *rear) {
    if (*front == -1 || *front > *rear) {
        printf("Queue Underflow!\n");
    } else {
        int value = queue[*front];
        (*front)++;
        printf("%d dequeued from queue.\n", value);
    }
}

void display(int queue[], int front, int rear) {
    if (front == -1 || front > rear) {
        printf("Queue is empty.\n");
    } else {
        printf("Queue elements:\n");
        for (int i = front; i <= rear; i++) {
            printf("%d\n", queue[i]);
        }
    }
}
