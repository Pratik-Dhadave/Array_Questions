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
    for(int i=size-1; i>0; i-- ){
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

void printTranspose(int brr[][4], int rowD ,int colD){
    for(int i=0; i<colD; i++){
        for(int j=0; j<=i; j++){
            swap(brr[j][i], brr[i][j]);
        }
    }

    for(int i=0; i<colD; i++){
        for(int j=0; j<rowD; j++){
            cout<<brr[i][j]<<" ";
        }
        cout<<endl;
    }

}

void printNo(int arr1[], int n){
    int j=0;
    for(int i=0; i<n; i++){
        if(arr1[i]<0){
            swap(arr1[i],arr1[j]);
            j++;
        }
    }
    for(int i=0; i<n; i++){
        cout<<arr1[i]<<" ";
    }
}


void sort0s1s2s(int arr[],int n){
    // int zeroCount=0;
    // int oneCount=0;
    // int twoCount=0;

    // for(int i=0; i<n; i++){
    //     if(arr[i]==0)
    //     zeroCount++;
    //     else if(arr[i]==1)
    //     oneCount++;
    //     else if(arr[i]==2)
    //     twoCount++;
    // }
    // int index =0;
    // while(zeroCount--){
    //     arr[index]=0;
    //     index++;
    // }
    // while(oneCount--){
    //     arr[index]=1;
    //     index++;
    // }
    // while(twoCount--){
    //     arr[index]=2;
    //     index++;
    // }

    // for(int i=0; i<n; i++){
    //     cout<<arr[i]<<"  ";
    // }




    // 2nd solution using two pointers
    int index=0;
    int left=0; 
    int right =n-1;
    while(index<=right){
        if(arr[index]==0){
            swap(arr[index], arr[left]);
            left++;
            index++;
        }else if(arr[index]==2){
            swap(arr[index],arr[right]);
            right--;
        }else{
            index++;
        }
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<"   ";
    }
}


void arrayRotate(int arr[], int n,int k){
    int ans[n];
    for(int index=0; index<n; index++){
        int newIndex = (index+k)%n;
        ans[newIndex]= arr[index];
    }
    arr=ans;
    for(int i=0; i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void noMissing(int arr[], int n){
    int sum=0; 
    for(int i=0; i<n; i++){
        sum=sum+arr[i];
    }
    int totalSum = ((n)*(n+1))/2;
    int ans=totalSum-sum;

    cout<<endl<<"Missing Number is:"<<ans;
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

    // printSumRowwise(arr,row ,col);
    // printSumColwise(arr,row,col);
    // printSumDiagonal(brr,rowD,colD);

    // printArrayDiagonal(brr,rowD,colD);
    // printArrayReversedDiagonal(brr,rowD,colD);


    // printTranspose(brr,rowD,colD);


    //practice problem 

    //1.shift -ve nos to left & +ve nos to right
    // int arr1[]={23,-7,12,-10,-11,40,60};
    // int n=7;
    // printNo(arr1,n);
    

    //2.Sort 0,1,2
    // int arr1[]= {1,2,0,1,1,0,2};
    // int n = 7;
    // sort0s1s2s(arr1,n);

    //3.rotate array k=2

    // int arr1[]={10,20,30,40,50,60};
    // int n=6;
    // int k=3;
    // arrayRotate(arr1,n,k);

    //4.Missing number
    int arr1[]={3,0,1};
    int n=3;
    noMissing(arr1,n);
    return 0;

}