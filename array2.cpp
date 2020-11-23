#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int numbEven(vector<int> &a);
int main(int argc, char const *argv[])
{
    vector<int> a{12, 345, 2, 6, 7896};
    // Lets use log10 to determine how many power of 10s are there
    cout << numbEven(a);
    return 0;
}

int numbEven(vector<int> &a)
{
    int numberofEven = 0;
    for (auto &&i : a)
    {
        cout << "Number of Digits : " << ((int)log10(i)) + 1 << endl;
        int nDigits = ((int)log10(i)) + 1;
        if ((nDigits % 2) == 0)
        {
            numberofEven++;
        }
    }
    return numberofEven;
}