#include <iostream>
using namespace std;

class Point {
    private:
        int x, y;
    public:
        Point(): x(0), y(0) {}

        Point operator++ () {
            Point temp;
            temp.x = ++x;
            temp.y = y;
            return temp;
        }

        Point operator-- () {
            Point temp;
            temp.x = --x;
            temp.y = y;
            return temp;
        }

        Point operator++ (int) {
            Point temp;
            temp.x = x;
            temp.y = ++y;
            return temp;
        }

        Point operator-- (int) {
            Point temp;
            temp.x = x;
            temp.y = --y;
            return temp;
        }

        void print() {
            cout << "X: " << x << "\nY: " << y << "\n";
        }
};

int main() {
    Point p;
    p.print();

    cout << "after pre increment\n";
    ++p;
    p.print();

    cout << "after pre decrement\n";
    --p;
    p.print();

    cout << "after post increment\n";
    p++;
    p.print();

    cout << "after post decrement\n";
    p--;
    p.print();

    return 0;
}
