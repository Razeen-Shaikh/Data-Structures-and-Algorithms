import java.util.Scanner;

class Stack {
    private static int top = -1;
    private static int size = 4; // Fixed Size
    private static int[] s = new int[4];

    static Scanner sc = new Scanner(System.in);

    static void push() {
        int element;
        if(top == size - 1) {
            System.out.println("Push not Possible");
        } else {
            System.out.println("Enter the element");
            element = sc.nextInt();
            ++top;
            s[top] = element;
        }
    }
    
    static void pop() {
        if(top == -1) {
            System.out.println("Pop not posiible");
        } else {
            System.out.println("Element deleted is " + s[top]);
            --top;
        }
    }
    
    static void display() {
        int i;
        if(top == -1) {
            System.out.println("Display not possible");
        } else {
            for(i = top; i >= 0; i--) {
                System.out.println(s[i]);
            }
        }
    }

    public static void main(String[] args) {
        int choice;

        while(true) {
            System.out.println("Press 1 to push");
            System.out.println("Press 2 to pop");
            System.out.println("Press 3 to display");
            System.out.println("Press any key to stop");
            choice = sc.nextInt();
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
                return;
            }
        }
    }
}