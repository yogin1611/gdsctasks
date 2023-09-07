#include<iostream>
using namespace std;
int main()
{
    int a[5]={0,1,2,3,4,};
    int i;
    try{
    i=0;
    while(1)
    {
    if(i!=5)
    {
       cout<<a[i]<<endl;
       i++;
    }
    else
        throw i;
    }}
    catch(int i)
    {
        cout<<"array index out of bound exception"<<endl;
    }
        return 0;
}
