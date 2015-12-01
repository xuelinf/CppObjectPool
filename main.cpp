//
// Created by gzlx on 2015/12/1.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    vector<int>tmp = {1,2,3,4,5};
    for(auto &i : tmp){
        cout << i <<endl;
        cout << "test" <<endl;
    }
    return 0;
}