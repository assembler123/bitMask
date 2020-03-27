#include <iostream>
#include<string.h>
#include<math.h>
using namespace std;
void findNumbers(int a[],int n)
{
    int res=0,mask,it=0,firstNo=0,secondNo=0;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<"===>>>"<<res<<endl;
        res^=a[i];
    }
    cout<<res<<endl;
    int temp=res;
    while(temp<0)
    {
        if(temp&1)
        {
            break;
        }
        it++;
        temp>>=1;
    }
    mask=(1<<it);
    
    for(int i=0;i<n;i++)
    {
        if((a[i]&mask))
        {
            firstNo^=a[i];
        }
    }
    secondNo=(firstNo^res);
    cout<<firstNo<<" ---- "<<secondNo;

}
int main() {
    int a[]={1,3,5,6,3,2,1,2};
    findNumbers(a,(sizeof(a)/sizeof(a[0])));
	// your code goes here
	return 0;
}
