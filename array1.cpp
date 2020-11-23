#include <iostream>
#include <vector>
using namespace std;

int calcMaxOnes(vector<int> &a);
int main(int argc, char const *argv[])
{
    vector<int> a{1, 1, 0, 1, 1, 1};
    vector<int> b{1, 0, 1, 1, 0, 1};
    cout << calcMaxOnes(a);
    return 0;
}

int calcMaxOnes(vector<int> &a)
{
    int max_size = 0;
    int current_size = 0;
    for (auto &&i : a)
    {
        if (i == 1)
        {
            current_size++;
        }
        else
        {
            current_size = 0;
        }

        if (current_size > max_size)
        {
            max_size = current_size;
        }
    }
    cout << "Max 1s in a row : " << max_size << endl;
    return max_size;
}