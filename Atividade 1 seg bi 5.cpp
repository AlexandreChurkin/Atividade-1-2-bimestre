#include <iostream>
#include <ctime> 
#include <cstdlib>

int main (){
 
 srand(time(NULL));
 std::cout << rand()%6+1;



    return 0;
}