#include<iostream>

using namespace std;

//function to add two number
double add (double a, double b) {
    return a + b;
}
 //function to subtract two number
 double sub (double a, double b) {
    return a - b;
 }

 //function to multiply two number 
 double mul (double a,  double b) {
    return a * b;
 }

//function to divide two number 
 double div(double a, double b) {
    if(b == 0){
        throw runtime_error("Error!!, Can't divided by zero");
    }
    return a / b;
 }

 //Function to display menu of calculator
 void displaymenu() {
    cout << "!!!Welcome to calculator!!!" <<endl;
    cout << "Select option for operation:" <<endl;
    cout << "1.Addition" <<endl;
    cout << "2.Subtraction" <<endl;
    cout << "3.Multipication" <<endl;
    cout << "4.Division" <<endl;
    cout << "0.Exit" <<endl;
 }

 int main() {
    int choice;
    double num1,num2;
    while(true) {
        displaymenu();

        //Let user choice operation
        cout << "Enter the choices (1/2/3/4/0):" ;
        cin >> choice;

        //if the user want to exit 
        if(choice == 0) {
         exit(0);
        }

        //Entering two number 
        cout << "Enter the first number:";
        cin  >> num1;
        cout << "Enter the second number:";
        cin >> num2;
        try {
         switch (choice) {
            case 1:
            cout << num1 << "+" <<num2 << "=" <<add(num1,num2) <<endl;
            break;

            case 2:
            cout << num1 << "-" <<num2 <<"=" <<sub(num1, num2) <<endl;
            break;

            case 3:
            cout << num1 << "*" <<num2 <<"=" <<mul(num1, num2) <<endl;
            break;

            case 4:
            cout << num1 << "/" <<num2 <<"=" <<div(num1, num2) <<endl;
            break;

         }
        } catch (const exception& e) {
         cout << e.what() <<endl;
        }

        //check if user want again for recalculation 
        char respond;
        cout << "Do you want another calculation? (Y/N):";
        cin >> respond;
        if ( respond != 'y') {
         break;
        }

    }
    return 0;
 }