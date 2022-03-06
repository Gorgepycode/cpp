#include <iostream>
using namespace std;

int main(){
    int num;
    int result;

    cout << "Enter a Number: " ;
    cin >> num;
    cout << endl;
    result = num % 2;
    if (result == 0){
        cout << "Number is Even\n";
    }else{
        cout << "Number is Odd\n";
    }

    cout << endl;

    return 0; 
}