# experiment_11
Experiment11: To study the basics of Object Oriented Programmig 
		
## THEORY
To learn how to implement Object Oriented Concepts like defining class, object, defining Function inside class,using public and private access modifiers, display function inside class 

### Software Used : VS –  Code 
Theory :
In summary, OOP enhances code organization, reusability, maintainability, and scalability, making it an essential concept for modern software development.
### 1. Class: 
A class definition starts with the class keyword followed by the class name and a pair of curly braces {}. Inside the curly braces, you can define data members (variables) and member functions (methods).
### 2. Object :
In C++, objects are instances of classes. They are the concrete entities created using the class blueprint, containing both data (attributes) and functions (methods) that operate on the data.
### 3. Access Modifiers :
Access specifiers define how the members of the class can be accessed. The most common ones are:
•	public: Members are accessible from outside the class.
•	private: Members can only be accessed from within the class.

## CODE:
```
//a
// write the key terminologies of oops in your cds notebook

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
```
```
\\b
// Function Inside Class
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

```
```
\\c
// using public and private access modifiers into the same programme

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

```
```
\\d
// Display function inside class

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
```
```
\\e
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

```
## OUTPUT
![image](https://github.com/user-attachments/assets/7b1b1b7f-2012-4cef-85ed-987902f4ff65)
![image](https://github.com/user-attachments/assets/f2277bfe-14d8-4209-be59-d9cbb784719a)
![image](https://github.com/user-attachments/assets/eedd4d4d-807e-45d9-b415-bf259088d2e1)
![image](https://github.com/user-attachments/assets/373f9ad9-2ab5-4164-b42e-706b36d5cbb7)
![image](https://github.com/user-attachments/assets/61b6b0d4-a142-4d49-9398-2b382007db38)






### Conclusion : 
We have learned how to implement class, object, defining Function inside class , using public and private access modifiers, display function inside class

