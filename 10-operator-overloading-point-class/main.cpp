#include <iostream>
using namespace std;

class Point {
    private:
        int x, y;
    public:
        Point(): x(0), y(0) {}
        Point(int a, int b): x(a), y(b) {}

        // binary operator overloading
        // arithmetic operators
        Point operator +(Point p);
        Point operator -(Point p);
        Point operator *(Point p);
        Point operator /(Point p);

        // relational operators
        bool operator <(Point p);
        bool operator >(Point p);
        bool operator <=(Point p);
        bool operator >=(Point p);
        bool operator ==(Point p);
        bool operator !=(Point p);

        // BONUS: insertion/extraction operators
        friend ostream& operator <<(ostream& out, Point& p);
        friend istream& operator >>(istream& in, Point& p);
};

Point Point::operator+(Point p) {
    int rx = x + p.x;
    int ry = y + p.y;
    return Point(rx, ry);
}

Point Point::operator-(Point p) {
    int rx = x - p.x;
    int ry = y - p.y;
    return Point(rx, ry);
}

Point Point::operator*(Point p) {
    int rx = x * p.x;
    int ry = y * p.y;
    return Point(rx, ry);
}

Point Point::operator/(Point p) {
    int rx = x / p.x;
    int ry = y / p.y;
    return Point(rx, ry);
}

bool Point::operator <(Point p) {
    return (x < p.x) && (y < p.y);
}

bool Point::operator >(Point p) {
    return (x > p.x) && (y > p.y);
}

bool Point::operator <=(Point p) {
    return (x <= p.x) && (y <= p.y);
}

bool Point::operator >=(Point p) {
    return (x >= p.x) && (y >= p.y);
}

bool Point::operator ==(Point p) {
    return (x == p.x) && (y == p.y);
}

bool Point::operator !=(Point p) {
    return (x != p.x) && (y != p.y);
}

ostream& operator <<(ostream& out, Point& p) {
    out << "X: " << p.x << " - Y: " << p.y;
    return out;
}

istream& operator >>(istream& in, Point& p) {
    in >> p.x >> p.y;
    return in;
}

int main() {
    Point a(10, 21);

    cout << "Enter x, y: ";
    cin >> a;

    cout << "A point: " << a << endl;
    return 0;
}
