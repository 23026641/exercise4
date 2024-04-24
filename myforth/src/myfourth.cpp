
            #include <iostream>
//fistly i need a menu with points so that a user can choose an option
using namespace std;

// i have to display my menu...
void displayMenu();#

void performOperation(int choose, int num1, int num2);

int main() {
    int choose, num1, num2;
    char cont;

    do {
        // my code has to display menu
        displayMenu();

        // i have to get what the user is asking for
        cout << "Enter a number that correspond with the mathematics you want to do: ";
        cin >> choose;

        // Get two integers from user
        cout << "Enter first integer: ";
        cin >> num1;
        cout << "Enter second integer: ";
        cin >> num2;

        // Perform the selected operation
        performOperation(choose, num1, num2);

        // Ask user if they want to continue
        cout << "Do you want to continue? (y/Y): ";
        cin >> cont;

    } while (cont == 'y' || cont == 'Y');

    return 0;
}

// Function to display the menu
void displayMenu() {
    cout << "Menu\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
}

// Function to perform the selected operation
void performOperation(int choose, int num1, int num2) {
    switch(choose) {
        case 1:
            cout << "Result: " << num1 + num2 << endl;
            break;
        case 2:
            cout << "Result: " << num1 - num2 << endl;
            break;
        case 3:
            cout << "Result: " << num1 * num2 << endl;
            break;
        case 4:
            if(num2 == 0) {
                cout << "The second integer is zero, divide by zero" << endl;
            } else {
                cout << "Result: " << num1 / num2 << endl;
            }
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
    }
}
