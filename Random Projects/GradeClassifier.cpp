#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    // COMPUTING SECTION
    float initial_grade;

    cout << "What is your grade in CC102? ";
    cin >> initial_grade;

    int usergrade = round(initial_grade);

    if (usergrade >= 98 && usergrade <= 100)
    {
        cout << "With Highest Honors";
    }

    else if (usergrade >= 95 && usergrade <= 97)
    {
        cout << "With High Honors";
    }

    else if (usergrade >= 90 && usergrade <= 94)
    {
        cout << "With Honors";
    }

    else if (usergrade >= 75 && usergrade <= 89)
    {
        cout << "Academic Passer";
    }

    else
    {
        cout << "Aray mo, bagsak ka boi.";
    }
}
