#include<iostream>
using namespace std;
int main(){
    cout<<"array insertion"<<endl;
    int array[50],size,pos,elem;
    cout<<"enter size of array"<<endl;
    cin>>size;
    cout<<"enter elements in array"<<endl;
    for (int i=0;i<size;i++){
        cin>>array[i];
    }
    cout<<"enter the position you want to insert ";
    cin>>pos;
    if (pos>size || pos<=0)
    {
        cout<<"invalid position, please enter  a different position again ";
        cin>>pos;
    }
    cout<<"enter the element you want to insert ";
    cin>>elem;
    size++;
    for (int i=size-1;i>=pos-1;i--){
        array[i+1]=array[i];
    }
    array[pos-1]=elem;
    cout<<"printing the new array"<<endl;
    for (int i=0;i<size;i++){
        cout<<array[i]<<" ";
    }
    return 0;

}
