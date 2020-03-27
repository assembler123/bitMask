#include <iostream>
#include<string.h>
#include<math.h>
using namespace std;
void subsequence(char *st)
{
    int l=strlen(st);
    // cout<<l<<"  ===  >>>  "<< 
    int temp,co=pow(2,l),i=0;
    while(co!=0)
    {
        temp=co;
        i=0;
        while(temp!=0)
        {
            if(temp&1)
            {
                cout<<st[i];
            }
            temp>>=1;
            i++;
        }
        cout<<"\n";
        co--;
    }
    
}
int main() {
    char* str="abc";
    subsequence(str);
    
	// your code goes here
	return 0;
}

