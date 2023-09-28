#include <iostream>
#include <string>
using namespace std;
void revString(string &str)
{

    for (int i = str.length() - 1; i >= 0; i--)
    {
        str = str+ str[i];
        cout << str[i] << " ";
    }
}
int main()
{
    string str = "sonu";
    revString(str);
}