#include<iostream>
using namespace std;
int getlength(char arr[]){
    int count = 0;
    for (int i = 0; arr[i]!='\0'; i++){
        count++;
    }
    return count;
}
void reverse(char arr[],int n){
    int start=0;
    int end = n-1;
    while(start<end){
        swap(arr[start++],arr[end--]);
    }
}
int main(){
    char name[20];
    cout<<"enter your name ";
    cin>>name;
    cout<<"your name is "<<name<<endl;
    cout<<"length is "<<getlength(name)<<endl;
    reverse(name,getlength(name));
    cout<<"reverse is "<<name;
}