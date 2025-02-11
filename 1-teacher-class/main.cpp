/*
 * Define a class to respresent and object of
 * Teachers in an institution
 * Attributes:
 * -name  -father name  -id  -salary
 *  Write getters, setters, input, output methods
 *
 *  Create objects t1, t2, t3
 *  Assign values to attributes of t1 and t2
 *  Input values for t3 attributes
 *  Print values of all attributes on screen
 */
#include <iostream>
using namespace std;

class Teacher {
    private:
        string name, father_name;
        int id, salary;
    public:
        // Setters
        void set_name(string str) {
            name = str;
        }
        void set_father_name(string str) {
            father_name = str;
        }
        void set_id(int i) {
            id = i;
        }
        void set_salary(int i) {
            salary = i;
        }
        // Getters
        string get_name() {
            return name;
        }
        string get_father_name() {
            return father_name;
        }
        int get_id() {
            return id;
        }
        int get_salary() {
            return salary;
        }
        // Input
        void input_name() {
            cout << "Enter name: ";
            cin >> name;
        }
        void input_father_name() {
            cout << "Enter father name: ";
            cin >> father_name;
        }
        void input_id() {
            cout << "Enter id: ";
            cin >> id;
        }
        void input_salary() {
            cout << "Enter salary: ";
            cin >> salary;
        }
        // Output
        void output_name() {
            cout << "Name = " << name << endl;
        }
        void output_father_name() {
            cout << "Father name = " << father_name << endl;
        }
        void output_id() {
            cout << "ID = " << id << endl;
        }
        void output_salary() {
            cout << "Salary = " << salary << endl;
        }
        // Display
        void display() {
            output_name();
            output_father_name();
            output_id();
            output_salary();
        }
};

int main() {
    // Create objects t1, t2, t3
    Teacher t1, t2, t3;

    // Assign values to attributes of t1 and t2
    t1.set_name("Ali");
    t1.set_father_name("Asghar");
    t1.set_id(101);
    t1.set_salary(45000);
    t2.set_name("Bilal");
    t2.set_father_name("Ahmad");
    t2.set_id(102);
    t2.set_salary(53860);

    // Input values for t3
    t3.input_name();
    t3.input_father_name();
    t3.input_id();
    t3.input_salary();

    // Print values of all attributes on screen
    cout << "\nTeacher 1" << endl;
    t1.display();
    cout << "\nTeacher 2" << endl;
    t2.display();
    cout << "\nTeacher 3" << endl;
    t3.display();

    return 0; 
}
