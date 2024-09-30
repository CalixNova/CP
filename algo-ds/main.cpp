#include <iostream>
using namespace std;

class Ractangle{
private:
    int length;
    int breadth;

public:
    Ractangle(){
        length =0;
        breadth=0;
    
    }
    Ractangle (int l, int b){
        length = l;
        breadth = b;
    }
    
    int area(){
        return length*breadth;
    }
    int perimeter(){
        return 2*(length+breadth);
    }
    void setLength(int l){
        length=l;
    }
    void setBreadth(int b){
        breadth = b;
    }
    int getLength(){
        return length;
    }
    int getBreadth(){
        return breadth;
    }
    ~Ractangle(){
        cout<<"done destructing";
    }
};

int main(){

    Ractangle r(10,5);
    

    cout<< "Area" << r.area()<< endl;
    cout<< " Perimeter "<< r.perimeter() << endl;
   
    return 0;
}


