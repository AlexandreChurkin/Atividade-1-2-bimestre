#include <iostream>
#include <cstdlib> 
#include <ctime> 


int dado(){
	return(1 + rand () % 6);
	
	}
int main(){
	int n1 = 0;
	int n2 = 0;
	int n3 = 0;
	int n4 = 0;
	int n5 = 0;
	int n6 = 0;
	int count;
	
	std::cout << "Jogando o dado 100 mil vezes\n";
	
	srand(time(NULL));
	for(count = 0; count < 100000; count ++){
	switch(dado()){
	
	case 1:
		n1 ++;
		break;
		
	case 2:
		n2 ++;
		break;
	
	case 3:
		n3 ++;
		break;
	
	case 4:
		n4 ++;
		break;
		
	case 5:
		n5 ++;
		break;
	
	case 6:
		n6 ++;
	
		}
	}
	
	std::cout << "\nNúmero: 1 -> " << n1 ;
	std::cout << "\nNúmero: 2 -> " << n2 ;
	std::cout << "\nNúmero: 3 -> " << n3 ;
	std::cout << "\nNúmero: 4 -> " << n4 ;
	std::cout << "\nNúmero: 5 -> " << n5 ;
	std::cout << "\nNúmero: 6 -> " << n6 ;

	
	return 0;
}