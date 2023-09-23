#include <iostream>
using namespace std;

int main(){
    // int a=5;
    // cout<<&a<<endl<<sizeof(a);
    // int b[12];
    // cout<<endl<<&b;
    // cout<<endl<<b<<endl<<sizeof(b);


    // int a[] ={12,3,4,5,6};
    // int ar[4]={2,3,4,5};
    // int arr[5] = {1,2};

    // int arrr[2]= {1,2,3,4,5};  //due to lack of memory it will thorw error


    // int arr[5];
    // for(int i=0; i<5; i++){
    //     cin>>arr[i];
    // }
    // for(int i=0; i<5; i++){
    //     cout<<arr[i]<<" ";
    // }

    //problem statement:
    // 1. take size of array 10 
    // 2. take i/p from user 
    // 3. doubled up the each value of that array 

    // int arr[10];
    // for(int i=0; i<10; i++){
    //     cin>>arr[i];
    // }
    // for(int i=0; i<10; i++){
    //     arr[i]=arr[i]*2;
    // }
    // for(int i=0; i<10; i++){
    //     cout<<arr[i]<<" ";
    // }

    //problem statement:
    // 1. take size of array 5 
    // 2. take i/p from user 
    // 3. print total sum

    // int arr[5];
    // for(int i=0; i<5; i++){
    //     cin>>arr[i];
    // }
    // int totalSum=0;
    // for(int i=0; i<5; i++){
    //     totalSum=totalSum+arr[i];
    // }
    // cout<<totalSum;

    //problem statement: Linear Search
    int arr[5];
    bool flag=0;
    cout<<"Enter value:"<<endl;
    for(int i=0; i<5; i++){
        cin>>arr[i];
    }

    int target;
    cout<<endl<<"Enter target value:";
    cin>>target;

    for(int i=0; i<5; i++){
        if(arr[i]==target){
            flag =1;
            break;
        }
    }
    if(flag == 1){
        cout<<endl<<"target found";
    }else{
        cout<<"target not found";
    }
    return 0;
}