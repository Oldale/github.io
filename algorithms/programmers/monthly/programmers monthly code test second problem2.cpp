#include <string>
#include <vector>
#include <cmath>

using namespace std;

vector<long long> solution(vector<long long> numbers) {
    vector<long long> answer;
    int count = 0;
    long long copy;
    for(long long func : numbers){
        copy = func;
        while(1){
            if(copy & 1){
                copy = copy >> 1;
                count++;
            }
            else{
                if(count) answer.push_back(func + pow(2,count - 1));
                else answer.push_back(func + 1);
                break;
            }
        }
        count = 0;
    }
    return answer;
}