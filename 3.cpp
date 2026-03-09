#include <iostream>
using namespace std;
struct Student {
    string firstName;
    string lastName;
    int rollNumber;
    float marks;

    void displayStudentInfo() {
        cout << "Full Name: " << firstName << " " << lastName << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
    }
};
int main() {
    Student *ptr;
    ptr = new Student;
    ptr->firstName = "waqar";
    ptr->lastName = "malik";
    ptr->rollNumber = 30;
    ptr->marks = 70.5;
    ptr->displayStudentInfo();
    return 0;
}














