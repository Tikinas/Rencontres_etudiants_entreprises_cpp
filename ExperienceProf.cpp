#include "ExperienceProf.hpp"
#include "Etudiant.hpp"

ExperienceProf::ExperienceProf(Date d_d, Date d_f, string n_e, string f_o, Etudiant* etu){
    date_debut = d_d;
    date_fin = d_f;
    nom_entreprise = n_e;
    fonction_occupee = f_o;
    etudiant = etu;
    etu->ajoutExperienceProfessionnel(this);
}
ExperienceProf::~ExperienceProf(){
    delete etudiant;
}

void ExperienceProf::affiche(){
    cout << "Nom entreprise: " << nom_entreprise << " | Fonction occupée: " << fonction_occupee << " | Date début: " << date_debut.jour << "/" << date_debut.mois << "/" << date_debut.annee << " | Date fin: " << date_fin.jour << "/" << date_fin.mois << "/" << date_fin.annee << endl;
}

Date ExperienceProf::getDateDebut(){
    return date_debut;
}
void ExperienceProf::setDateDebut(Date d_d){
    date_debut = d_d;
}

Date ExperienceProf::getDateFin(){
    return date_fin;
}
void ExperienceProf::setDateFin(Date d_f){
    date_fin = d_f;
}

string ExperienceProf::getNomEntreprise(){
    return nom_entreprise;
}
void ExperienceProf::setNomEntreprise(string n_e){
    nom_entreprise = n_e;
}

string ExperienceProf::getFonctionOccupee(){
    return fonction_occupee;
}
void ExperienceProf::setFonctionOccupee(string f_o){
    fonction_occupee = f_o;
}

Etudiant* ExperienceProf::getEtudiant(){
    return etudiant;
}
void ExperienceProf::setEtudiant(Etudiant* etu){
    etudiant = etu;
}