#include <stdio.h>
#include <stdlib.h>

struct Node
{
	int data;
	struct Node *link;
};

struct Node *first = NULL;

void insert_front() {
	int element;
    struct Node* p;
	p = (struct Node*) malloc(sizeof(struct Node));

	printf("Enter an element \n");
	scanf("%d", &element);

	p->data = element;
	p->link = NULL;

	if(first == NULL) {
		first = p;
	} else {
		p->link = first;
		first = p;
	}
}

void insert_rear() {
	int element;
	struct Node *p, *temp;
	p = malloc(sizeof(struct Node));

	printf("Enter an element \n");
	scanf("%d", &element);

	p->data = element;
	p->link = NULL;

	if(first == NULL) {
		first = p;
	} else {
		temp = first;
		while (temp->link != NULL) {
			temp = temp->link;
		}
		temp->link = p;
		
	}
}

void delete_front() {
	struct Node* x;

	if(first == NULL) {
		printf("LinkedList is empty \n");
	} else if(first->link == NULL) {
		printf("Element deleted is %d \n", first->data);
		free(first);
		first = NULL;
	} else {
		printf("Element deleted is %d \n", first->data);
		x = first;
		first = first->link;
		free(x);
	}
}

void delete_rear() {
	struct Node* temp;

	if(first == NULL) {
		printf("LinkedList is empty \n");
	} else if(first->link == NULL) {
		printf("Element deleted is %d \n", first->data);
		free(first);
		first = NULL;
	} else {
		temp = first;
		while (temp->link->link != NULL) {
			temp = temp->link;
		}
		printf("Element deleted is %d \n", temp->link->data);
		free(temp->link);
		temp->link = NULL;
	}
}

void display() {
	struct Node* temp;

	if(first == NULL) {
		printf("LinkedList is empty \n");
	} else if(first->link == NULL) {
		printf("%d \n", first->data);
	} else {
		temp = first;
		while (temp != NULL) {
			printf("%d \t", temp->data);
			temp = temp->link;
		}
		printf("\n")
	}
}

int main() {
    int choice;

    while(1) {
        printf("Press 1 to insert at front \n");
		printf("Press 2 to insert at rear \n");
		printf("Press 3 to delete from front \n");
        printf("Press 4 to delete from rear \n");
        printf("Press 5 to display \n");
        printf("Press any key to stop \n");
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
        default:
            exit(0);
            break;
        }
    }
}