#include <iostream>
using namespace std;


int main() {
  //creates an array, 10 spots long
    int numArray[10];
    //prompts user for 10 numbers
    cout << "Please enter 10 positive integers: ";
    for (int i = 0; i < 10; ++i) {
      //goes through each of the numbers and puts them into an array
        cin >> numArray[i];}

    for (int i = 0; i < 10; ++i) {
      //prints each of the numbers that are in the array
        cout << numArray[i] << endl;}

    return 0;
}
