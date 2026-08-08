#include <iostream>
using namespace std;
#include<vector>
int main()
{

    vector <int> v = {5, 1, 4, 5, 6};
    int largest = v[0];
    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] > largest)
        {
            largest = v[i];
        }

        cout << "largest element in array:"<<largest;
    }
    return 0;
}