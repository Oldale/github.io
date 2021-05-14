#include <string>
#include <vector>

using namespace std;

int solution(vector<int> absolutes, vector<bool> signs) {
    int answer = 0;
    for(int count = 0 ; count < absolutes.size() ; count++) 
        signs[count] ? answer = answer + absolutes[count] : answer = answer - absolutes[count];
    return answer;
}
