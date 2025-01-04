#include <stdio.h>

int main() {
    int queue[10];
    int front = -1, rear = -1;
    int choice, value;

    while (1) {
        printf("Menu:\n");
        printf("1. Enqueue (Insert)\n");
        printf("2. Dequeue (Remove)\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (rear == 9) {
                    printf("Queue Overflow!\n");
                } else {
                    if (front == -1) {
                        front = 0; // First element inserted
                    }
                    printf("Enter value to enqueue: ");
                    scanf("%d", &value);
                    rear++;
                    queue[rear] = value;
                    printf("%d enqueued into queue.\n", value);
                }
                break;

            case 2:
                if (front == -1 || front > rear) {
                    printf("Queue Underflow!\n");
                } else {
                    value = queue[front];
                    front++;
                    printf("%d dequeued from queue.\n", value);
                }
                break;

            case 3:
                if (front == -1 || front > rear) {
                    printf("Queue is empty.\n");
                } else {
                    printf("Queue elements:\n");
                    for (int i = front; i <= rear; i++) {
                        printf("%d\n", queue[i]);
                    }
                }
                break;

            case 4:
                return 0;

            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}
