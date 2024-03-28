#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    
    int age;
    try {
        cout << "Enter your age: ";
        cin >> age;
        if (age < 18 && age > 0) {
            cout << "You are younger 18!" << endl;
        }
        else if(age >= 18){
            cout << "Your are under or 18." << endl;
        }
        else{
            throw -1;
        }
    }
    catch (int err) {
        cout << "We have some troubles!" << endl;
    }
}
