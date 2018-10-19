#include <iostream>
#include <string>
#include <vector>
#include <random>
#include <numeric>
#include <chrono>
#include <cstdlib>

using std::chrono::system_clock;
using std::chrono::duration;
using std::random_device;
using std::vector;
using namespace std;
//----------------------------------------------------------------------------------
std::mt19937 gen(std::random_device{}()); // create one random device
vector <vector<int>> matrix; // some kind of global matrix ? i dont feel good about this :D
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
vector<int> matrixProd(int n, vector<int> v) { // this fun calc. the vector product and writes the array
    vector<int> result;
    vector<int> r, row;
    for(int i = 0; i<n; i++) { // each row
        r.clear(); // reset r and row
        row.clear();
        for(int k = 0; k<n; k++) { // each element 
            const int x = getRandom();
            row.push_back(x);  // add row to matrix
            r.push_back(x * v.at(k)); // multiply element and vector
        }
        matrix.push_back(row);
        result.push_back(std::accumulate(r.begin(), r.end(), 0)); // sum the vector
    }
    return result;
}
void prettyPrint(vector<int> v, string msg){
    std::cout << msg+": ";
    for (auto l=0; l<v.size(); l++)
        std::cout << ' ' << v.at(l);
        std::cout << '\n';
}
//---------------------------------------------------------------------
int main(int argc, char** argv) {
    // Interactive input
    int n = strtol(argv[1],NULL,10);
    int iterations = strtol(argv[2],NULL,10);
    int withPrint = strtol(argv[3],NULL,10);; // with or without print
    cout<< withPrint << " with print"<<endl;
    cout<< n << " matrix size" << std::endl;
    cout<< iterations << " iterations" << std::endl;
    vector<int> t = createVector(n);
    // time measure and iterations
    auto start = system_clock::now();
    for(int times=0;times<iterations;times++) {
        matrix.clear(); // clear global matrix
        vector<int> vecResult = matrixProd(n, t);
        if(withPrint == 1){
            int o = 0;
            for(vector<int> row : matrix){
                o++;
                prettyPrint(row,"row Nr: " + to_string(o));
            }
            prettyPrint(t,"vector");
            prettyPrint(vecResult, "result vector");
        }
    }
    auto end = system_clock::now();
    const double elapsed_seconds = duration<double>(end - start).count();
    // print time
    cout<<"elapsed time: " + std::to_string(elapsed_seconds)<<endl;
    return 0;
}


//cmake -H. -Bbuild
//cmake --build build -- -j3
