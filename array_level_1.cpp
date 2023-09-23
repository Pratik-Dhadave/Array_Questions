#include <iostream>
#include<limits.h>
using namespace std;

bool linerSearch(int arr[], int size, int target){
    for(int i=0; i<size; i++){
        if(arr[i]==target)
        return true;
    }
    return false;
}

void countZeroOne(int arr[] ,int size){
    int zeroCount =0;
    int oneCount =0;
    for(int i=0; i<size; i++){
        if(arr[i] == 0){
            zeroCount++;
        }else if(arr[i] ==1){
            oneCount++;
        }
    }

    cout<<endl<<"zero count is:"<<zeroCount;
    cout<<endl<<"one count is:"<<oneCount;
}

int findMinimum(int arr[], int size){
    int minAns = INT_MAX;
    for(int i=0; i<size; i++){
        if(arr[i]<minAns){
            minAns=arr[i];
        }
    }
    return minAns;
}

void reversedArray(int arr[], int size){
    int left = 0; 
    int right= size-1;
    // using for loop
    // for(int left=0, right=size-1; left<=right; left++,right--){
    //     swap(arr[left],arr[right]);
    // }
    while(left<=right){
        swap(arr[left] , arr[right]);
        left++;
        right--;

    }

    for(int i=0; i<size; i++){
        cout<<arr[i]<<"  ";
    }
}
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
    // int arr[5];
    // bool flag=0;
    // cout<<"Enter value:"<<endl;
    // for(int i=0; i<5; i++){
    //     cin>>arr[i];
    // }

    // int target;
    // cout<<endl<<"Enter target value:";
    // cin>>target;

    // for(int i=0; i<5; i++){
    //     if(arr[i]==target){
    //         flag =1;
    //         break;
    //     }
    // }
    // if(flag == 1){
    //     cout<<endl<<"target found";
    // }else{
    //     cout<<"target not found";
    // }

    // 2nd solution without using flag

    // int arr[5]= {2,3,44,65,1};
    // int size =5;
    // int target = 443;
    // bool ans = linerSearch(arr,size,target);
    // if(ans == 1)
    // cout<<"target found";
    // else
    // cout<<"target not found";

    //problem statement : count 0`s & 1`s in an array
    // int arr[] = {1,0,0,1,0,0,1,1,1,0,0,0};
    // int size=12;
    // countZeroOne(arr,size);
    
    //problem statement: find minimum no in array
    // int arr[]={24,3,23,-4,5,6};
    // int size = 6;
    // int minimum = findMinimum(arr,size);
    // cout<<endl<<"minimum no is:"<<minimum;

    //problem statement:reversed array

    int arr[] = {10,20,30,40,50,60,70};
    int size = 7;
    reversedArray(arr,size);


    return 0;
}