#include <string>
#include <vector>

using namespace std;

string solution(string number, int k) {
    char s_big = '0';
    int count = 0;
    int index = -1, next_index = 0;
    int final_len = number.size() - k;
    char nums;
    vector<char> answer;
    while(answer.size() < final_len){
        for(next_index ; next_index < next_index + k ; count++){
            nums = number[next_index + count];
            if (nums > s_big){
                index = count;
                s_big = nums;
                if (s_big == '9'){
                    answer.push_back(s_big);
                    next_index = next_index + index + 1;
                    k = k - index;
                    s_big = '0';
                    count = 0;
                    break;
                } 
            }
            if (count == k) {
                answer.push_back(s_big);
                next_index = next_index + index + 1;
                k = k - index;
                s_big = '0';
                count = 0;
                break;
            }
        }
    }
    for(answer.size() ; answer.size() < final_len ; next_index++){
        answer.push_back(number[next_index]);
    }
    string big_number(answer.begin(),answer.end());
    return big_number;
}