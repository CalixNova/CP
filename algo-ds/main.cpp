#include <iostream>
using namespace std;

template <class T>
class Ractangle{
private:
    T length;
    T breadth;

public:
    Ractangle(){
        length =0;
        breadth=0;
    
    }
    Ractangle (T l, T b){
        this->length = l;
        this->breadth = b;
    }
    
    T area(){
        return length*breadth;
    }
    T perimeter(){
        return 2*(length+breadth);
    }
    void setLength(T l){
        length=l;
    }
    void setBreadth(T b){
        breadth = b;
    }
    T getLength(){
        return length;
    }
    T getBreadth(){
        return breadth;
    }
    ~Ractangle(){
        cout<<"done destructing";
    }
};

int main(){

    Ractangle<int> r(10,5);
    Ractangle<float> k(1.5678, 3.14163);   

    cout<< "Area" << r.area()<< endl;
    cout<< " Perimeter "<< r.perimeter() << endl;
    cout << "area in template "<< k.area() << endl;
    cout << "perimeter "<< k.perimeter()<< endl;
    return 0;
}


