// #include <iostream>
// #include <vector>
// using namespace std;

// void fun(int arr[], int n){
//     cout<<"Elements are:"<<endl;
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<"  ";
//     }
// }

// void printVector(vector<int>v){
//     for(int i=0; i<v.size(); i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
// }
// int main(){
//     //static memory for array
//     // int arr[5] = {2,4,6,8,10};
//     // fun(arr,5);

//     //dyanamic momory for arrray
//     // int n;
//     // cin>>n;
//     // int *arr = new int[n];
//     // for(int i=0; i<n; i++){
//     //     cin>>arr[i];
//     // }
//     // fun(arr,n);

//     // vecotrs 
//     vector<int>v;

//     // while(1){
//     //     cout<<"Enter element:"<<endl;
//     //     int data;
//     //     cin>>data;
//     //     v.push_back(data);
//     //     cout<<"Capacity :"<<v.capacity()<<" Size:"<<v.size()<<endl;
//     // }

//     v.push_back(1);
//     v.push_back(2);
//     v.push_back(3);
//     printVector(v);
//     return 0;
// }



#include <iostream> 
#include <vector>
using namespace std;
void printVector(vector<int>v){
    cout<<endl<<"print vecotr"<<endl;
    for(int i=0; i<v.size(); i++){
        //cout<<v[i]<<"  ";
        //another way of printing
        cout<<v.at(i)<<"   ";
    }
}
int main(){

    // vector<int>v;
    // v.push_back(2);
    // v.push_back(62);
    // v.push_back(1);
    // v.push_back(45);
    // printVector(v);

    // int n;
    // cin>>n;
    // vector<int> v;
    // for(int i=0; i<n; i++){
    //     int data;
    //     cin>>data;
    //     v.push_back(data);
    // }

    // for(int i=0; i<8;i++){
    //     v.push_back(45);
    // }

    // printVector(v);
    // cout<<endl<<v.size()<<"    "<<v.capacity()<<endl;

    // //to clear whole vector
    // v.clear();
    // v.push_back(100);
    // printVector(v);


    //vector intilization
    vector<int>arr(5,-2);
    arr.push_back(60);
    printVector(arr);

    // vector<int>arr1 = {6,7,8,90,45};
    vector<int>arr1{6,7,8,90,45};
    arr1.pop_back();
    printVector(arr1);


    //how to copy vector 

    vector<int> brr{23,45,67,89};
    printVector(brr);
    vector<int>brr1(brr);
    //here we push some in element in copied vector
    brr1.push_back(321);
    brr1.push_back(6677);
    printVector(brr1);
    return 0;
}