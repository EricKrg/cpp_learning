#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <chrono>
#include <cstdlib>

#include "fibo.h"

using std::chrono::system_clock;
using std::chrono::duration;
using std::vector;
using namespace std;

//---------------------------------------------------------------------
int main(int argc, char** argv) {
    // Interactive input
    if(argc !=  2){
        cout<<"no/not enough arguments given"<<endl;
        return 1;
    } else {
        int n = strtol(argv[1],NULL,10);
        //--------------------
        auto start1 = system_clock::now();
        cout <<"fibonacci 1: ";
        for(int i=0; i<n;i++){
            cout<< " " <<fibo1(i);
        } cout << endl;
        const double elapsed_seconds = duration<double>(system_clock::now() - start1).count();
        // print time
        cout<<"elapsed time: " + std::to_string(elapsed_seconds)<<endl;
        //--------------------
        auto start2 = system_clock::now();
        auto res2 = fibo2(n);
        prettyPrint(res2,"fibonacci 2");
        const double elapsed_seconds2 = duration<double>(system_clock::now() - start2).count();
        // print time
        cout<<"elapsed time: " + std::to_string(elapsed_seconds2)<<endl;
        //--------------------
        auto start3 = system_clock::now();
        auto res3 = fibo3(n);
        prettyPrint(res3,"fibonacci 3");
        const double elapsed_seconds3 = duration<double>(system_clock::now() - start3).count();
        // print time
        cout<<"elapsed time: " + std::to_string(elapsed_seconds3)<<endl;
        return 0;
    }
}