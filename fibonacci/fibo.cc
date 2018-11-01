#include "fibo.h"

#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <chrono>
#include <cstdlib>

using std::chrono::system_clock;
using std::chrono::duration;
using std::vector;
using namespace std;
//----------------------------------------------------------------------------------

void prettyPrint(vector<int> v, string msg){
    std::cout << msg+": ";
    for (auto l=0; l<v.size(); l++)
        std::cout << ' ' << v.at(l);
        std::cout << '\n';
}

int fibo1(int n){
    int result;
    if(n==0){
        result = 0;
    }
    else if(n==1){
        result = 1;
    } else {
        result = fibo1(n-1)+fibo1(n-2);
    }
    return result;
}

vector<int> fibo2(int n){
    vector<int> result;
    for(int i = 0; i<n ;i++){
        if(i==0){
            result.push_back(0);
        }
        else if(i==1){
            result.push_back(1);
        } else {
            result.push_back(result.at(i-1) + result.at(i-2));
        }
    }
  return result;
  }

vector<int> fibo3(int n){
    vector<int> result(n); // init vector size
    vector<int> temp(2);
    int res;
    for(int i = 0; i<n ;i++){
        if(i==0){
            res = 0;
        }
        else if(i==1){
            res = 1;
        } else {
            res = temp.at(0) + temp.at(1);
        }
        result.at(i) = res;
        if(i > 0){
            temp.at(0) = result.at(i-1);
            temp.at(1) = result.at(i);
        }
    }
  return result;
}