#include<bits/stdc++.h>
using namespace std;
void sort_012(int *arr,int size)
{
    sort(arr,arr+size);
    for(int i=0;i<size;i++)
    {
        cout << arr[i]<< " ";
    }
}
int main ()
{
    int arr[]={2,0,0,1,0,1,2,0,2,1};
    int size=sizeof(arr)/sizeof(int);
    sort_012(arr,size);
}