#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string note;
    int choice;

    cout << "===== NOTE PROGRAM =====" << endl;
    cout << "1. Write a note" << endl;
    cout << "2. Read the note" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    cin.ignore();

    if (choice == 1)
    {
        cout << "Enter your note: ";
        getline(cin, note);

        ofstream file("note.txt");
        file << note;
        file.close();

        cout << "Note saved successfully." << endl;
    }
    else if (choice == 2)
    {
        ifstream file("note.txt");

        getline(file, note);

        cout << "Your note is: " << endl;
        cout << note << endl;

        file.close();
    }
    else
    {
        cout << "Wrong choice!" << endl;
    }

    return 0;
}
