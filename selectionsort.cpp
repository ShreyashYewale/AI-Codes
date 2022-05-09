#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of elements in the array" << endl;
    cin >> n;
    int a[n];
    cout << "Enter the elements" << endl;
    for (int i = 0; i < n;i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n - 1;i++)
    {
        for (int j = i + 1; j < n;j++)
        {
            if(a[i]>a[j])
            {
                swap(a[i], a[j]);
            }
        }
    }
    cout << "Elements after sorting" << endl;
    for (int i = 0; i < n;i++)
    {
        cout << a[i] << " ";
    }
        return 0;
}