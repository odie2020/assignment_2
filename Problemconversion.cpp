#include <iostream>
using namespace std;

void userInput(int &feet,int &inches)
{
   cout << "Please enter the amount of feet: ";
   cin >> feet;
   cout << "Please enter the amount of inches: ";
   cin >> inches;
}

void calculation(int &feet,int &inches, int &meters,int &centimeters)
{
   double amount;

   amount = feet + (double)inches/12;
   meters = 0.3048 * amount;
   centimeters = ((amount * 0.3048) - (int)(amount * 0.3048))*100;
}

void output(int &meters,int &centimeters)
{
   cout << meters << "m and " << centimeters << "cm" << endl;
}

int main() {
   int feet,inches,meters,centimeters;

   do
   {
   userInput(feet,inches);
   if(feet == 0)
    break;

    calculation(feet,inches,meters,centimeters);
    output(meters,centimeters);

    cout << "Type exit if you would like to stop." << endl;

   }while(feet != 0);
   return 0;
}
