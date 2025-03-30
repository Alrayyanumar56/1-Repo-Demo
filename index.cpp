#include <iostream>
using namespace std;

int area(int, int); // Function prototype

int main() {
    int length, width;
    
    cout << "Enter the Length & Width of the rectangle: ";
    cin >> length >> width;
    
    cout << "Area of Rectangle: " << area(length, width) << endl;
    
    return 0; // Indicating successful execution
}

int area(int a, int b) {
    return a * b; // Directly returning the product
}
