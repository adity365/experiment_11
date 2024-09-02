// Display function inside class
//d
# include <iostream>
using namespace std;

class cube{
    public:
    double height = 2.0;
    double width = 3.0;
    double length = 5.0;

    double volume(){
        double v;
        v = height*width*length;
        return v;
    }
    void disp_vol(double vol){
        cout << "Volume : " << vol << endl;
    }
};

int main(){
    cube cube1;
    // double vol = cube1.disp_vol(vol)
    cube1.length;
    double vol = cube1.volume();
    cube1.disp_vol(vol);
}