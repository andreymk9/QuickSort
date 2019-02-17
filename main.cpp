#include<iostream>
#include "quick_sort.cpp"

int main(){
    int arr[7] = {12, 2, 56, 23, 11, 45, 12};
    quickSort(arr, 0, 6);
    for(int i = 0; i < 7; ++i){
        std::cout<<arr[i]<<" ";
    }
    return 0;
}