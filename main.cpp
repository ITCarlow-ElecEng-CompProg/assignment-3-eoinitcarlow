/*Eoin Finlay
  Ex3 - Standard Deviation
  20 Sep 2017*/

//Preprocessor Directives
#include <iostream>
#include <math.h>

using namespace std;

//Main Function
int main()
{
    //Variable Declarations
    double values[10]={0},sum, mean, product, standev;
    int n;
    //Initialising variables
    product = 0;
    sum = 0;
    n = 0;
    //While Loop to work through entire array
    while (n<10)
    {
        //Prompt user to enter values through the array
        cout << "Enter a value: ";
        //Store values in each term within array
        cin >> values[n];
        //Assigning sum to an equation, which is a running total within the array
        sum = sum + values[n];
        n++;
    }
    //Assigning mean to an equation
    mean = sum / 10.0;

    //Initialising n back to zero in order to work through array from beginning
    n = 0;
    //While Loop to work through the entire array
    while (n<10)
    {
        //Assigning product to an equation
        product = product + ((values[n]-mean) * (values[n]-mean)) / 9.0;
        n++;
    }
    //Assigning Standev to an equation
    standev = pow(product, 0.5);
    //Displaying Mean value to user
    cout << "\nMean Value: "<<mean<<endl;
    //Displaying Standard Deviation to user
    cout << "\nStandard Deviation: "<<standev<<endl;


    return 0;
}
