#ifndef EtudiantPremierCycle_hpp
#define EtudiantPremierCycle_hpp

#include "Etudiant.hpp"

class EtudiantPremierCycle : public Etudiant{
    string serie_bac;
    int annee_obtention;
    string lieu_obtention;

    public:
    EtudiantPremierCycle(string, string, string, string, string, DiplomeActuel*, string, int, string);
    
    void affiche();

    string getSerieBac();
    void setSerieBac(string);

    int getAnneeObtention();
    void setAnneeObtention(int);

    string getLieuObtention();
    void setLieuObtention(string);

};

#endif /* EtudiantPremierCycle_hpp */