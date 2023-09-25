#include <iostream>
using namespace std;

void print_array(int arr[], int size){
    for (int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void alt_swap(int arr[], int size){
    for (int i=0;i<=size;i+=2){
        if (i+1<size){
            int temp;
            temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    }
}
int main(){

    int even_arr[10] = {5,8,4,9,5,2,1,6,0,3};
    int odd_arr[9] = {4,8,7,5,6,9,2,3,1};

    alt_swap(even_arr,10);
    print_array(even_arr,10);

    alt_swap(odd_arr,9);
    print_array(odd_arr,9);

    return 0;

}

