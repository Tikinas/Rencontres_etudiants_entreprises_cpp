#ifndef ExperienceProf_hpp
#define ExperienceProf_hpp

#include <string>
#include <iostream>
#include "Date.hpp"

using namespace std;

class Etudiant;

class ExperienceProf{
    Date date_debut;
    Date date_fin;
    string nom_entreprise;
    string fonction_occupee;

    Etudiant* etudiant;

    public:
    ExperienceProf(Date, Date, string, string, Etudiant*);
    ~ExperienceProf();

    void affiche();

    Date getDateDebut();
    void setDateDebut(Date);

    Date getDateFin();
    void setDateFin(Date);

    string getNomEntreprise();
    void setNomEntreprise(string);

    string getFonctionOccupee();
    void setFonctionOccupee(string);

    Etudiant* getEtudiant();
    void setEtudiant(Etudiant*);

};

#endif /* ExperienceProf_hpp */