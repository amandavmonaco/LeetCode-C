// Created by Amanda Monaco on 12/31/22.
#include "iostream"
using namespace std;

int climbStairs(int n){
    int prevprev = 1; int prev = 2; int res;
    for(int i=0; i<n-2; i++){
        res = prevprev + prev;
        prevprev = prev;
        prev = res;
    }
    return res;
}

int main(){

    cout << climbStairs(4) << endl;
}