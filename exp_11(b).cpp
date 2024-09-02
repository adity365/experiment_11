// Function Inside Class
//b
#include <iostream>
using namespace std;

class cube {
public:
    double height = 2.0;
    double width = 3.0;
    double length = 5.0;

    double volume() {
        double v;
        v = height * width * length;  
        return v;
    }
};

int main() {
    cube cube1;  // Corrected object name
    double vol = cube1.volume();  // Corrected object name
    cout << "Volume : " << vol << endl;

    return 0;
}
