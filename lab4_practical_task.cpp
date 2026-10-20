#include <iostream>
using namespace std;

int main()
{
    int list1[3] = {2, 5, 8};
    int list2[3] = {1, 2, 4};
    int sum[3];

    for (int i = 0; i < 3; i++) {
        sum[i] = list1[i] + list2[i];
    }
    for (int i = 0; i < 3; i++) {
        cout << sum[i] << endl;
    }

    return 0;
}