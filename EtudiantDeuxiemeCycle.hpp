#ifndef EtudiantDeuxiemeCycle_hpp
#define EtudiantDeuxiemeCycle_hpp

#include "Etudiant.hpp"

class EtudiantDeuxiemeCycle : public Etudiant{
    string nom_discipline;

    public:
    EtudiantDeuxiemeCycle(string, string, string, string, string, DiplomeActuel*, string);

    void affiche();

    string getNomDiscipline();
    void setNomDiscipline(string);
};

#endif /* EtudiantDeuxiemeCycle_hpp */