#ifndef FIBO_H
#define FIBO_H

#include <vector>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <chrono>
#include <cstdlib>

void prettyPrint(std::vector<int> v, std::string msg);
int fibo1(int n);
std::vector<int> fibo2(int n);
std::vector<int> fibo3(int n);

#endif  
