#include <string>
#include <vector>

using namespace std;

vector<int> Prime(1,2); 

int solution(int n) {
    int check = 3;
    int prime_chk;
    int v_element_nums;
    for( check ; check <= n ; check++) {
        if (check % 2 == 0) continue; 
        for(v_element_nums = 0 ; v_element_nums < Prime.size() ; v_element_nums++){
            prime_chk = Prime[v_element_nums];
            if(check % prime_chk == 0) break;
            if(prime_chk > check / 2){
                Prime.push_back(check);
                break;
            } 
            
        }
        
    }
    int answer = Prime.size();
    return answer;
}
//https://programmers.co.kr/learn/courses/30/lessons/12921
//using eratosthenes's sieve