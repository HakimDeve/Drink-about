// Drink about.cpp : This file contains the 'main' function. Program execution begins and ends there.

/*

Make a function that receive age, and return what they drink.

Rules:

Children under 14 old.
Teens under 18 old.
Young under 21 old.
Adults have 21 or more.

*/

#include <iostream>
#include <string>
using namespace std;

void ReadAge(int& age)
{
    cout << "Enter The Age Please :\n" << endl;
    cin >> age;
}
string people_with_age_drink(int age) {

    if (age == 0 || age <= 13) return"drink toddy";
    else if (age >= 14 && age <= 17) return"drink coke";
    else if (age >= 18 && age <= 20) return"drink beer";
    else if (age >= 21 && age <= 30) return"drink whisky";

    return to_string(age);
}

void PrintData(int Data)
{
    cout <<"==============================\n";
    cout <<" You Can : "<<people_with_age_drink(Data) <<endl;
}

int main()
{

    int AData;

    ReadAge(AData);
    PrintData(AData);
  return 0;
}

