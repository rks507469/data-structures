#include<bits/stdc++.h>
using namespace std;

class ValuePair {
    public:
    int max, min;
    ValuePair(int a, int b) {
        max = a;
        min = b;
    }
};

int main() {
    int arr[] = {-76, -56, -37, 44, 14, 53, 13, -71, 40, -55, -63, -35, 5, 86, 52, -44, 18, 42, -69, 46};
    ValuePair* obj = new ValuePair(INT_MIN, INT_MAX);
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i < size; i++) {
        if(obj->max < arr[i]) {
            obj->max = arr[i];
        }
        if(obj->min > arr[i]) {
            obj->min = arr[i];
        }
    }
    cout << "max : " << obj->max << " min : " << obj->min << "\n";
    return 0;
}