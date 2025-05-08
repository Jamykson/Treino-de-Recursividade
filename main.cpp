#include <iostream>

int fat(int n){

    if(n==0){
        return 1;
    }else{
        return n * fat(n-1);
    }
}

int main(){

    int numero;
    std::cin >> numero;
    std::cout << fat(numero);

    return 0;
}