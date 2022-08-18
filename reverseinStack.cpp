#include <iostream>
#include <stack>
using namespace std;

void reverseStack(string s){
    stack<string> st;
    for(int i = 0; i < s.length(); i++){
        string word = "";
        while(s[i] != ' ' && i < s.length()){
            word += s[i];
            i++;
        }
        st.push(word);

    }
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }cout<<endl;
}

int main(){
    string s = "How are you";
    reverseStack(s);
    return 0;
}