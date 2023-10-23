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

void printVector2(vector<char>ch){
    cout<<endl<<"2nd Method  :";
    // 2nd method of printing vector
    for(auto it:ch){
        cout<<it<<"      ";
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
    cout<<endl<<"size"<<arr.size()<<"capacity"<<arr.capacity();

    // vector<int>arr1 = {6,7,8,90,45};
    vector<int>arr1{6,7,8,90,45};
    arr1.pop_back();
    printVector(arr1);
    cout<<endl<<"size"<<arr1.size()<<"capacity"<<arr1.capacity();


    //how to copy vector 

    vector<int> brr{23,45,67,89};
    printVector(brr);
    vector<int>brr1(brr);
    //here we push some in element in copied vector
    brr1.push_back(321);
    brr1.push_back(6677);
    printVector(brr1);

    cout<<endl;
    vector<char>ch;
    ch.push_back('A');
    ch.push_back('B');
    ch.push_back('C');
    ch.push_back('D');
    ch.push_back('E');

    cout<<"Front Elelment:"<<ch[0]<<endl;
    cout<<"Front Elelment:"<<ch.front()<<endl;
    cout<<"Last Elelment:"<<ch.back()<<endl;
    cout<<"Last Elelment:"<<ch[ch.size()-1]<<endl;

    printVector2(ch);



    // 2D Vector

    vector< vector<int> >v1(5,vector<int>(3,100));
    for(int i=0; i<v1.size(); i++){
        for(int j=0; j<v1[i].size(); j++){
            cout<<v1[i][j]<<"  ";
        }
        cout<<endl;
    }
    // vector<char>v(10, 'A');
    cout<<endl<<"Using forEach method:"<<endl;
    for(auto row:v1){
        for(auto col:row){
            cout<<col<<" ";
        }
        cout<<endl;
    }

    //jagged array

    vector< vector<int> >jagg;

    vector<int>j1(10,2);
    vector<int>j2(8,4);
    vector<int>j3(6,6);
    vector<int>j4(4,8);
    vector<int>j5(2,10);

    jagg.push_back(j1);
    jagg.push_back(j2);
    jagg.push_back(j3);
    jagg.push_back(j4);
    jagg.push_back(j5);

    for(int i=0; i<jagg.size(); i++){
        for(int j=0; j<jagg[i].size(); j++){
            cout<<jagg[i][j]<<"   ";
        }
        cout<<endl;
    }
    return 0;
}