#include <cstdlib>
#include <iostream>
#include "int.h"
#include "d_stree.h"
#include "time.h"
#include <random>
using namespace std;

int main(){
    srand(time(NULL));
    for(int i=0;i<10000;i++){
        int random=rand() % 7 ;
        cout<<random<<endl;
        
    }
    

  





    return 0;
}