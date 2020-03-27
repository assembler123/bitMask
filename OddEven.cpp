//program to check number is even or odd
#include <iostream>
using namespace std;

int main() {
    int a[]={1,3,5,32,35,6,4,53};
    for(int i=0;i<sizeof(a)/sizeof(a[0]);i++)
    {
        if(a[i]&1)
        {
            cout<<"Odd"<<"\n";
        }
        else
        {
            cout<<"Even"<<"\n";
        }
    }
	// your code goes here
	return 0;
}

