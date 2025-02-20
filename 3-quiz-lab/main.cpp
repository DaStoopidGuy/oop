#include <iostream>
using namespace std;

class Point {
    protected:
        int x;
        int y;
    public:
        // Constructors
        Point(): x(0), y(0) {}
        Point(int a, int b): x(a), y(b) {}

        // Destructor
        ~Point() {
            cout << "Point x: " << x << " y: " << y << " Destroyed !\n";
        }

        // setters
        void setx(int i) {
            x = i;
        }
        void sety(int i) {
            y = i;
        }
        // getters
        int getx() {
            return x;
        }
        int gety() {
            return y;
        }

        void input() {
            cout << "Point Input: \n";
            cout << "Enter x: ";
            cin >> x;
            cout << "Enter y: ";
            cin >> y;
        }

        void display() {
            cout << "Point Info:" << endl;
            cout << "X: " << x << endl;
            cout << "Y: " << y << endl;
        }
};

class ThreeDPoint: public Point {
    private:
        int z;
    public:
        ThreeDPoint(): z(0) {}
        ~ThreeDPoint() {
            cout << "ThreeDPoint X: " << x << " Y: " << y << " Z: " << z << " Destroyed!\n";
        }

        // setters
        void setz(int i) {
            z = i;
        }
        // getters
        int getz() {
            return z;
        }

        void input() {
            cout << "ThreeDPoint Input:\n";
            cout << "Enter x: ";
            cin >> x;
            cout << "Enter y: ";
            cin >> y;
            cout << "Enter z: ";
            cin >> z;
        }

        void display() {
            cout << "ThreeDPoint Info:" << endl;
            cout << "X: " << x << endl;
            cout << "Y: " << y << endl;
            cout << "Z: " << z << endl;
        }
};

int main() {
    // Create two points p1 @ (0, 0) and p2 @ (4, 7),
    Point p1;
    Point p2(4, 7);

    // ThreeDPoint p3 & take input
    ThreeDPoint p3;
    p3.input();

    // Print all points
    cout << "\nP1\n";
    p1.display();
    cout << "\nP2\n";
    p2.display();
    cout << "\nP3\n";
    p3.display();

    // move points
    p1.setx(3);
    p1.sety(6);

    p3.setx(2);
    p3.sety(7);
    p3.setz(5);
    cout << "Moved points\n";

    // Print all points again
    cout << "\nP1\n";
    p1.display();
    cout << "\nP2\n";
    p2.display();
    cout << "\nP3\n";
    p3.display();

    return 0;
}
