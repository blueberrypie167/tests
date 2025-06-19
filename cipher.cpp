#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    string left = {'q','e','t','u','o','a','d','g','j','l','x','v','n'};
    string right = {'w','r','y','i','p','s','f','h','k','z','c','b','m'};
    char input = {'g'};
    if(find(left.begin(), left.end(), input) != left.end()){
        int index = left.find(input);
        cout << right[index];
    };
    /**/
    /*for(int i = 0; i < 3;i++){
        if(find(left.begin(), left.end(), 'x') != left.end()){
            int index = left.find('x');
            cout << right[index];
        };
        else if(find(right.begin(), right.end(), input) != right.end()){
            cout << left[++i];
        }
    }*/
}   