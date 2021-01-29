#include <iostream>
using namespace std;

//Creates a void function that takes in two parameters
void zeroBoth(int *first,int *second){
*first=0;
*second=0;
}


int main(){
//Declaring the variables that we will be using
int first;
int second;

//takes the memory addresses of the two variables
zeroBoth(&first, &second);

cout << first << endl;
cout << second << endl;

return 0;
}
