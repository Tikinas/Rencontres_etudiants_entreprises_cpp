#ifndef Diplome_hpp
#define Diplome_hpp

//#include <string>
#include <iostream>
//#include "Etudiant.cpp"
using namespace std;

class Diplome{
    string code;
    string nom;

    public:
    Diplome(string, string);

    virtual void affiche();

    string getCode();
    void setCode(string);

    string getNom();
    void setNom(string);
};


#endif /* Diplome_hpp */