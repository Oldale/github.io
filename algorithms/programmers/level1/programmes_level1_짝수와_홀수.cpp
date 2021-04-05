#include <string>
#include <vector>

using namespace std;

string solution(int num) {
    vector<string> OE;
    OE.push_back("Even");
    OE.push_back("Odd");
    string answer = OE[1 & num];
    return answer;
}
//https://programmers.co.kr/learn/courses/30/lessons/12937