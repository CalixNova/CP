#include <iostream>
#include <memory>
using namespace std;


int main(){

    unique_ptr<int> uniqPt1 = make_unique<int>(25);


    return 0;
}
