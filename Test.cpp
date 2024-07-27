#include <iostream>
#include "Test.h"
Test::Test(int a,int b):aa(a),bb(b){
   
}
void Test::add(){
	std::cout<<"aa "<<aa<<" "<<"bb "<<bb<<"\n";
}
