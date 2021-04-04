#include <stdio.h>
#include <stdlib.h>

int top = -1;
int size = 4; // Fixed Size
int s[4];

void push() {
    int element;
    if(top == size - 1) {
        printf("Push not Possible");
    } else {
        printf("Enter the element\n");
        scanf("%d", &element);
        ++top;
        s[top] = element;
    }
}

void pop() {
    if(top == -1) {
        printf("Pop not posiible");
    } else {
        printf("Element deleted is %d \n", s[top]);
        --top;
    }
}

void display() {
    int i;
    if(top == -1) {
        printf("Display not possible \n");
    } else {
        for(i = top; i >= 0; i--) {
            printf("%d \n", s[i]);
        }
    }
}

int main() {
    int choice;

    while(1) {
        printf("Press 1 to push \n");
        printf("Press 2 to pop \n");
        printf("Press 3 to display \n");
        printf("Press any key to stop \n");
        scanf("%d", &choice);
        switch (choice) {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        default:
            exit(0);
            break;
        }
    }
}