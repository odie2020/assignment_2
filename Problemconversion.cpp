#include <iostream>
using namespace std;

void userInput(int &feet,int &inches)
{
  //prompts for user inputs
   cout << "Please enter the amount of feet: ";
   cin >> feet;
   cout << "Please enter the amount of inches: ";
   cin >> inches;
}

void calculation(int &feet,int &inches, int &meters,int &centimeters)
{
   double amount;
   //converts everything to feet
   amount = feet + (double)inches/12;
   //converts the feet in meters
   meters = 0.3048 * amount;
   //converts the meters to cm
   centimeters = ((amount * 0.3048) - (int)(amount * 0.3048))*100;
}

void output(int &meters,int &centimeters)
{
  //prints the output
   cout << meters << "m and " << centimeters << "cm" << endl;
}

int main() {
   int feet,inches,meters,centimeters;

   do
   {
   userInput(feet,inches);
   //goes as long as there is more than 0 feet
   if(feet == 0)
    break;
    //runs each function
    calculation(feet,inches,meters,centimeters);
    output(meters,centimeters);

    cout << "Type exit if you would like to stop." << endl;

   }while(feet != 0);
   return 0;
}
