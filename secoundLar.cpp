#include<iostream>
using namespace std;


int secoundLargest(int arr[],int n){
    int max =0;
    int sec_min = INT16_MIN;
    cout<<sec_min<<endl;
    for(int i=0;i<n;i++){
        if (arr[i]> max){
            max = arr[i];
        }
    }

    for(int i=0;i<n;i++){
        if(arr[i]> sec_min && arr[i] != max){
            sec_min = arr[i];
        }
    }
    return sec_min;}

    int main(){

        int arr[] ={ 10,20,30,50,39,60};
        int n = sizeof(arr)/sizeof(arr[0]);

        cout<<secoundLargest(arr,n);


        return 0;
    }