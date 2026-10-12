#include <iostream>
using namespace std;
int main()
{
    cout << "Student Grade System" << endl;
    cout << "Welcome to our group project!" << endl;
    cout << "\nMAIN MENU" << endl;
    cout << "1. View About" << endl;
    cout << "2. View Students" << endl;
    cout << "3. Exit" << endl;
    cout << "Enter your choice: ";

    int choice;
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "You chose to view about." << endl;
        cout << "This project is developed for CS0053 as an activity to learn collaboration in Git and GitHub." break;
    case 2:
        cout << "You chose to view students." << endl;
        cout << "Nothing to view here. Exiting the program." << endl;
        break;
    case 3:
        cout << "Exiting the program." << endl;
        break;
    default:
        cout << "Invalid choice. Please try again." << endl;
    }
    return 0;
}