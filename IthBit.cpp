
//program to check number is even or odd
#include <iostream>
using namespace std;










int getIthBit(int n,int i)
{
    return ((n>>i)&1);
}






































int setIthBit(int &n,int i)
{
    n|=(1<<i);
}












int clearIthBit(int &n,int i)
{
    n^=((1<<i));
}









int countSetBit(int n)
{
    int ans=0;
    while(n!=0)
    {
        n&=(n-1);
        ans++;
        
    }
    return ans;
}











int main() {
    int a[]={1,3,5,32,35,6,4,53};
    getIthBit(32,1);
    int n=10;
    setIthBit(n,0);
    cout<<n<<endl;
    clearIthBit(n,0);
    cout<<n<<endl;
    cout<<countSetBit(n);
	// your code goes here
	return 0;
}


