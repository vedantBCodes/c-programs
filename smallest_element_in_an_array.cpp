#include<iostream>
using namespace std;
class no_in_array //program to find smallest element in an array
{
private:
    int arr[10],a,i,min_no;
public:
    input()
    {
        cout<<"How many elements you want to enter:";
        cin>>a;
        cout<<"Enter "<<a<<" elements:";
        for(i=0;i<a;i++)
        cin>>arr[i];
    }
    process()
    {
        min_no=arr[0];
        for(i=0;i<a;i++)
        {
            if(arr[i]<min_no)
            min_no=arr[i];
        }
    }
    result()
    {
        cout<<"Smallest array element in a given array is:"<<min_no;
    }
};
int main()
{
    no_in_array obj;
    obj.input();
    obj.process();
    obj.result();
    return 0;
}

