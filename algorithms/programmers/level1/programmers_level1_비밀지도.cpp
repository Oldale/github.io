#include <string>
#include <vector>

using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    int count, calc_or,combine;
    string maps = "";
    vector<string> answer;
    for(count = 0 ; count < n ; count++) {
        combine = arr1[count] | arr2[count];
        for(calc_or = 0 ; calc_or < n ; calc_or++){
            if(combine == (combine >> 1) << 1) maps.insert(0," ");
            else maps.insert(0,"#");
            combine = combine>>1;
        }
        answer.push_back(maps);
        maps = "";
    }   
    return answer;
}