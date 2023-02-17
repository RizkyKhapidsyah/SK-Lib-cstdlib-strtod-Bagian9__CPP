#include <iostream>
#include <cstdlib>
#include <conio.h>

/*
    Source by Programiz (https://www.programiz.com)
    Modified For Learn by RK
    I.D.E : VS2022
*/

using namespace std;

int main() {
    char numberString[] = "12.44";
    char* end;
    double number;

    number = strtod(numberString, &end);
    cout << "Number in String = " << numberString << endl;
    cout << "Number in Double = " << number << endl;

    if (*end) { // If end is not Null
        cout << end;
    } else { // If end is Null
        cout << "Null pointer";
    }

    _getch();
    return 0;
}