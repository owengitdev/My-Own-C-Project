#include <iostream>
using namespace std;

int main() {
    // age code
    int age;
    
    cout << "Enter your age: ";
    std::cin >> age;
    std::cout << age << std::endl;


    // fruit code
    int fruit;
    cout << "Enter your fruit: ";
    std::cin >> fruit;
    std::cout <<fruit<<std::endl;

    // If and Else Statements in C++
    if (age >= 10) {
        std::cout << "You are already taken!" << std::endl;
    } 
    else {
        std::cout << "You are not taken" << std::endl;
    }

}

