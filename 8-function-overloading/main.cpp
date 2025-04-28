#include <iostream>
using namespace std;

class Test {
    public:
        void fn(int i);
        void fn(char c);
        void fn(int a, char b);
        void fn(char a, int b);

        void fn2(float f);
        void fn2(string s);
        void fn2(float f, string s);
        void fn2(string s, float f);
};

void Test::fn(int i) {
    cout << "fn int version\n";
}
void Test::fn(char c) {
    cout << "fn char version\n";
}
void Test::fn(int a, char b) {
    cout << "fn (int, char) version\n";
}
void Test::fn(char a, int b) {
    cout << "fn (char, int) version\n";
}

void Test::fn2(float f) {
    cout << "fn2 float version\n";
}
void Test::fn2(string s) {
    cout << "fn2 string version\n";
}
void Test::fn2(float f, string s) {
    cout << "fn2 (float, string) version\n";
}
void Test::fn2(string s, float f) {
    cout << "fn2 (string, float) version\n";
}

int main() {
    Test t;
    t.fn(12);
    t.fn('a');
    t.fn(12, 'a');
    t.fn('a', 12);

    t.fn2(3.14);
    t.fn2("hi");
    t.fn2(3.14, "hi");
    t.fn2("hi", 3.14);

    return 0;
}
