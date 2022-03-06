// This program for company hiring someone has age 21 or above with drive lincene.
#include <iostream>
#include <string>
using namespace std;

int main(){

    int age;

    
    bool hasDriverLicenes;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Do you have Drive Licenes(yes/no)? ";
    cin >> hasDriverLicenes;

     if(age >= 21 && hasDriverLicenes ){
         cout << "Hired";
     }else {
         cout << "Rejected";
     }
 
    }

    