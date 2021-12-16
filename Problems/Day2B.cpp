#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
 
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif

int x = 0;
int y = 0;
int aim = 0;

for (int i=0; i<1000; i++){
  string s;
  getline(cin,s);

  int c = count(s.begin(), s.end(), ' ');
  remove(s.begin(), s.end(), ' ');
  s.resize(s.length()-c);

  if (s.length() == 3){
    char a = s[2];
    int b = (int)a - 48;
    aim = aim - b;
  } else if (s.length() == 8){
    char a = s[7];
    int b = (int)a - 48;
    x = x + b;
    y = y + (aim*b);
  } else if (s.length() == 5){
    char a = s[4];
    int b = (int)a - 48;
    aim = aim + b;
  } 
}

cout << (x*y);


return 0;
}
