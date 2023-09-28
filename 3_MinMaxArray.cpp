#include<iostream>
#include<climits>
using namespace std;
void minMax(int *arr,int size)
{
    int minval=INT_MAX;
    int maxval=INT_MIN;
    for(int i=0;i<size;i++)
    {
      if(arr[i]<minval)
      {
        minval=arr[i];
      }
      if(arr[i]>maxval)
      {
        maxval=arr[i];
      }
    }
cout << " Minimum value is :" << minval <<endl;
cout << " Maximum value is :"<< maxval; 
}
int main()
{
    int arr[10]={2,3,4,5,1,7,9,8,11,6};
    int size=sizeof(arr)/sizeof(int);
    minMax(arr,size);
    
}