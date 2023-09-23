#include <iostream>
#include<limits.h>
using namespace std;

void extremPrint(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl<<"Extrem print:"<<endl;

    for(int left=0, right=size-1; left<=right; left++,right--){
        if(left==right){
            cout<<arr[left];
        }else{
            cout<<arr[left]<<"  "<<arr[right]<<"  ";
        }
        // cout<<arr[left]<<"  "<<arr[right]<<"  ";
    }
    cout<<endl;
}
// void findMax(int arr[], int size){
//     int maxNo = INT_MIN;
//     for(int i=0; i<size; i++){
//         if(arr[i]>maxNo){
//             maxNo =arr[i]; 
//         }
//     }
//     cout<<maxNo;
// }

int findUniqueOne(int arr[], int size){
    int ans = 0;
    for(int i=0; i<size; i++){
        ans = ans^arr[i];
    }
    return ans;
}
int main(){
    // int arr[] = {10,20,30,40,50,60};
    // int size =6;
    // extremPrint(arr,size);

    // int arr[] ={20,30,10,0,15};
    // int size = 5;
    // findMax(arr ,size);

    int arr[]= {2,10,17,13,10,2,15,13,15};
    int size = 9;
    int ans = findUniqueOne(arr,size);
    cout<<endl<<"Unique element is:"<<ans;
    return 0;
}