#include <iostream>
#include <string.h>
using namespace std;

void findLength(char ch[] ,int n){
    int length=0;
    // for(int i=0; i<n; i++){
    //     if(ch[i]!='\0')
    //     length++;
    // }

    while(ch[length]!='\0'){
        length++;
    }
    cout<<endl<<"length is :"<<length;
}

void reversedString(char ch[], int n){
    int left =0;
    int right=n-1;
    while(left<=right){
        swap(ch[left], ch[right]);
        left++;
        right--;
    }

    // for(int i=0; i<n; i++){
    //     cout<<ch[i];
    // }
}

void convertToUppercase(char ch[]){
    int index=0;
    while(ch[index]!='\0'){
        char curIndex=ch[index];
        // if lowercase hoga toh convert karo to uppercase
        if(curIndex>= 'a' && curIndex<='z')
        ch[index]=curIndex-'a'+'A';
        index++;
    }

}

void convertToLowercase(char ch[]){
    int index=0;
    while(ch[index]!='\0'){
        if(ch[index]>= 'A' && ch[index]<='Z')
        ch[index]=ch[index]-'A'+'a';
        index++;
    }
}

void replaceCharacter(char ch[]){
    int index=0;
    while(ch[index]!='\0'){
        if(ch[index]=='@'){
            ch[index]=' ';
        }
        index++;
    }
}
int main(){
    // char ch[100]={};
    // cin.getline(ch,25);
    // cout<<"output of ch :"<<ch<<endl;

    // for(int i=0; i<25; i++){
    //     cout<<"index of ch "<<i<<"  "<<"character at that index "<<ch[i]<<endl;
    // }

    // char temp=ch[6];
    // int ans=(int)temp;
    // cout<<ans;

    //lenght of string
    // char ch[20]={};
    // cin>>ch;
    // findLength(ch,20);
    // cout<<endl<<"Length is:"<<strlen(ch);


    //reversed string
    // char ch[20]={};
    // cin>>ch;
    // int len=strlen(ch);
    // reversedString(ch,len);
    // cout<<ch;

    //convert to upper case
    // char ch[100]={};
    // cin.getline(ch,100);
    // convertToUppercase(ch);
    // cout<<ch;


    //convert to lower case
    // char ch[100]={};
    // cin.getline(ch,100);
    // convertToLowercase(ch);
    // cout<<ch;

    //replace @ with space
    char ch[120]={};
    cin>>ch;
    replaceCharacter(ch);
    cout<<ch;
    return 0;
}