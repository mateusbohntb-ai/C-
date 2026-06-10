#include <iostream>
#include <string>
int main(){
	char opcao ;
	std::cin >> opcao ;
	std::cout<<"informe uma letra : ";
	if(opcao == 'j' || opcao == 'J') {
		std::cout << "voce digitou a letra j"<<std::endl ;
	} else {
		std::cout << "Opcao invalida"<<std::endl;
	}
	
	
	std::string nome = "";
	std::cout << "informe um nome : ";
	std::cin >> nome ;
	std::cout << "Nome digitado : " <<nome <<std::endl ;
	
	return 0 ;
	
	
	
}