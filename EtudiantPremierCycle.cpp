#include "EtudiantPremierCycle.hpp"

EtudiantPremierCycle::EtudiantPremierCycle(string num, string n, string p, string a, string n_t, DiplomeActuel* d_a, string s_b, int a_o, string l_o):Etudiant(num, n, p, a, n_t, d_a){
    serie_bac = s_b;
    annee_obtention = a_o;
    lieu_obtention = l_o;
}

void EtudiantPremierCycle::affiche(){
    Etudiant::affiche();
    cout << " Série du Baccalauréat: " << serie_bac << " Année d'obtention: " << annee_obtention << " Lieu d'obtention: " << lieu_obtention;
}

string EtudiantPremierCycle::getSerieBac(){
    return serie_bac;
}
void EtudiantPremierCycle::setSerieBac(string s_b){
    serie_bac = s_b;
}

int EtudiantPremierCycle::getAnneeObtention(){
    return annee_obtention;
}
void EtudiantPremierCycle::setAnneeObtention(int a_o){
    annee_obtention = a_o;
}

string EtudiantPremierCycle::getLieuObtention(){
    return lieu_obtention;
}
void EtudiantPremierCycle::setLieuObtention(string l_o){
    lieu_obtention = l_o;
}