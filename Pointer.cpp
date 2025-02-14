// #include <iostream>

// using namespace std;

// int main() {
//     int a = 5;
//     int *b = &a;  // Pointer b points to the address of a

//     cout << "Value of a = " << a << endl;
//     cout << "Address of a = " << &a << endl;
//     cout << "Value of b (address of a) = " << b << endl;
//     cout << "Value stored at the address pointed to by b (value of a) = " << *b << endl;

//     return 0;
// }


#include <iostream>
using namespace std;
int main() {
int x = 27; 
int *ip; 
ip = &x; 
cout << "Value of x is : ";
cout << x << endl;
cout << "Value of ip is : ";
cout << ip<< endl;
cout << "Value of *ip is : ";
cout << *ip << endl;
return 0;
}