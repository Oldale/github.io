d#include <string>
#include <vector>

using namespace std;

int check(string s){
    int l=0,m=0,b=0;
    for(char ghal : s){
        if(ghal == ')') l--;
        else if (ghal == '(') l++;
        
        if (ghal == '}') m--;
        else if (ghal == '{') m++;
        
        if (ghal == ']') b--;
        else if (ghal == '[') b++;
        
        if (l == -1 || m == -1 || b == -1) return 0;
    }
    if (l + b + m == 0) return 1;
    return 0;
}

int solution(string s) {
    int answer = 0, count;
    for(count = 0 ; count < s.size() ; count++){
        answer = answer + check(s);
        s.push_back(s[0]);
        s = s.substr(1);
    }
    return answer;
}