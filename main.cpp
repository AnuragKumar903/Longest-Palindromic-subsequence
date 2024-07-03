#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool ispalindrome(string str){
    int i = 0;
    int j = str.length() - 1;
    while(i < j){
        if(str[i] != str[j]){
            return false;
        }
      i++;
      j--;
    }
      return true;
}
string findPalindrome(string str){
  string temp1 = "";
  for(int i=0; i<str.length(); i++){
    for(int j = i; j < str.length(); j++){
      string temp = str.substr(i,j);
      if(ispalindrome(temp) && temp.length() > temp1.length()){
        temp1 = temp;
      }
    }
  }
  return temp1;
}

int main() {
  string str = "abaabc";

  string palin = findPalindrome(str);
  cout<<palin;

  return palin.length();
}