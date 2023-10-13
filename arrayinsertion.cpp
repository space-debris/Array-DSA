#include<iostream>
using namespace std;
int main(){
    cout<<"array insertion"<<endl;
    int array[50],size,pos;
    cout<<"enter size of array ";
    cin>>size;
    cout<<"enter elements in array ";
    for (int i=0;i<size;i++){
        cin>>array[i];
    }
    cout<<"enter the position you want to delete ";
    cin>>pos;
    if (pos>size || pos<=0)
    {
        cout<<"invalid position, please enter  a different position again ";
        cin>>pos;
    }
    for (int i=pos-1;i<size-1;i++){
        array[i]=array[i+1];
    }
    size--;
    cout<<"printing the new array"<<endl;
    for (int i=0;i<size;i++){
        cout<<array[i]<<"\t";
    }
    return 0;

}
