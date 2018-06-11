/**
import java.util*;

public class exclusiveOR{
    public static void main(String[] args){
        //int a[]=new int[5];
        int a[]={1,4,4,1,3};
        int result=0;
        for(int i=0;i<a.length;i++){
            result ^=a[i];
        }
        System.out.println(result);
    }
}
*/
#include<iostream>

using namespace std;
int main()
{
    int a[5]={1,4,4,1,3};
    int result=0;
    for(int i=0;i<sizeof(a)/sizeof(int);i++)
    {
        result ^=a[i];
    }
    //System.out.println(result);
    cout<<result<<endl;
    return 0;
}
