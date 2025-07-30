#include <iostream>
using namespace std; 

double Avg(int Numbers, int counter) {
    int numbers[Numbers]; 
    for (int i = 0; i < Numbers; i++) {
        cout << "Please enter the number: ";
        cin >> numbers[i]; 
    }

    int Sum = 0;  // setting the Default Parameters for sum
    for (counter = 0; counter < Numbers; counter++) {
        Sum += numbers[counter];
    }

    double Avg = (double)Sum / Numbers;  // Casting the sum
    return Avg;
}

int main() {
    int Numbers, counter;
    cout << "Enter the number of elements: ";
    cin >> Numbers;

    double average = Avg(Numbers, counter);
    cout << "The average is: " << average << endl;

    return 0;
}
