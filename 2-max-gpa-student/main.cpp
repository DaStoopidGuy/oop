#include <iostream>
using namespace std;

class Student {
    private:
        int roll;
        string name;
        float cgpa;
    public:
        // Default Constructor
        Student(): roll(0), name(""), cgpa(0) {}

        // Parameterized Constructor
        Student(int pRoll, string pName, float pCgpa)
            : roll(pRoll)
            , name(pName)
            , cgpa(pCgpa)
        {}

        // Getters
        int get_roll() {
            return roll;
        }
        string get_name() {
            return name;
        }
        float get_cgpa() {
            return cgpa;
        }

        // Setters
        void set_roll(int pRoll) {
            roll = pRoll;
        }
        void set_name(string pName) {
            name = pName;
        }
        void set_cgpa(float pCgpa) {
            cgpa = pCgpa;
        }

        void input() {
            cout << "Enter roll# ";
            cin >> roll;
            cout << "Enter name: ";
            getline(cin, name);
            cout << "Enter cgpa= ";
            cin >> cgpa;
        }

        void display() {
            cout << "Student Info:" << endl;
            cout << "Roll# " << roll << endl;
            cout << "Name: " << name << endl;
            cout << "CGPA= " << cgpa << endl;
        }

};

int main() {
    Student s1(101, "Shake Talha", 6.9);
    Student s2(102, "Muhammad Asfand", 3.4);
    Student s3(103, "Aujnaj Beras", 3.9);

    // compare students for max gpa
    Student topper = s1;

    if (s2.get_cgpa() > topper.get_cgpa())
    {
        topper.set_roll(s2.get_roll());
        topper.set_name(s2.get_name());
        topper.set_cgpa(s2.get_cgpa());
    }
    if (s3.get_cgpa() > topper.get_cgpa())
    {
        topper.set_roll(s3.get_roll());
        topper.set_name(s3.get_name());
        topper.set_cgpa(s3.get_cgpa());
    }

    cout << "Student who got max CGPA:\n";
    topper.display();

    return 0;
}
