#include<iostream>

int main(){
#ifdef __APPLE__
	std::cout<<"apple";
	return 1;
#else
	std::cout<<"other";
	return 0;
#endif
}
