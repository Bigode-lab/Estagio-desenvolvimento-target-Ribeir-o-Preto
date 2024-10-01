#include"bits/stdc++.h"

using namespace std;
// 2) Escreva um programa que verifique, em uma string, a existência da letra ‘a’, seja maiúscula ou minúscula
// além de informar a quantidade de vezes em que ela ocorre.
// IMPORTANTE: Essa string pode ser informada através de qualquer entrada de sua preferência ou pode ser previamente definida no código;

unordered_map<char, int> CountAInWord(string word){//O(n)
    unordered_map<char, int> frequency;
    for(char c : word){
        if(c == 'a' or c == 'A'){
            frequency[c]++;
        }
    }
    return frequency;
}

int main(){
    string word;
    cin >> word;
    unordered_map<char, int> frequency = CountAInWord(word);//O(n)
    for( auto id : frequency){//O(k)
        cout << "Character: " << id.first << ", Frequency: " << id.second << endl;
    }
    return 0;
}
// complexidade de tempo  O(n) + O(alpha)
// complexidade de memoria O(alpha)
// alpha = size of alphabet