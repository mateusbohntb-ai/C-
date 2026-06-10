#include <iostream>
int main(){
	
	int idade;
	std::cout << "Informe um numero "<< std::endl;
	std::cin >> idade; 


    if (idade>17){
		std::cout << "Voce ja e de maior" << std::endl;
	}else{
		std::cout << "Voce e de menor " << std::endl;
	}	
	return 0;
}