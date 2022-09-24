#include <iostream>
#include "int.h"
#include "d_stree.h"
using namespace std;

int main(){
    cout<< "hello"<<endl;
    stree<integer> btree;

    integer number=integer(5);
    integer number2=integer(5);

    cout<<"value: "<<number.getInt()<<endl;
    cout<< "Count: "<<number.getCount()<<endl;
    number.incCount();
    number.incCount();
    cout<< "Count: "<<number.getCount()<<endl;
    cout<<btree.size()<<endl;
  





    return 0;
}