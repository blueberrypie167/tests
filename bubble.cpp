#include<iostream>
using namespace std;

int bubblesort(int set[], int n){
    int swap;
    for(int i = 0; i < n - 1;i++){
        for(int j = i;j < n;j++){
            if(set[j] < set[i]){
                swap = set[i];
                set[i] = set[j];
                set[j] = swap;
            }
        }
    }
    for (int i = 0;i < n;i++){
        cout << set[i] << endl;
    }
}

int main(){
    int set[] = {2,0,1,3,9};
    bubblesort(set, 5);
}