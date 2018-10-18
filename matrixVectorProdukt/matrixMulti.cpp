#include <iostream>
#include <string>
#include <vector>
#include <random>
#include <numeric>
#include <chrono>

using std::chrono::system_clock;
using std::chrono::duration;
using std::random_device;
using std::vector;
using namespace std;
//----------------------------------------------------------------------------------
std::mt19937 gen(std::random_device{}()); // create one random device

int getRandom(){
    std::uniform_real_distribution<> dis(0, 1000); // set distribution constraints
    return dis(gen);
}
vector<int> createVector(int n){  // create a vector of size n with random oprands
    vector<int> vect;
    for(int i = 0; i<n;i++){
        int r = getRandom();
        vect.push_back(r);
    }
    return vect;
}
vector<int> matrixProd(int n, vector<int> v) {
    vector<int> result;
    vector<int> r;
    for(int i = 0; i<n; i++) { // each row
        r.clear(); // reset r
        cout<<"---"<<endl;
        for(int k = 0; k<n; k++) { // each element 
            const int x = getRandom();
            r.push_back(x * v.at(k)); // multiply element and vector
            cout<<x; cout<<' ';
        }
        cout<<'\n';
        result.push_back(std::accumulate(r.begin(), r.end(), 0)); // sum the vector
    }
    return result;
}
void prettyPrint(vector<int> v, string msg){
    std::cout << msg+" contains:";
    for (unsigned l=0; l<v.size(); l++)
        std::cout << ' ' << v.at(l);
        std::cout << '\n';
}
//---------------------------------------------------------------------
int main(int argc, char** argv) {
    cout<<argv[0]<<endl;
    int n = 3;
    vector<int> t = createVector(n);
    // time measure
    auto start = system_clock::now();
    vector<int> vecResult = matrixProd(n, t);
    auto end = system_clock::now();
    const double elapsed_seconds = duration<double>(end - start).count();
    // prints
    prettyPrint(t,"vector");
    prettyPrint(vecResult, "result vector");
    cout<<"elapsed time: " + std::to_string(elapsed_seconds)<<endl;
    return 0;
}
