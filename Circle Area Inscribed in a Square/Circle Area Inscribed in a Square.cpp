#include <iostream>
#include <cmath>
#include <string>

using namespace std;

// #Course_3_Solution_20
// Circle Area Inscribed in a Square.

float ReadSquareSide()
{
    float A;
    cout << "Please Enter Square Side A " << endl;
    cin >> A;
    return A;
}

float CircleAreaInscribedInSquare(float A)
{
    const float PI = 3.141592653589;
    float Area = (PI * pow(A,2)) / 4;
    return Area;
}

void PrintResult(float Area)
{
    cout << "\n Circle Area = " << Area << endl;
}

int main()
{
    PrintResult(CircleAreaInscribedInSquare(ReadSquareSide()));

    return 0;
}
