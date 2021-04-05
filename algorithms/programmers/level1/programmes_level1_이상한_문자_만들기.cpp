#include <string>
using namespace std;

string solution(string s) {
    int oddeven = 0;
    int index = 0;
    for (char c : s){
        if (c != ' '){
            if ((oddeven & 1) == 0) s[index] = toupper(c);
            if ((oddeven & 1) == 1) s[index] = tolower(c);
            oddeven++;
        }
        else if(c == ' ') oddeven = 0;
        index++;
    }
    return s;
}
//https://programmers.co.kr/learn/courses/30/lessons/12930