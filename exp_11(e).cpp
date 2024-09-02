//e
#include <iostream>
using namespace std;

class Volume {
public:
    float length;
    float breadth;
    float height;

    void input() {
        cout << "Enter the value of length: " << endl;
        cin >> length;
        cout << "Enter the value of breadth: " << endl;
        cin >> breadth;
        cout << "Enter the value of height: " << endl;
        cin >> height;
    }

    float vol() {
        float v = length * breadth * height;
        return v;
    }

    void display() {
        float a = vol();
        cout << "The volume is " << a << endl;
    }
};

int main() {
    Volume volume1;
    volume1.input();
    float a = volume1.vol();
    cout << a << endl;
}
