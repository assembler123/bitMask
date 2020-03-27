//program to check which number is missing
#include <iostream>
using namespace std;

int main() {
    int res=0;
    int a[]={1,2,3,4,5,6,7,8,9,1,2,3,4,5,7,8,9};
    for(int i=0;i<sizeof(a)/sizeof(a[0]);i++)
    {
        res^=a[i];
    }
    cout<<res;
	// your code goes here
	return 0;
}

