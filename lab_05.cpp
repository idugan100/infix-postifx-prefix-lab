#include <cstdlib>
#include <iostream>
#include "int.h"
#include "d_stree.h"
#include "time.h"
#include <random>



using namespace std;

void insert();

int main(){
    stree<integer> tree;
    
 
    
    
    
        
    srand(time(NULL));
    for(int i=0;i<10000;i++){
        
        int random=rand() % 7 ;
       
        
        integer *number= new integer(random);
        
        bool inserted= tree.insert(*number).second;
        

    }
    cout<<"Values"<<endl;
    tree.inOrder();
    cout << "Tree: "<<endl;
    tree.displayTree(4);
    

  





    return 0;
}