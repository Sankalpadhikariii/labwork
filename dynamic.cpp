#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number";
    cin >> n;
    //allocate memory
    int *arr = new int[n];
    cout << sizeof(arr) << endl;
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    //Free up space
    delete []arr;
    return 0;
}
