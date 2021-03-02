//https://erlerobotics.gitbooks.io/erle-robotics-cpp-gitbook/content/object-oriented_programming__oop_and_inheritance/exercises_oop.html

#include <bits/stdc++.h>
using namespace std;

class Animal {
    public:
        string name;
        int age;
        void set_value(string n, int a) {
            name = n;
            age = a;
        }
};

class Zebra : public Animal {
    public:
        void message() {
            cout << "Name : " << name << " Age : " << age << " Place of Origin : Ground" << endl;
        }
};

class Dolphin : public Animal {
    public:
        void message() {
            cout << "Name : " << name << " Age : " << age << " Place of Origin : Water" << endl;
        }
};

int main() {
    Zebra z;
    Dolphin d;
    z.set_value("Zezzzy", 24);
    d.set_value("Dolly", 23);
    z.message();
    d.message();
    return 0;
}
