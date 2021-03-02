//https://erlerobotics.gitbooks.io/erle-robotics-cpp-gitbook/content/object-oriented_programming__oop_and_inheritance/exercises_oop.html

#include <bits/stdc++.h>
using namespace std;

class Shape {

    protected:
        float width, height;
    public:
        void setData(float w, float h) {
            width = w;
            height = h;
        }
};

class Triangle : public Shape {
    public:
        float area() {
            return (height*width)/2;
        }
};

class Rectangle : public Shape {
    public:
        float area() {
            return (width*height);
        }
};

int main() {
    Triangle t;
    Rectangle r;
    t.setData(1010,100.45);
    r.setData(69.69,69);
    cout << "Trinagle area : " << t.area() << endl;
    cout << "Rectangle area : " << r.area() << endl;
    return 0;
}