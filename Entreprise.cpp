#include "Entreprise.hpp"
#include "RDV.hpp"

vector <Entreprise*> Entreprise::liste_entreprises;

Entreprise::Entreprise(string n, string a, string n_c, string t_c){
    nom = n;
    adresse = a;
    nom_contact = n_c;
    tel_contact = t_c;
}
Entreprise::~Entreprise() {
    for (RDV* rdv : rdv_avec_etudiants) {
        delete rdv;
    }
    rdv_avec_etudiants.clear();
}

void Entreprise::ajoutEntreprise(){
    vector<Entreprise*>::iterator it;
    int compteur = 0;
    for(it = liste_entreprises.begin(); it != liste_entreprises.end(); it++){
        if ((*it)->nom == nom){
            compteur = 1;
        }
    }
    if (compteur == 0){
        liste_entreprises.push_back(this);
    }
}
void Entreprise::ajoutRDVAvecEtudiant(RDV* rdv){
    rdv_avec_etudiants.push_back(rdv);
}

string Entreprise::getNom(){
    return nom;
}
void Entreprise::setNom(string n){
    nom = n;
}

string Entreprise::getAdresse(){
    return adresse;
}
void Entreprise::setAdresse(string a){
    adresse = a;
}

string Entreprise::getNomContact(){
    return nom_contact;
}
void Entreprise::setNomContact(string n_c){
    nom_contact = n_c;
}

string Entreprise::getTelContact(){
    return tel_contact;
}
void Entreprise::setTelContact(string t_c){
    tel_contact = t_c;
}



