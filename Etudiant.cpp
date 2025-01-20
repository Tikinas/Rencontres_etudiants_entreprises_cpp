#include "Etudiant.hpp"
#include "DiplomeObtenu.hpp"
#include "DiplomeActuel.hpp"
#include "RDV.hpp"
#include "ExperienceProf.hpp"
#include "comparateur.hpp"

vector<Etudiant*> Etudiant::liste_etudiants;

Etudiant::Etudiant(string num, string n, string p, string a, string n_t, DiplomeActuel* d_a){
    numero = num;
    nom = n;
    prenom = p;
    adresse = a;
    num_tel = n_t;
    diplome_actuel = d_a;
}
Etudiant::~Etudiant() {
    for (DiplomeObtenu* diplome : diplomes_obtenus) {
        delete diplome;
    }
    diplomes_obtenus.clear();

    delete diplome_actuel;

    for (RDV* rdv : rdv_avec_entreprise) {
        delete rdv;
    }
    rdv_avec_entreprise.clear();

    for (ExperienceProf* exp : experiences) {
        delete exp;
    }
    experiences.clear();
}

void Etudiant::ajoutEtudiant(){
    vector<Etudiant*>::iterator it;
    int compteur = 0;
    //On vérifie dans la liste des étudiants si l'étudiant existe déjà en fonction de son numéro étudiant
    for(it = liste_etudiants.begin(); it != liste_etudiants.end(); it++){
        if ((*it)->numero == numero){
            compteur = 1;
        }
    }
    if (compteur == 0){
        liste_etudiants.push_back(this);
        //Puisque l'étudiant est dans la liste, on peut l'ajouter dans la liste des diplomes actuels
        diplome_actuel->ajoutEtudiant(this);
    }
}
void Etudiant::ajoutDiplomeObtenu(DiplomeObtenu* d_o){
    vector<Etudiant*>::iterator it;
    //On vérifie dans la liste des étudiants si l'étudiant existe déjà en fonction de son numéro étudiant
    for(it = liste_etudiants.begin(); it != liste_etudiants.end(); it++){
        if ((*it)->numero == numero){
            d_o->ajoutEtudiant(this);
        }
    }
    diplomes_obtenus.push_back(d_o);
}
void Etudiant::ajoutRDVAvecEntreprise(RDV* rdv){
    rdv_avec_entreprise.push_back(rdv);
}
void Etudiant::ajoutExperienceProfessionnel(ExperienceProf* e_p){
    experiences.push_back(e_p);
}
void Etudiant::affiche(){
    cout << "Numero: " << numero << " | Nom: " << nom << " | Prenom: " << prenom << " | Adresse: " << adresse << " | Numero tel: " << num_tel;
}
void Etudiant::affiche_rdv(string n, string p){
    bool exist = false;
    vector<Etudiant*>::iterator it;
    for(it = liste_etudiants.begin(); it != liste_etudiants.end(); it++){
        if((*it)->nom == n && (*it)->prenom == p){
            exist = true;
            vector<RDV*>::iterator it2;
            sort((*it)->rdv_avec_entreprise.begin(), (*it)->rdv_avec_entreprise.end(), comparateurRDVEtudiant);
            for(it2 = (*it)->rdv_avec_entreprise.begin(); it2 != (*it)->rdv_avec_entreprise.end(); it2++){
                (*it2)->affiche();
            }
        }
    }
    if (exist == false){
        cout << "L'étudiant n'est pas trouvé" << endl;
    }
}
void Etudiant::affiche_rdv(string num){
    bool exist = false;
    vector<Etudiant*>::iterator it;
    for(it = liste_etudiants.begin(); it != liste_etudiants.end(); it++){
        if((*it)->numero == num){
            exist = true;
            vector<RDV*>::iterator it2;
            sort((*it)->rdv_avec_entreprise.begin(), (*it)->rdv_avec_entreprise.end(), comparateurRDVEtudiant);
            for(it2 = (*it)->rdv_avec_entreprise.begin(); it2 != (*it)->rdv_avec_entreprise.end(); it2++){
                (*it2)->affiche();
            }
        }
    }
    if (exist == false){
        cout << "L'étudiant n'est pas trouvé" << endl;
    }
}
void Etudiant::afficheCV(){
    cout << "CV :" << endl;
    this->affiche();
    cout << endl;
    cout << "Diplome actuel: " << endl; 
    cout << "   " ;
    diplome_actuel->affiche();

    cout << "Diplomes obtenus: " << endl;
    vector<DiplomeObtenu*>::iterator it; 
    for(it = diplomes_obtenus.begin(); it != diplomes_obtenus.end(); it++){
        cout << "   " ;
        (*it)->affiche();
    }

    cout << "Expériences professionnelles: " << endl;
    vector<ExperienceProf*>::iterator it2; 
    for(it2 = experiences.begin(); it2 != experiences.end(); it2++){
        cout << "   " ;
        (*it2)->affiche();
    }
}



string Etudiant::getNumero(){
    return numero;
}
void Etudiant::setNumero(string num){
    numero = num;
}

string Etudiant::getNom(){
    return nom;
}
void Etudiant::setNom(string n){
    nom = n;
}

string Etudiant::getPrenom(){
    return prenom;
}
void Etudiant::setPrenom(string p){
    prenom = p;
}

string Etudiant::getAdresse(){
    return adresse;
}
void Etudiant::setAdresse(string a){
    adresse = a;
}

string Etudiant::getNumTel(){
    return num_tel;
}
void Etudiant::setNumTel(string n_t){
    num_tel = n_t;
}

DiplomeActuel* Etudiant::getDiplomeActuel(){
    return diplome_actuel;
}
void Etudiant::setDiplomeActuel(DiplomeActuel* d_a){
    diplome_actuel = d_a;
}

