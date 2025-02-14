#include <iostream>
#include <stdio.h>
using namespace std;

void main() {
    int mark1 = 56, mark2 = 55, mark3 = 54;
    float avg = (mark1 + mark2 + mark3) / 3.0;
    cout << avg << endl;
    return 0;
}

int main() {
    int marks[3] = {2, 3, 4};
    int i;
    float arg = 0.0; // Initialize arg to 0.0

    for (i = 0; i < 3; i++) {
        arg += marks[i];
    }

    cout << arg << endl;
    return 0;
}