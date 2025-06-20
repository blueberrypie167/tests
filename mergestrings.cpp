#include <iostream>
#include <vector>
using namespace std;

int main(){
    string word1 = {'a','b','c', 'k', 'm'};
    string word2 = {'p', 'q', 'r'};
    int size = word1.size() + word2.size();
    int n = 0, i = 0;
    string word3[size];
        while(n < size){
            if(word1[i] == '\0'){
                continue;
            }
            else {
                word3[n] = word1[i];
                ++n;
            }
            if(word2[i] == '\0'){
                continue;
            }
            else {
                word3[n] = word2[i];
                ++n;
            }
            i++;
        }
    
    for(string c : word3){
        cout << c;
    }
}