#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(vector<int> citations) {
    int count = 0;
    priority_queue<int> pri(citations.begin(),citations.end());
    while (!pri.empty()) {
        if(pri.top() <= count) return count;
        pri.pop();
        count++;
    }
    return count;
}
//https://programmers.co.kr/learn/courses/30/lessons/42747