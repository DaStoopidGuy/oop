#include <iostream>
using namespace std;

class Engine {
    private:
        string make;
    public:
        Engine(): make("2NZ-FE") {}
        Engine(string m): make(m) {}

        void setmake(string m) {
            make = m;
        }

        string getmake() {
            return make;
        }
};

class Car {
    private:
        string company;
        string model;
        Engine engine;
    public:
        Car(): company("Toyota"), model("Corolla-GLI") {}

        Car(string c, string m, string e): company(c), model(m), engine(e) {}

        void setcompany(string c) {
            company = c;
        }
        void setmodel(string m) {
            model = m;
        }
        void setengine(Engine e) {
            engine = e;
        }

        string getcompany() {
            return company;
        }
        string getmodel() {
            return model;
        }
        Engine getengine() {
            return engine;
        }

        void display() {
            cout << "Car Details\n";
            cout << "-----------\n";
            cout << "Company: " << company << endl;
            cout << "Model: " << model << endl;
            cout << "Engine: " << engine.getmake() << endl;
        }
};

int main() {
    Car mycar;
    mycar.display();
    Car newcar("Toyota", "Cruiser", "V8");
    newcar.display();
    return 0;
}
