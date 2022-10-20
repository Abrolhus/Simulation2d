#include "pato.h"
#include <iostream>
#include <string>

bool is_alpha_numeric(char c);

void Pato::quack(){
    std::cout << "quack" << std::endl;
}

void Pato::quack(int n, bool endline){
    std::string quacks = "";
    int mod_n = abs(n);
    for(int i = 0; i < mod_n-1; i++){
        quacks += "qua";
    }
    if(n != 0){
        quacks += "quack";
    }
    if(n < 0){
        for(int i = quacks.size()-1; i >= 0; i--){
            std::cout << quacks.at(i);
        }
        endline? std::cout << std::endl : std::cout<< "";
    }
    else{
        std::cout << quacks;
        endline? std::cout << std::endl : std::cout<< "";
    }

}

void Pato::quack(std::string text){
    // ana comeu um rato
    // qua quack qu quac
    // quack quack quack quack
    // qua qua qua quack
    // eu estava no paralelepipedo
    // QUAISQUER
    // CO-MER
    // CO MER
    // ANA
    // quaisquer
    // qu aisquer 
    // qua quaquack quaquaquaquaquack qua quaquack qua quaquaquaquaquack
    // qu quaqua qu quaquaquaquaqu
    int count = 0;
    for(int i = 0; i < text.size(); i++){
        char charr = text[i];
        if(!is_alpha_numeric(charr) || i == text.size()-1){
            // std::cout << count << ", ";
            count += 2;
            Pato::quack((int)(count/3.5), false);
            count = 0;
            std::cout << charr;
        }
        else{
            count++;
        }
    }
}
bool is_alpha_numeric(char c){
    return (c >= '0' && c <= '9') 
        || (c >= 'a' && c <= 'z')
        || (c >= 'A' && c <= 'Z');
}
