#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    string left = {'q','e','t','u','o','a','d','g','j','l','x','v','n'};
    string right = {'w','r','y','i','p','s','f','h','k','z','c','b','m'};
    char input[5];
    for(int i = 0;i < 5;i++){
        cin >> input[i];
    }
    for(int i = 0; i < 5;i++){
        if(find(left.begin(), left.end(), input[i]) != left.end()){
            int index = left.find(input[i]);
            cout << right[index];
        };
        if(find(right.begin(), right.end(), input[i]) != right.end()){
            int index = right.find(input[i]) + 1;
            cout << left[index];
        };
    }
}   