#include <iostream>
#include<limits.h>
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

bool search2D(int arr[][4], int row, int col,int target){
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(arr[i][j] ==target)
            return true;
        }
    }
    return false;
}

void maxNO(int arr[][4], int row, int col){
    int maxNUm = INT_MIN;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(arr[i][j]>maxNUm)
            maxNUm=arr[i][j];
        }
    }
    cout<<"Maximun No :"<<maxNUm<<endl;
}
void minNO(int arr[][4], int row, int col){
    int minNUm = INT_MAX;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(arr[i][j]<minNUm)
            minNUm=arr[i][j];
        }
    }
    cout<<"Minimum No :"<<minNUm<<endl;
}

void printSumRowwise(int arr[][4], int row ,int col){
    for(int i=0; i<row; i++){
        int sum =0; 
        for(int j=0; j<col; j++){
            sum = sum+arr[i][j];
        }
        cout<<"Rowise Sum :"<<sum<<endl;
    }
}

void printSumColwise(int arr[][4],int row, int col){
    for(int i=0; i<col; i++){
        int sum =0;
        for(int j=0; j<row; j++){
            sum = sum+arr[j][i];
        }
        cout<<"Columnwise Sum:"<<sum<<endl;
    }
}
void printSumDiagonal(int brr[][4], int rowD, int colD){
    int sum=0;
    for(int i=0; i<rowD; i++){
        sum = sum+brr[i][i];
    }
    cout<<"Diagonal Sum:"<<sum<<endl;
}

void printArrayDiagonal(int brr[][4], int rowD, int colD){
    for(int j=0; j<colD; j++){
        cout<<brr[j][j]<<" "<<endl;
    }
}

void printArrayReversedDiagonal(int brr[][4], int rowD, int colD ){
    for(int i=rowD-1; i>0; i--){
        cout<<brr[i][i]<<" ";
    }
}
int main(){
    // int arr[] = {2,3,4,5,6};
    // int size = 5;
    // leftShift(arr,size);
    // rightShift(arr,size);

    int arr[][4] = {
        {2,3,4,2},\
        {10,5,6,44},
        {7,899,9,0}
    };

    int brr[4][4] = {
        {2,3,4,2},\
        {10,5,6,44},
        {7,899,9,0},
        {4,12,6,8}
    };

    // while initailzing 2D array column size mandatory
    int col =4;
    int row = 3;

    int colD=4;
    int rowD=4;
    // printArray(arr,row,col);
    // printArrayCol(arr,row,col);

    // int target = 10;
    // cout<<"found or not :" <<search2D(arr,row,col,target);

    // maxNO(arr,row,col);
    // minNO(arr,row,col);

    printSumRowwise(arr,row ,col);
    printSumColwise(arr,row,col);
    printSumDiagonal(brr,rowD,colD);

    printArrayDiagonal(brr,rowD,colD);
    printArrayReversedDiagonal(brr,rowD,colD);

}