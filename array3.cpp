#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> getSQRT(vector<int> &a);
int main(int argc, char const *argv[])
{
    vector<int> a{-4, -1, 0, 3, 10};
    vector<int> b = getSQRT(a);
    for (auto &&i : b)
    {
        cout << i << endl;
    }

    return 0;
}

vector<int> getSQRT(vector<int> &a)
{
    vector<int> b;
    for (auto &&i : a)
    {
        b.push_back(i * i);
    }
    sort(b.begin(), b.end());
    return b;
}