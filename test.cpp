#include<iostream>

using namespace std;

int main()

{
    int a[17];
    int i,num=1;
    int count=17;
    for(i=0;i<17;i++)
    {
        a[i]=1;

    }
    i=0;
    while(count>1)
    
    {
        while(a[i]==0)
        {
            i=(i+1)%17;
        }
        if(num%3==0)
        {
            a[i]=0;
            count--;
        }
        i=(i+1)%17;
        num++;
    }
    for(i=0;i<17;i++)
    {
        if(a[i]==1)
        {
            cout<<i<<endl;
        }
    }
    return 0;
   
}
