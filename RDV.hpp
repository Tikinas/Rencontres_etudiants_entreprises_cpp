#ifndef RDV_hpp
#define RDV_hpp

#include <iostream>
#include <vector>

#include "Date.hpp"

using namespace std;

class Etudiant;
class Entreprise;

class RDV{
    Date date;
    int heure_debut;
    int heure_fin;

    Etudiant* etudiant;
    Entreprise* entreprise;

    public:
    static vector<RDV*> liste_RDV;

    RDV(Date, int, int, Etudiant*, Entreprise*);
    ~RDV();

    void ajoutRDV();
    void affiche();
    static void afficheTout();

    Date getDate();
    void setDate(Date);

    int getHeureDebut();
    void setHeureDebut(int);

    int getHeureFin();
    void setHeureFin(int);

    Etudiant* getEtudiant();
    void setEtudiant(Etudiant*);

    Entreprise* getEntreprise();
    void setEntreprise(Entreprise*);

};

#endif /* RDV_hpp */