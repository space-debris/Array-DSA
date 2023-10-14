#include<iostream>
using namespace std;
int main(){
    int array[] = {5,9,7,8,6,4};
    int *p;
    p=array;
    printf("%p \n",array);
    printf("%p \n",p);
    printf("%p \n",&p);
    printf("%p \n",&array);
    printf("%p \n",&array+1);
    printf("%p \n",p++);
    printf("%d \n",*array);
    printf("%d \n",*array+1);
    printf("%d \n",*(array+1));
    printf("%d \n",(*array)+1);
    printf("%d \n",*p);
    printf("%d \n",*p+1);
    printf("%d \n",*(p+1));
    printf("%d \n",(*p)+1);
    printf("%d \n",array[0]);
    printf("%d \n",0[array]);
    printf("%d \n",p[0]);
    printf("%d \n",0[p]);
}
