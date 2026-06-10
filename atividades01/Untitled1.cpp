#include <iostream>



int main(){
	
	int x = 0 ;
	int y = 0 ;
	std::cout <<"informe um numero";
	std::cin >> x ;
	std::cout << std :: endl << "informe outro numero ";
	std::cin >> y ; 
	std::cout << "Soma : " << x+ y;
	std::cout << "Subtraçao : " << x - y;
	std::cout << "Multiplicaçao : " << x * y;
	if(y==0){
		std::cout << "Nao e possivel fazer divisao por zero" ;
	 }else{
	 		std::cout <<"Divisao " <,
			std::cout << "Divisao : " << x / y;
			std::cout << "Resto : " << x % y;
	 };
	
	

	return 0;
}
