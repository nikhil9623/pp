#include <iostream> 
using namespace std; 
 
#define MAX 5   // fixed macro name 
 
// No need for template here 
bool isFull(int top) { 
    return top == MAX - 1; 
} 
 
bool isEmpty(int top) { 
    return top == -1; 
} 
 
template <class T> 
void push(T stack[], int &top, T value) { 
    if (isFull(top)) { 
        cout << "Overflow\n"; 
        return; 
    } 
    stack[++top] = value; 
} 
 
template <class T> 
void pop(T stack[], int &top) { 
    if (isEmpty(top)) { 
        cout << "Underflow\n"; 
        return; 
    } 
    cout << "Popped: " << stack[top--] << endl; 
} 
 
template <class T> 
void display(T stack[], int top) { 
    if (isEmpty(top)) { 
        cout << "Empty\n"; 
        return; 
    } 
    for (int i = top; i >= 0; i--) { 
        cout << stack[i] << " "; 
    } 
    cout << endl; 
} 
 
int main() { 
    int type; 
 
    cout << "Select Stack Type:\n1. Integer Stack\n2. Character Stack\nEnter choice: "; 
    cin >> type; 
 
    if (type == 1) { 
        int stack[MAX], top = -1, val; 
        int choice; 
 
        do { 
            cout << "\nOperations:\n1.Push 2.Pop 3.Display 4.Exit\nEnter choice: "; 
            cin >> choice; 
 
            switch (choice) { 
                case 1: 
                    cout << "Enter value to push: "; 
                    cin >> val; 
                    push(stack, top, val); 
                    break; 
                case 2: 
                    pop(stack, top); 
                    break; 
                case 3: 
                    display(stack, top); 
                    break; 
                case 4: 
                    cout << "Exiting Integer Stack.\n"; 
                    break; 
                default: 
                    cout << "Invalid operation! Try again.\n"; 
            } 
        } while (choice != 4); 
 
    } else if (type == 2) { 
        char stack[MAX], val; 
        int choice; 
        int top = -1; 
 
        do { 
            cout << "\nOperations:\n1.Push 2.Pop 3.Display 4.Exit\nEnter choice: "; 
            cin >> choice; 
 
            switch (choice) { 
                case 1: 
                    cout << "Enter value to push: "; 
                    cin >> val; 
                    push(stack, top, val); 
                    break; 
                case 2: 
                    pop(stack, top); 
                    break; 
                case 3: 
                    display(stack, top); 
                    break; 
                case 4: 
                    cout << "Exiting Character Stack.\n"; 
                    break; 
                default: 
                    cout << "Invalid operation! Try again.\n"; 
            } 
        } while (choice != 4); 
 
    } else { 
        cout << "Invalid stack type! Try again.\n"; 
    } 
 
    return 0; 
} 
