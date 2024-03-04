#include<iostream>
using namespace std;

int main()
{

//binary search algorithm

int find;
cout<<"enter the number you want to find: ";
cin>>find;

int arr[]={2,3,4,5,6,7,8,9};
int size_of_array= sizeof (arr)/sizeof arr[0];
//cout<<"size of an  array is:"<<size_of_array<<endl;

int beg_of_array = 0;
//int mid_of_array= size_of_array / 2;
int end_of_array=size_of_array - 1;

//cout<<"mid: "<<mid_of_array;

while(beg_of_array<=end_of_array)
{
   int mid = (beg_of_array+end_of_array)/2;
    if(arr[mid]==find){
        cout<<"founded value:"<<find<<","<<" at index:"<< mid;
        return 0;
    }
    else if (arr[mid] < find){
        beg_of_array = mid+1;
    }
    else if (arr[mid>find]){
        end_of_array = mid-1;
    }

}
    cout<<"no such element exist";


    return 0;
}