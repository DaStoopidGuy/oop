#include <iostream>
using namespace std;

class Fan {
    private:
        bool power;
    public:
        Fan(): power(false) {
            cout << "Fan() default constructor\n";
        }

        Fan(bool p): power(p) {
            cout << "Fan(bool) parameterized constructor\n";
        }

        ~Fan() {
            cout << "Fan object destroyed\n";
        }

        void on() {
            power = true;
        }

        void off() {
            power = false;
        }

        void printstatus() {
            if (power)
                cout << "Power is ON\n";
            else
                cout << "Power is OFF\n";
        }

        bool getstatus() {
            return power;
        }
};

class SFan: public Fan {
    private:
        int speed; // 1 = Low
                   // 2 = Medium
                   // 3 = High
    public:
        SFan(): speed(1) {
            cout << "SFan() default constructor\n";
        }

        SFan(int spd): speed(spd) {
            cout << "SFan(int) parameterized constructor\n";

            if (spd > 3)
                speed = 3;
            else if (spd < 1)
                speed = 1;
        }

        SFan(bool pwr, int spd): Fan(pwr), speed(spd) {
            cout << "SFan(bool, int) parameterized constructor\n";

            if (spd > 3)
                speed = 3;
            else if (spd < 1)
                speed = 1;
        }

        ~SFan() {
            cout << "SFan object destroyed\n";
        }

        void speedinc() {
            speed++;
            if (speed > 3)
                speed = 3;
        }

        void speeddec() {
            speed--;
            if (speed < 1)
                speed = 1;
        }

        void printspeed() {
            cout << "Speed is ";
            if (speed == 1) cout << "Low\n";
            else if (speed == 2) cout << "Medium\n";
            else if (speed == 3) cout << "High\n";
            else cout << "Invalid\n";
        }
};

class RSFan: public SFan {
    private:
        bool rotate;
    public:
        RSFan(): rotate(false) {
            cout << "RSFan default constructor\n";
        }

        RSFan(bool pwr, int spd, bool rot) : SFan(pwr, spd), rotate(rot) {
            cout << "RSFan(bool, int, bool) parameterized constructor\n";
        }

        ~RSFan() {
            cout << "RSFan object destroyed\n";
        }

        void rotateon() {
            rotate = true;
        }

        void rotateoff() {
            rotate = false;
        }

        void printrotationstatus() {
            cout << "Rotation is ";
            if (rotate)
                cout << "ON\n";
            else
                cout << "OFF\n";
        }
};

void flippower(Fan& f) {
    bool power = f.getstatus();
    if (power == true)
        f.off();
    else
        f.on();
}

void flippower(SFan& f) {
    bool power = f.getstatus();
    if (power == true)
        f.off();
    else
        f.on();
}

void flippower(RSFan& f) {
    bool power = f.getstatus();
    if (power == true)
        f.off();
    else
        f.on();
}

int main() {
    // Create 3 Fans: f1, f2 and f3.  
    // f1 -> off  
    // f2, f3 -> on  
    Fan f1, f2(true), f3(true);

    // Print status of f1, f2 and f3.
    cout << "Fan Statuses:\n";
    cout << "f1: ";
    f1.printstatus();
    cout << "f2: ";
    f2.printstatus();
    cout << "f3: ";
    f3.printstatus();

    cout << endl;

    // Turn on f1.
    // Turn off f3.
    flippower(f1);
    flippower(f3);

    // Print status of f1, f2 and f3 again.
    cout << "Fan Statuses Again:\n";
    cout << "f1: ";
    f1.printstatus();
    cout << "f2: ";
    f2.printstatus();
    cout << "f3: ";
    f3.printstatus();

    cout << endl;

    // Create 3 objects of SFan:
    // sf1, sf2 and sf3.
    // sf1 -> on, low speed
    // sf2 -> off, medium speed
    // sf3 -> off, low speed
    SFan sf1(true, 1), sf2(2), sf3;

    // Print speed and status of sf1, sf2 and sf3.
    cout << "SFan speed and statuses:\n";

    cout << "sf1: ";
    sf1.printspeed();
    cout << "sf1: ";
    sf1.printstatus();

    cout << "sf2: ";
    sf2.printspeed();
    cout << "sf2: ";
    sf2.printstatus();

    cout << "sf3: ";
    sf3.printspeed();
    cout << "sf3: ";
    sf3.printstatus();

    cout << endl;

    // Turn off sf1 & decrease its speed once.
    // Turn off sf2 & increase its speed twice.
    // Increase speed of sf3 once.
    flippower(sf1);
    sf1.speeddec();

    flippower(sf2);
    sf2.speedinc();
    sf2.speedinc();

    sf3.speedinc();

    // Print speed and status of sf1, sf2 & sf3 again.
    cout << "SFan speed and statuses, Again:\n";

    cout << "sf1: ";
    sf1.printspeed();
    cout << "sf1: ";
    sf1.printstatus();

    cout << "sf2: ";
    sf2.printspeed();
    cout << "sf2: ";
    sf2.printstatus();

    cout << "sf3: ";
    sf3.printspeed();
    cout << "sf3: ";
    sf3.printstatus();

    cout << endl;

    // create 4 objects of RSFan
    // rsf1, rsf2, rsf3 & rsf4
    // with the following states:
    // - rsf1 = on, low speed, rotation off
    // - rsf2 = off, low speed, rotation off
    // - rsf3 = on, med speed, rotation on
    // - rsf4 = on, high speed, rotation on
    RSFan rsf1(true, 1, false);
    RSFan rsf2;
    RSFan rsf3(true, 2, true);
    RSFan rsf4(true, 3, true);

    // turn off rsf1 and turn its rotation on.
    flippower(rsf1);
    rsf1.rotateon();
    // increase speed of rsf2, once.
    rsf2.speedinc();
    // decrease speed of rsf3, twice and turn its rotation off.
    rsf3.speeddec();
    rsf3.speeddec();
    rsf3.rotateoff();
    // turn rotation of rsf4, off and power it off.
    rsf4.rotateoff();
    flippower(rsf4);

    // print complete details of (power, speed & rotation)
    // of rsf1, rsf2, rsf3 & rsf4 on screen.
    cout << "RSFan complete details:\n";

    cout << "rsf1: ";
    rsf1.printspeed();
    cout << "rsf1: ";
    rsf1.printstatus();
    cout << "rsf1: ";
    rsf1.printrotationstatus();

    cout << "rsf2: ";
    rsf2.printspeed();
    cout << "rsf2: ";
    rsf2.printstatus();
    cout << "rsf2: ";
    rsf2.printrotationstatus();

    cout << "rsf3: ";
    rsf3.printspeed();
    cout << "rsf3: ";
    rsf3.printstatus();
    cout << "rsf3: ";
    rsf3.printrotationstatus();

    cout << "rsf4: ";
    rsf4.printspeed();
    cout << "rsf4: ";
    rsf4.printstatus();
    cout << "rsf4: ";
    rsf4.printrotationstatus();


    return 0;
}
