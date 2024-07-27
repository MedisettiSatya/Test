#include <iostream>
class Test{
	public:
		int a;
		Test(int a):a(a){
			std::cout<<"a = "<<a;
		}
};
int main(){
	std::cout<<"Hello\n";
}
