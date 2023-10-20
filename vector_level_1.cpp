#include <iostream>
#include <vector>
using namespace std;

void fun(int arr[], int n){
    cout<<"Elements are:"<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<"  ";
    }
}

void printVector(vector<int>v){
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    //static memory for array
    // int arr[5] = {2,4,6,8,10};
    // fun(arr,5);

    //dyanamic momory for arrray
    // int n;
    // cin>>n;
    // int *arr = new int[n];
    // for(int i=0; i<n; i++){
    //     cin>>arr[i];
    // }
    // fun(arr,n);

    // vecotrs 
    vector<int>v;
    while(1){
        cout<<"Enter element:"<<endl;
        int data;
        cin>>data;
        v.push_back(data);
        cout<<"Capacity :"<<v.capacity()<<" Size:"<<v.size()<<endl;
    }

    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(3);
    // printVector(v);
    return 0;
}