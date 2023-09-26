#include<iostream>
using namespace std;

int findunique(int *arr, int size){
    int ans = 0;
    for (int i = 0; i<size; i++){
        ans = ans^arr[i];
    }
    return ans;
}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       
int main(){
    int array[5] = {1,3,1,5,3};
    int unique = findunique(array,5);
    cout<<"Unique element is "<<unique;

    return 0;
}