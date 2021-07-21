#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter any decimal no : ";
    cin>>n;
    int a[8];
    int len = 0;
    int temp=n;
    while(temp>0)
    {
        int flag;
        flag=temp%2;
        len++;
        a[len-1]=flag;
        temp=temp/2;

    }
    cout<<"Binary value of "<<n<<" is ";
    for(int i=len-1;i>=0;i--)
        cout<<a[i];
}
