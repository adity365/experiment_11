// using public and private access modifiers into the same programme
//c
#include <iostream>
using namespace std;

class Cube {
private:
    double height = 2.0;
    double width = 3.0;
    double length = 5.0;  

public:
    double volume() {
        double v;
        v = height * width * length;  
        return v;
    }
};

int main() {
    Cube cube1;
    double vol = cube1.volume();
    cout << "Volume: " << vol << endl;  // Display the volume
}
