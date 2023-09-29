#include<iostream>
#include <bits/stdc++.h>
using namespace std;
void kth_smallest(int arr[], int size,int k)
{
    sort(arr, arr + size);
    int start=0;
    int end=size-1;
    while(start<k-1)
    {
        start++;
    }
    cout<< arr[start];
}
int main()
{
    int arr[] = {4, 18, 2, 1, 7, 8, 9, 10, 11, 12};
    int size = sizeof(arr) / sizeof(int);
    int k = 4;
    kth_smallest(arr,size,k);
    return 0;
}