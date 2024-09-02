// write the key terminologies of oops in your cds notebook
//a
// defining Class 
# include <iostream>
using namespace std;

class cube{
public:
double height = 2.0;
double length = 3.0;
double width = 5.0;
};

int main(){
cube c1;
double vol = c1.height* c1.length * c1.width;
cout << "Volume : " << vol << endl;

}