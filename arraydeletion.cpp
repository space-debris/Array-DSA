#include <iostream>
using namespace std;
int main(){
    cout <<"array deletion"<<endl;
    int array[50],size,pos;
    cout <<"enter the size of the array "<<endl;
    cin >> size;
    cout <<"enter elements in array "<<endl;
    for (int i=0; i<size; i++){
        cin>>array[i];
    }
    cout<<"your array is ";
    for (int i = 0; i < size; i++)
    {
       cout<<array[i]<<" ";
    }
    cout<<endl;
    cout<<"enter the position you want to delete the element from ";
    cin>>pos;
    if (pos>size || pos<=0)
    {
        cout<<"invalid position, please enter  a different position again ";
        cin>>pos;
    }
    cout<<"the element at position "<<pos<<" is "<<array[pos-1]<<endl;
    for (int i=pos-1;i<size-1;i++){
        array[i]=array[i+1];
    }
    size--;
    cout<<"printing the new array"<<endl;
    for (int i=0;i<size;i++){
        cout<<array[i]<<" ";
    }
 
};