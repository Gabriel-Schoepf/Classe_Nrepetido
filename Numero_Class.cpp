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
for (i=0;i<5;i++){
    cout << "Digite o " << i+1 << " valor"<< endl;
    cin >> vet[i];

} 
// Saidas
for (i=0;i<5;i++){
    for (j=i;j<5;j++){
            if(vet[i] == vet[j]){
            if(i != j){
    cout << "O numero repetido " << vet[i] <<  " na posicao " << i+1 << " e " << j+1 << endl;
        break;
    }
}
}
}
}
int main(){
    int vet[5];
vetores vetts;
vetts.vet(vet);
return 0;

}
