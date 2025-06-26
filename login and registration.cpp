#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void registerUser() {
    string username, password;
    cout << "Enter new username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;

    ofstream file(username + ".txt");
    file << username << endl << password;
    file.close();
    cout << "Registration successful!\n";
}

void loginUser() {
    string username, password, u, p;
    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;

    ifstream file(username + ".txt");
    if (!file) {
        cout << "User not found!\n";
        return;
    }

    getline(file, u);
    getline(file, p);

    if (u == username && p == password) {
        cout << "Login successful!\n";
    } else {
        cout << "Invalid credentials!\n";
    }
    file.close();
}

int main() {
    int choice;
    cout << "1. Register\n2. Login\nChoose option: ";
    cin >> choice;

    if (choice == 1)
        registerUser();
    else if (choice == 2)
        loginUser();
    else
        cout << "Invalid option\n";

    return 0;
}