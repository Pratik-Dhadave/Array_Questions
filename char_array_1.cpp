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

bool checkPalindrome(char ch[], int len){
    int i=0;
    int j=len-1;
    while(i<=j){
        if(ch[i]==ch[j]){
            i++;
            j--;
        }else{
            return false;
        }
    }
    return true;
}
int expand(string s, int i, int j){
    int count=0;
    while(i>=0 && j<s.length() && s[i]==s[j]){
        count++;
        i--;
        j++;
    }
    return count;
}
void countSubstrings(string s){
    int totalCount=0; 
    for(int center =0; center<s.length(); center++){
        //odd
        int oddAns=expand(s,center,center);
        //even
        int evenAns=expand(s,center,center+1);
        totalCount+=oddAns+evenAns;
    }
    cout<<endl<<"Count of Substring:"<<totalCount;
}
bool check(string s, int i, int j){
    while(i<j){
        if(s[i]==s[j]){
            i++;
            j--;
        }else{
            return false;
        }
    }
    return true;
}
bool validCheck(string s){
    int i=0; 
    int j=s.length()-1;
    while(i<j){
        if(s[i]==s[j]){
            i++;
            j--;
        }else{
            bool ansFori=check(s,i+1, j);
            bool ansForj=check(s,i,j-1);
            return ansFori||ansForj;
        }
    }
    return true;
}

void removeRepeatEle(string s, string part){
    while(s.find(part)!=string ::npos){
        s.erase(s.find(part), part.length());
    }
    cout<<endl<<"Remanning String:"<<s;
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
    // char ch[120]={};
    // cin>>ch;
    // replaceCharacter(ch);
    // cout<<ch;

    //check palindrome
    // char ch[100]={};
    // cin.getline(ch,100);
    // int len = strlen(ch);
    // bool ans=checkPalindrome(ch,len);
    // if(ans)
    // cout<<"valid palindrome";
    // else
    // cout<<"Invalid palindrome";


    //basics of strings
    // string name;
    // cin>>name;
    // getline(cin,name);
    // cout<<name;
    // cout<<endl<<"Priting Specific Character:"<<name[0];
    // int index=0;
    // while(name[index]!='\0'){
    //     cout<<endl<<" Index: "<<index<<" Character: "<<name[index];
    //     index++;
    // }
    // int val =(int)name[6];
    // cout<<endl<<"ACSII Value:"<<val;


    // string inbuild function 
    // string str;
    // cin>>str;
    // string temp="";
    // // cin>>temp;
    // cout<<"Length of string:"<<str.length()<<endl;
    // cout<<"string is empty or not for str:"<<str.empty()<<endl;
    // cout<<"string is empty or not for temp:"<<temp.empty()<<endl;
    // cout<<"Specific character:"<<str.at(2);
    // cout<<"Front element of string:"<<str.front()<<endl;
    // cout<<"Back element of string:"<<str.back()<<endl;

    // //apend
    // string first = "Pratik ";
    // string second = "Dhadave";
    // first.append(second);
    // cout<<endl<<"First String:"<<first;
    // cout<<endl<<"Second String:"<<second;
    // //erase
    // str.erase(2,1);
    // cout<<endl<<endl<<"Erasing string:"<<str;
    // //insert
    // first.insert(7,"Subhash ");
    // cout<<endl<<endl<<"Inserting string:"<<first;
    // //push_back & pop_back
    // cout<<endl<<endl<<"Before Poping:"<<second;
    // second.pop_back();
    // cout<<endl<<"Poping element:"<<second;
    // second.push_back('E');
    // cout<<endl<<"after pushing element:"<<second;

    // //find 

    // string n1="yaar tera super star desi kalakaar";
    // string n2="super";
    // if(n1.find(n2)== string::npos)
    // cout<<endl<<"not Found";
    // else
    // cout<<endl<<"Found";

    // string s1="Tejas";
    // string s2="TejaS";
    // if(s1.compare(s2)==0)
    // cout<<endl<<"Matching string";
    // else
    // cout<<endl<<"Not Matching String";

    // //substring
    // string desc="this is a car, big daddy of all SUV's";
    // cout<<endl<<"Substring is:"<<desc.substr(19,5);


    //problem on string
    //leetcode 647 - Palindromic substring

    // string s;
    // cin>>s;
    // countSubstrings(s);

    //leetcode 680 - valid palindrome II
    // string s;
    // cin>>s;
    // bool ans=validCheck(s);
    // cout<<endl<<ans;

    //leetcode 1910-remove all occurences of substring
    string s="daabcbaabcbc";
    string part="abc";
    removeRepeatEle(s,part);
    return 0;
}