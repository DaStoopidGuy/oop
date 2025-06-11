#include <iostream>
using namespace std;

class Shape {
    protected:
        int color;
    public:
        // default shape color
        // WHITE = 15
        Shape(): color(15) {}
        Shape(int c): color(c) {}

        void setcolor(int c) {
            color = c;
        }

        int getcolor() {
            return color;
        }

        virtual void draw() = 0; // pure virtual function hehe
        // Shape class is now an abstract class
        // {
        //     cout << "Draw in shape class\n";
        // }

};

class Line: public Shape {
    private:
        int startx, starty;
        int endx, endy;
    public:
        // default line
        // start (0, 0) to 
        // end (639, 479)
        Line():
            startx(0), starty(0), endx(639), endy(479) {}

        Line(int stx, int sty, int ex, int ey, int col):
            startx(stx), starty(sty), endx(ex), endy(ey), Shape(col) {}

        void setstart(int x, int y) {
            startx = x;
            starty = y;
        }

        void setend(int x, int y) {
            endx = x;
            endy = y;
        }

        int getstartx() {
            return startx;
        }
        
        int getstarty() {
            return starty;
        }

        int getendx() {
            return endx;
        }
        
        int getendy() {
            return endy;
        }

        void draw() {
            cout << "Line from (" << startx << ", " << starty << ") to (" << endx << ", " << endy << ") of color " << color << "\n";
        }
};

class Circle: public Shape {
    private:
        int centerx, centery;
        int radius;
    public:
        // default circle
        // at (100, 150) of radius = 80
        // color = WHITE (15)
        Circle():
            centerx(100), centery(150), radius(80) {}

        Circle(int cx, int cy, int r, int col):
            centerx(cx), centery(cy), radius(r), Shape(col) {}

        void set(int x, int y, int r) {
            centerx = x;
            centery = y;
            radius = r;
        }

        void setcenterx(int x) {
            centerx = x;
        }

        void setcentery(int y) {
            centery = y;
        }

        void setradius(int r) {
            radius = r;
        }

        int getcenterx() {
            return centerx;
        }

        int getcentery() {
            return centery;
        }

        int getradius() {
            return radius;
        }

        void draw() {
            cout << "Circle drawn at (" << centerx << ", " << centery << ") of radius = " << radius << " and color = " << color << "\n";
        }
};

int main() {
    // Shape s; can not make object
    Line l1, l2(30, 40, 70, 80, 9);
    Circle c1, c2(150, 250, 100, 8);

    c1.draw();
    c2.draw();
    l1.draw();
    l2.draw();

    Shape *sp;
    // sp = &s;
    // sp->draw();

    sp = &l1;
    sp->draw();

    sp = &c2;
    sp->draw();

    // TASK 5
    // create 4 lines of different locations and different colors
    Line l3(100, 100, 200, 200, 1),
         l4(219, 439, 128, 438, 2),
         l5(438, 512, 434, 112, 3),
         l6(321, 321, 698, 469, 4);
    // create 5 circles of different locations, radii and colors
    Circle c3(110, 21, 43, 5),
           c4(2, 3, 44, 6),
           c5(433, 112, 43, 7),
           c6(20, 30, 12, 8),
           c7(324, 434, 122, 9);

    // array of length 9 shape *
    Shape *arr[9];
    arr[0] = &l3;
    arr[1] = &l4;
    arr[2] = &l5;
    arr[3] = &l6;
    arr[4] = &c3;
    arr[5] = &c4;
    arr[6] = &c5;
    arr[7] = &c6;
    arr[8] = &c7;

    cout << "Meow\n";
    // use for to to call draw()
    for (int i=0; i<9; i++) {
        arr[i]->draw();
    }

    return 0;
}
