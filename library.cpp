#include<iostream>
#include<string>
#include<ctime>       //sir said to use this library
using namespace std;

int main()
{
    int book_counter = 0, date, month, isdate, ismonth;
    string user_name, book_name;
    bool check = false;
    cout << "Enter Your Name To Access our Library System: ";
    getline(cin, user_name);
    cout << "Enter the current date and month:";
    cin >> date >> month;


    while (check == false)
    {
        cout << "LIBRARY";
        cout << "\n\n--------------";

        cout << "\nBooks\n";
        cout << "\nBorrow (0)";
        cout << "\nReturn (1)";
        cout << "\nFine   (2)";
        cout << "\nQuit   (3)";
        cout << "\nYour Choice: ";
        int choice;
        cin >> choice;
        if (choice == 0)
        {
            cout << "\nBorrow Section";
            cout << "\nNotice Board :  > Book can only be borrowed for 15 days only";
            cout << "\n                > Limit per Student is 1 books";
            cout << "\n\nBook Borrowed = " << book_counter;
            if (book_counter <= 3)
            {
                cout << "\nType book name to issue : ";
                cin.ignore();
                getline(cin, book_name);
                cout << "\nThe Book \"" << book_name << "\" has been issued to " << user_name << endl;
                book_counter++;
                cout << "Due Date " << date << "/" << month << endl;
            }
        }
        else if (choice == 1)
        {
            cout << "\nReturn Section";
        }
        else if (choice == 2)
        {
            cout << "Fine Check";
        }
        else if (choice == 3)
        {
            return 0;
        }
        else
        {
            cout << "You Entered A Wrong Choice\n\n";
            check = false;
        }
    }
    return 0;
}