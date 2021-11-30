# Classe_Nrepetido
Encontrar os numero repetidos e suas posições em um array de 5 valores.

/*
implemente um sistema onde o usuario, entre com 5 valores
e mostre quantos deles são repetidos e suas posições;
*/

// o valor repetido é %;
// sua posição é 1 e 3;

#include <iostream>

using namespace std;



class vetores{ // nome da classe;
int vetor[5]; // variavel para ação no metodo;
int i, v,j;
public: // metodo para acesso fora da classe
    vet(int vet[5]);// declaração do metodo

};


// Entradas
int vetores::vet(int vet[5]){//ação do metodo //parametro
for (i=0;i<5;i++){ //definindo tamanho do array
    cout << "Digite o " << i+1 << " valor"<< endl; 
    cin >> vet[i]; //guardando valores em suas posições.

} 
// Saidas
for (i=0;i<5;i++){ //  posições 
    for (j=i;j<5;j++){ // comparando posições  de i com j
            if(vet[i] == vet[j]){ // comparando valores de i com j
            if(i != j){ // se i for diferente de j ele executara a seguinte linha
    cout << "O numero repetido " << vet[i] <<  " na posicao " << i+1 << " e " << j+1 << endl;
        break;
    }
}
}
}
}
  //Chamando class
int main(){
    int vet[5];
vetores vetts;
vetts.vet(vet);
return 0;

}
