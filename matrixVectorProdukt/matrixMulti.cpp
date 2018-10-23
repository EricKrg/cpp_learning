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
int getRandom(){
    std::uniform_real_distribution<> dis(0, 1000); // set distribution constraints
    return dis(gen);
}
vector<int> createVector(int n){  // create a vector of size n with random oprands
    vector<int> vect(n);
    for(int i = 0; i<n;i++){
        vect.at(i) = getRandom();
    }
    return vect;
}
vector<vector<int>> createMatrix(int n){
    vector<int> inner(n);
    vector<vector<int>> matrix(n);
    for(int x = 0; x < n;x++){
        for(int i = 0; i < n; i++){
            inner.at(i) = getRandom();
        }
        matrix.at(x) = inner;
    }
    return matrix;
}
vector<int> matrixProd(vector<vector<int>> matrix, vector<int> v) { // this fun calc. the vector product and writes the array
    vector<int> result(matrix.size());
    for(int i = 0; i<v.size(); i++) { // each row
        auto r = matrix.at(i);
        for(int k = 0; k<v.size(); k++) { // each element 
            r.at(k) = r.at(k)*v.at(k);
        }
        result.at(i) = std::accumulate(r.begin(), r.end(), 0); // sum the vector
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
    if(argc !=  4){
        cout<<"no/not enough arguments given"<<endl;
        return 1;
    } else {
        int n = strtol(argv[1],NULL,10);
        int iterations = strtol(argv[2],NULL,10);
        int withPrint = strtol(argv[3],NULL,10);; // with or without print
        cout<<withPrint<<" with print "<<n<< " matrix size "<<iterations<<" iterations"<<endl;
        // time measure and iterations
        auto start = system_clock::now();
        for(int times=0;times<iterations;times++) {
            auto t = createVector(n);
            auto mat = createMatrix(n);
            vector<int> vecResult = matrixProd(mat, t);
            if(withPrint == 1){ // check if output should be printed
                int o = 0;
                for(vector<int> row : mat){
                    o++;
                    prettyPrint(row,"row Nr: " + to_string(o));
                }
                prettyPrint(t,"vector");
                prettyPrint(vecResult, "result vector");
            }
        }
        const double elapsed_seconds = duration<double>(system_clock::now() - start).count();
        // print time
        cout<<"elapsed time: " + std::to_string(elapsed_seconds)<<endl;
        return 0;
    }
}
