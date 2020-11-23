#include <iostream>
#include <vector>
using namespace std;
void vectorIterate(vector<int> &vec);
int main(int argc, char const *argv[])
{
    vector<int> a{1, 0, 2, 3, 0, 4, 5, 0};
    //vector<int> a{1, 2, 3};
    // Expected Result : [1,0,0,2,3,0,0,4]
    // Input [0,0,0,0,0,0,0]
    // Expected Output : [0,0,0,0,0,0,0]
    /*vector<int> pushA;
    for (int i = 0; i < a.size(); i++)
    {
        pushA.push_back(a[i]);
        if (a[i] == 0)
        {
            pushA.push_back(0);
            a.pop_back();
        }
    }
    a = pushA;*/
    vector<int> newVec = {0, 0, 0, 0, 0, 0, 0};
    vectorIterate(a);
    vectorIterate(newVec);
    return 0;
}

void vectorIterate(vector<int> &vec)
{
    vector<int> secondVec;
    int nrOfZeros = 0;
    for (int i = 0; i < vec.size(); i++)
    {
        secondVec.push_back(vec[i]);
        if (vec[i] == 0)
        {
            secondVec.push_back(0);
            nrOfZeros++;
        }
    }
    for (int i = 0; i < nrOfZeros; i++)
    {
        secondVec.pop_back();
    }
    vec = secondVec;
    for (auto &&i : secondVec)
    {
        cout << i << " ";
    }
    cout << endl
         << "Number of Zeros : " << nrOfZeros << "\nEnd of the line !" << endl;
    // intArray[i + 1] = intArray[i];
}