#ifndef DiplomeObtenu_hpp
#define DiplomeObtenu_hpp

#include <vector>
#include "Diplome.hpp"
#include "Date.hpp"

class Etudiant;

class DiplomeObtenu : public Diplome{
    Date date;
    string lieu;

    vector<Etudiant*> etudiants;

    public:
    DiplomeObtenu(string, string, Date, string);
    ~DiplomeObtenu();

    void ajoutEtudiant(Etudiant*);
    void affiche();

    Date getDate();
    void setDateIncription(Date);

    string getLieu();
    void setLieu(string);
};


#endif /* DiplomeObtenu_hpp */