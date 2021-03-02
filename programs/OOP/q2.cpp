//https://erlerobotics.gitbooks.io/erle-robotics-cpp-gitbook/content/object-oriented_programming__oop_and_inheritance/exercises_oop.html

#include <bits/stdc++.h>
using namespace std;

class Mother {
    public:
        void display() {
            cout << " This is Mother Class " << endl;
        }
};

class Daughter : public Mother {
    public:
        void display() {
            cout << " This is Daughter Class " << endl;
        }
};

int main() {
    Daughter d;
    d.display(); // prints the Daughter message
    d.Mother::display(); // prints the Mothers message
    return 0;
}