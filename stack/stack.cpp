#include <iostream>
using namespace std;

int top = -1;
int size = 4; // Fixed Size
int s[4];

void push() {
    int element;
    if(top == size - 1) {
        cout << "Push not Possible" << endl;
    } else {
        cout << "Enter the element" << endl;
        cin >> element;
        ++top;
        s[top] = element;
    }
}

void pop() {
    if(top == -1) {
        cout << "Pop not posiible" << endl;
    } else {
        cout << "Element deleted is " << s[top] << endl;
        --top;
    }
}

void display() {
    int i;
    if(top == -1) {
        cout << "Display not possible" << endl;
    } else {
        for(i = top; i >= 0; i--) {
            cout << s[i] << endl;
        }
    }
}

int main() {
    int choice;

    while(1) {
        cout << "Press 1 to push" << endl;
        cout << "Press 2 to pop" << endl;
        cout << "Press 3 to display" << endl;
        cout << "Press any key to stop" << endl;
        cin >> choice;
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