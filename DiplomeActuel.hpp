#ifndef DiplomeActuel_hpp
#define DiplomeActuel_hpp

#include <vector>
#include "Date.hpp"
#include "Diplome.hpp"

class Etudiant;

class DiplomeActuel : public Diplome{
    Date date_insription;
    string num_annee;

    vector<Etudiant*> etudiants;

    public:
    DiplomeActuel(string, string, Date, string);
    ~DiplomeActuel();

    void ajoutEtudiant(Etudiant*);
    void affiche();

    Date getDateIncription();
    void setDateIncription(Date);

    string getNumAnnee();
    void setNumAnnee(string);
};


#endif /* DiplomeActuel_hpp */