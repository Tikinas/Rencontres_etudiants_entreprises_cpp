#include "DiplomeActuel.hpp"
#include "Etudiant.hpp"

DiplomeActuel::DiplomeActuel(string c, string n, Date d_i, string n_a):Diplome(c, n){
    date_insription = d_i;
    num_annee = n_a;
}
DiplomeActuel::~DiplomeActuel(){
    for (Etudiant* etudiant : etudiants) {
        delete etudiant;
    }
    etudiants.clear();
}

void DiplomeActuel::ajoutEtudiant(Etudiant* etu){
    etudiants.push_back(etu);
}
void DiplomeActuel::affiche(){
    Diplome::affiche();
    cout << " | Date inscription: " << date_insription.jour << "/" << date_insription.mois << "/" << date_insription.annee << " | Numero année: " << num_annee << endl;
}

Date DiplomeActuel::getDateIncription(){
    return date_insription;
}
void DiplomeActuel::setDateIncription(Date d_i){
    date_insription = d_i;
}

string DiplomeActuel::getNumAnnee(){
    return num_annee;
}
void DiplomeActuel::setNumAnnee(string n_a){
    num_annee = n_a;
}