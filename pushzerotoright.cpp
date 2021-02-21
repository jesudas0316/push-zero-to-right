#include <iostream>
using namespace std;
void printnonzero(int n,int a[])
{
    int count=0;
    for(int i=0;i<n;i++)
    {
    
        if(a[i]!=0)
        {
        
            a[count++]=a[i];
        }
    }
        while(count<=n)
            a[count++]=0;
        
}

int main()
{
    int n=10;
    
    int a[]={1, 9, 8, 4, 0, 0, 2, 7, 0, 6, 0, 9};
    printnonzero(n,a);
    for(int k=0;k<n;k++)
    {
        cout<<a[k]<<" ";
    }
    
}
  
