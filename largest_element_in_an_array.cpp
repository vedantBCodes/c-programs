#include<iostream>
using namespace std;
class no_in_array //program to find largest element in an array
{
private:
    int arr[10],a,i,max_no;
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
        max_no=arr[0];
        for(i=0;i<a;i++)
        {
            if(arr[i]>max_no)
            max_no=arr[i];
        }
    }
    result()
    {
        cout<<"Largest array element in a given array is:"<<max_no;
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
