#include <iostream>
#include <string>
using namespace std;

class Student {
    private:
        string name;
        int rollno;
        float cgpa;

    public:
        Student(string n, int roll): name(n), rollno(roll), cgpa(0) {
            cout << "Student(string, int) constructor\n";
        }

        Student(string n, int roll, float gpa): name(n), rollno(roll), cgpa(gpa) {
            cout << "Student(string, int, float) constructor\n";
        }

        ~Student() {
            cout << "Student object destroyed\n";
        }

        // setters
        void setname(string n) {
            name = n;
        }
        void setrollno(int roll) {
            rollno = roll;
        }
        void setcgpa(float gpa) {
            cgpa = gpa;
        }

        // getters
        string getname() {
            return name;
        }
        int getrollno() {
            return rollno;
        }
        float getcgpa() {
            return cgpa;
        }

        void set(string n, int roll, float gpa) {
            name = n;
            rollno = roll;
            cgpa = gpa;
        }

        void input() {
            cout << "Student input:\n";
            cout << "Enter name: ";
            getline(cin, name);
            cout << "Enter rollno: ";
            cin >> rollno;
            cout << "Enter CGPA: ";
            cin >> cgpa;
        }

        void print() {
            cout << "Student info:\n";
            cout << "Name:\t" << name << endl;
            cout << "Roll#\t" << rollno << endl;
            cout << "CGPA=\t" << cgpa << endl;
        }
};

int main() {
    // Create 4 Student objects s1, s2, s3 and s4
    Student s1("Ali", 1001, 3.5);
    Student s2("Hina", 1002, 3.7);
    Student s3("Kamran", 1003);
    Student s4("Ahmad", 1004);

    // print all details of S1 - S4
    cout << "\nPrinting before updating\n";
    cout << "---\ns1 ";
    s1.print();
    cout << "---\ns2 ";
    s2.print();
    cout << "---\ns3 ";
    s3.print();
    cout << "---\ns4 ";
    s4.print();

    // update
    // gpa of s1 to 3.3
    s1.setcgpa(3.3);
    // gpa of s4 -> 3.2
    s4.setcgpa(3.2);
    // name of s4 -> "Ahmed"
    s4.setname("Ahmed");

    // print all details of S1 - S4
    cout << "\nPrinting after updating\n";
    cout << "---\ns1 ";
    s1.print();
    cout << "---\ns2 ";
    s2.print();
    cout << "---\ns3 ";
    s3.print();
    cout << "---\ns4 ";
    s4.print();

    cout << "\n";
    return 0;
}
