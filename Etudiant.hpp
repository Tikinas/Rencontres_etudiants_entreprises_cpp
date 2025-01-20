#ifndef Etudiant_hpp
#define Etudiant_hpp

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class DiplomeObtenu;
class DiplomeActuel;
class RDV;
class ExperienceProf;

class Etudiant{
    string numero;
    string nom;
    string prenom;
    string adresse;
    string num_tel;

    vector<DiplomeObtenu*> diplomes_obtenus;
    DiplomeActuel* diplome_actuel;
    vector<RDV*> rdv_avec_entreprise;
    vector<ExperienceProf*> experiences;

    public:
    
    static vector<Etudiant*> liste_etudiants;

    Etudiant(string, string, string, string, string, DiplomeActuel*);
    ~Etudiant();

    void ajoutEtudiant();
    void ajoutRDVAvecEntreprise(RDV*);
    void ajoutDiplomeObtenu(DiplomeObtenu*);
    void ajoutExperienceProfessionnel(ExperienceProf*);
    virtual void affiche();
    static void affiche_rdv(string, string);
    static void affiche_rdv(string);
    virtual void afficheCV();

    string getNumero();
    void setNumero(string);

    string getNom();
    void setNom(string);

    string getPrenom();
    void setPrenom(string);

    string getAdresse();
    void setAdresse(string);

    string getNumTel();

    void setNumTel(string);

    DiplomeActuel* getDiplomeActuel();
    void setDiplomeActuel(DiplomeActuel*);
};

#endif /* Etudiant.hpp */