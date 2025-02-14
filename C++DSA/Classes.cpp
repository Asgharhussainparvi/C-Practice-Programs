#include <iostream>
using namespace std;

class Car {
public:
    string model;
    int year;

    void display() {
        cout << "Model: " << model << ", Year: " << year << endl;
    }
};

int main() {
    Car car1;
    car1.model = "Toyota";
    car1.year = 2020;
    car1.display();
    return 0;
}