#include <iostream>
using namespace std;

void display(int set[], int n){
    for(int i = 0;i < n;i++){
        cout << set[i] << endl;
    }
}

// index based selection sort
int selectionsort(int set[], int n){
    int swap, minindex;
    
    // first iteration of the array, it will run through n - 1 less elements over time
    for (int i = 0;i < n - 1;i++){
        // assume first element is smallest
        minindex = i;
        // second loop, this goes through all elements while i = 0
        for(int j = i;j < n;j++){
            if(set[j] < set[minindex]){
                minindex = j;
            }
        }
        // swap
        swap = set[i];
        set[i] = set[minindex];
        set[minindex] = swap;
    }
    display(set, n);
}

int main(){
    int set[5];

    cout << "Enter 5 elements of the set: ";
    for(int i = 0; i < 5;i++){
        cin >> set[i];
    }
    int size = sizeof(set) / sizeof(set[0]);
    selectionsort(set, size);


}