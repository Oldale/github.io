#include <string>
#include <vector>

using namespace std;

int solution(int left, int right) {
    int answer = 0;
    int count = 2;
    int check = 2;
    if(left){
       answer -= left;
       left++; 
    } 
    for(left ; left <= right ; left++){
        for(count ; count < left ; count++){
            if(left % count == 0) check++;
        }
        (check & 1) ? answer -= left : answer += left;
        check = 2;
        count = 2;
    }
    return answer;
}