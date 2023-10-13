#include<iostream>
using namespace std;
int main(){
    cout<<"array insertion"<<endl;
    int array[50],size;
    cout<<"enter size of array ";
    cin>>size;
    cout<<"enter elements in array ";
    for (int i=0;i<size;i++){
        cin>>array[i];
    }
    cout<<"printing the new array"<<endl;
    for (int i=0;i<size;i++){
        cout<<array[i]<<"\t";
    }
    return 0;

}
