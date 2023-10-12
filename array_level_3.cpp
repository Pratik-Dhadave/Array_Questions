#include <iostream>
using namespace std;

void leftShift(int arr[], int size){
    int temp = arr[0];
    for(int i=0; i<size; i++){
        arr[i]=arr[i+1];
    }
    arr[size-1] = temp;
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}
void rightShift(int arr[], int size){
    int temp = arr[size-1];
    for(int i=size-1; i>0; i--){
        arr[i] = arr[i-1];
    }
    arr[0]=temp;
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

void printArray(int arr[][4], int row, int col){
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
void printArrayCol(int arr[][4], int row, int col){
    for(int i=0; i<col; i++){
        for(int j=0; j<row; j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    // int arr[] = {2,3,4,5,6};
    // int size = 5;
    // leftShift(arr,size);
    // rightShift(arr,size);

    int arr[][4] = {
        {2,3,4,2},\
        {1,5,6,4},
        {7,8,9,1}
    };

    // while initailzing 2D array column size mandatory
    int col =4;
    int row = 3;
    // printArray(arr,row,col);
    printArrayCol(arr,row,col);


    return 0;
}