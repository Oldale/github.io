#include <string>
#include <vector>

using namespace std;

vector<char> merge;

string make(string p){
    int index, left = 0, right = 0;
    int fair_switch = p[0] - '(';
    string sub, blank = "("; 
    fair_switch ? right++ : left++;
    for(index = 1 ; left != right ; index++) p[index] - '(' ? right++ : left++ ;
    sub = p.substr(0,index);
    p = p.substr(index);
    if(p != "") p = make(p);
    if(fair_switch){
        sub = sub.substr(1,sub.size() - 2);
        blank = blank + p + ')';
        for(int count = 0 ; count < sub.size() ; count++) {
            if(sub[count] == '(') sub[count] = ')';
            else if(sub[count] == ')') sub[count] = '(';
            blank.push_back(sub[count]);
        }
        return blank; 
    }
    return sub + p;
}

string solution(string p) {
    string answer = make(p);
    return answer;
}