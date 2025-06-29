#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& arr, int low, int mid, int high){
    int n1 = mid - low + 1;
    int n2 = high - mid;

    vector<int> L(n1), R(n2);

    for(int i = 0;i < n1;i++){
        L[i] = arr[low + i];
    }
    for(int j = 0;j < n2;j++){
        R[j] = arr[mid + 1 + j];
    }
    int i = 0, j = 0;
    int k = low;

    while (i < n1 && j < n2){
        if(L[i] <= R[j]){
            arr[k] = L[i];
            i++;
        }
        else{
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while(i < n1){
        arr[k] = L[i];
        i++;
        k++;
    }
    while(j < n2){
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergesort(vector<int>& arr, int low, int high){
    int mid = low + (high - low) / 2;
    
    if(low >= high){
        return;
    }

    mergesort(arr, low, mid);
    mergesort(arr, mid + 1, high);
    merge(arr, low, mid, high);
}

void printvector(vector<int>& arr){
    for(int i : arr){
        cout << i << " ";
    }
    cout << endl;
}

int main(){
    vector<int> set = {1,8,9,7,3};
    int n = set.size();
    printvector(set);
    mergesort(set, 0, n - 1);
    printvector(set);
}