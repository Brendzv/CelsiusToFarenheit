#include <iostream>
using std::cout; 
using std::cin;

int main() {
    float celsius;

    system("cls");
    cout << "------------ CELSIUS TO FARENHEIT -----------------\n";
    cout << "Please type the temperature in celsius\n";
    cin >> celsius;
    cout << "your temperature in farenheit is: " << 9.0/5.0*celsius+32;

    return 0;
}