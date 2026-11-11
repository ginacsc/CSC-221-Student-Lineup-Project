#include <iostream>
#include <string>
#include <fstream>
using namespace std;


int main() {

    int studentCount = 0;
    string firstName;
    string lastName;
    string currentName;

    ifstream studentFile("Alphabetical.txt");

    if (!studentFile) {
        cout << "Error opening the file." << endl;
        return 1;
    }

    while (studentFile >> currentName) {

        studentCount++;

        if (studentCount == 1) {
            firstName = currentName;
            lastName = currentName;
        }
        else {
            if (currentName < firstName) {
                firstName = currentName;
            }
            if (currentName > lastName) {
                lastName = currentName;
            }
        }
    }

    studentFile.close();

    cout << "Number of Students: " << studentCount << endl;
    cout << "Alphabetically First Name: " << firstName << endl;
    cout << "Alphabetically Last Name: " << lastName << endl;

    return 0;

}