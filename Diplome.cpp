#include "Diplome.hpp"

Diplome::Diplome(string c, string n){
    code = c;
    nom = n;
}

void Diplome::affiche(){
    cout << "Code: " << code << " | Nom: " << nom;
}

string Diplome::getCode(){
    return code;
}
void Diplome::setCode(string c){
    code = c;
}

string Diplome::getNom(){
    return nom;
}
void Diplome::setNom(string n){
    nom = n;
}