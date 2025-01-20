#include "DiplomeObtenu.hpp"
#include "Etudiant.hpp"

DiplomeObtenu::DiplomeObtenu(string c, string n, Date d, string l):Diplome(c, n){
    date = d;
    lieu = l;
}
DiplomeObtenu::~DiplomeObtenu(){
    for (Etudiant* etudiant : etudiants) {
        delete etudiant;
    }
    etudiants.clear();
}

void DiplomeObtenu::ajoutEtudiant(Etudiant* etu){
    etudiants.push_back(etu);
}
void DiplomeObtenu::affiche(){
    Diplome::affiche();
    cout << " | Date d'obtention: " << date.jour << "/" << date.mois << "/" << date.annee << " | Lieu d'obtention: " << lieu << endl;
}

Date DiplomeObtenu::getDate(){
    return date;
}
void DiplomeObtenu::setDateIncription(Date d){
    date = d;
}

string DiplomeObtenu::getLieu(){
    return lieu;
}
void DiplomeObtenu::setLieu(string l){
    lieu = l;
}