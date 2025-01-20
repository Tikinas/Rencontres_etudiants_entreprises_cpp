#ifndef Entreprise_hpp
#define Entreprise_hpp

#include <string>
#include <vector>

using namespace std;

class RDV;

class Entreprise{
    string nom;
    string adresse;
    string nom_contact;
    string tel_contact;

    vector<RDV*> rdv_avec_etudiants;

    public:
    static vector<Entreprise*> liste_entreprises;
    
    Entreprise(string, string, string, string);

    ~Entreprise();

    void ajoutEntreprise();
    void ajoutRDVAvecEtudiant(RDV*);

    string getNom();
    void setNom(string);

    string getAdresse();
    void setAdresse(string);

    string getNomContact();
    void setNomContact(string);

    string getTelContact();
    void setTelContact(string);
};


#endif /* Entreprise_hpp */