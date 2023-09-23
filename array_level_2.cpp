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
void sort0s1s(int arr[] , int size){
    int countZero=0;
    int countOne =0;
    for(int i=0; i<size; i++){
        if(arr[i]==0)
        countZero++;
        else if(arr[i]==1)
        countOne++;
    }

    //easy way
    // int index =0;
    // while(countZero--){
    //     arr[index]=0;
    //     index++;
    // }
    // while (countOne--){
    //     arr[index]=1;
    //     index++;
    // }
    
    //2nd solution using for loop
    int i=0; 
    for(i=0; i<countZero;i++){
        arr[i]=0;
    }
    for(int j=i; j<size; j++){
        arr[j]=1;
    }
    
}

void leftShiftArray(int arr[], int size){
    int temp = arr[0];
    for(int i=0; i<size; i++){
        arr[i]=arr[i+1];
    }

    arr[size-1] = temp;
}

void rightShiftArray(int arr[], int size){
    int temp =arr[size-1];
    for(int i=size-1; i>0; i--){
        arr[i]=arr[i-1];
    }
    arr[0] =temp;
}
int main(){
    // problem statement:extreme print in an array
    // int arr[] = {10,20,30,40,50,60};
    // int size =6;
    // extremPrint(arr,size);

    //problem statement:find max no in array
    // int arr[] ={20,30,10,0,15};
    // int size = 5;
    // findMax(arr ,size);

    //problem statement:find unique element in array
    // int arr[]= {2,10,17,13,10,2,15,13,15};
    // int size = 9;
    // int ans = findUniqueOne(arr,size);
    // cout<<endl<<"Unique element is:"<<ans;

    //problem statement:print all pairs
    // int arr[] ={10,20,30};
    // int size =3;
    // for(int i=0; i<size; i++){
    //     for(int j=0; j<size; j++){
    //         cout<<arr[i]<<" "<<arr[j]<<"  ";
    //     }
    //     cout<<endl;
    // }

    //problem statement:sort 0`s & 1`s in an array 
    // int arr[] = {1,0,0,1,1,0,1,0,0,1};
    // int size = 10;
    // sort0s1s(arr,size);
    
    // for(int i=0; i<size; i++)
    // cout<<arr[i]<<" ";

    //problem statement :shift the array element to left side by one
    // int arr[] ={10,20,30,40,50,60};
    // int size =6;
    // leftShiftArray(arr,size);
    // for(int i=0; i<size; i++){
    //     cout<<arr[i]<<"  ";
    // }

    //problem statement :shift the array element to right side by one
    int arr[] = {10,20,30,40,50,60};
    int size = 6;
    rightShiftArray(arr,size);
    for(int i=0; i<size; i++){
        cout<<arr[i]<<"  ";
    }
    return 0;
}