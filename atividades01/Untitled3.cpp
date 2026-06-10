#include <iostream>

int main(){
	const int TAMANHO = 6;
	int guardiao = 0 ;
	int megaSena[TAMANHO] = {0,0,0,0,0,0};

for(int posicao = 0 ; posicao <TAMANHO;posicao++){
  std::cout << "Informe um numero " << std::endl;
  std::cin>>megaSena[posicao];
}



std::cout <<"Numero jogados - no 06/2026" <<std::endl;
while (guardiao< TAMANHO) {
	std::cout<<megaSena[guardiao] <<" -";
	guardiao++;
}


return 0;
}