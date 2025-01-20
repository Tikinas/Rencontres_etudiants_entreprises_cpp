#include "EtudiantDeuxiemeCycle.hpp"

EtudiantDeuxiemeCycle::EtudiantDeuxiemeCycle(string num, string n, string p, string a, string n_t, DiplomeActuel* d_a, string n_d):Etudiant(num, n, p, a, n_t, d_a){
    nom_discipline = n_d;
}

void EtudiantDeuxiemeCycle::affiche(){
    Etudiant::affiche();
    cout << " Nom du discipline principale: " << nom_discipline;
}

string EtudiantDeuxiemeCycle::getNomDiscipline(){
    return nom_discipline;
}
void EtudiantDeuxiemeCycle::setNomDiscipline(string n_d){
    nom_discipline = n_d;
}