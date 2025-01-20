#include "RDV.hpp"
#include "Etudiant.hpp"
#include "Entreprise.hpp"
#include "comparateur.hpp"

vector <RDV*> RDV::liste_RDV;

RDV::RDV(Date d, int h_d, int h_f, Etudiant* etu, Entreprise* ent){
    date = d;
    heure_debut = h_d;
    heure_fin = h_f;
    etudiant = etu;
    entreprise = ent;
}
RDV::~RDV(){
    delete etudiant;
    delete entreprise;
}

void RDV::ajoutRDV(){
    try{
        vector<RDV*>::iterator it3;
        int compteur = 0;
        //Si l'étudiant et l'entreprise sont compatibles, on vérifie les tranches horaires
        for(it3 = liste_RDV.begin(); it3 != liste_RDV.end(); it3++){
            if ((*it3)->etudiant == etudiant || (*it3)->entreprise == entreprise){
                if ((*it3)->date.annee == date.annee && (*it3)->date.mois == date.mois && (*it3)->date.jour == date.jour){
                    if ((*it3)->heure_debut < heure_debut && (*it3)->heure_fin > heure_debut){
                        compteur = 1;
                    }
                }                
            }
        }
        if (compteur == 0){
            liste_RDV.push_back(this);
            etudiant->ajoutRDVAvecEntreprise(this);
            entreprise->ajoutRDVAvecEtudiant(this);
        }
        else{
            cout << "Rendez-vous non compatible" << endl;             
        }
    }
    catch(exception e){
        cout << "erreur" << endl;
    }
}

void RDV::affiche(){
    cout << "Entreprise: " << entreprise->getNom() << " | Etudiant: " << etudiant->getNumero() << " | Date: "<<date.jour<<"/"<<date.mois<<"/"<<date.annee<<" | Heure debut : "<<heure_debut<<" | Heure fin : "<<heure_fin<<endl;
}
void RDV::afficheTout(){
    vector<RDV*>::iterator it;
    sort(liste_RDV.begin(), liste_RDV.end(), comparateurRDVEntreprise);
    for(it = liste_RDV.begin(); it != liste_RDV.end(); it++){
        (*it)->affiche();
        
    }
}

Date RDV::getDate(){
    return date;
}
void RDV::setDate(Date d){
    date = d;
}

int RDV::getHeureDebut(){
    return heure_debut;
}
void RDV::setHeureDebut(int h_d){
    heure_debut = h_d;
}

int RDV::getHeureFin(){
    return heure_fin;
}
void RDV::setHeureFin(int h_f){
    heure_fin = h_f;
}

Etudiant* RDV::getEtudiant(){
    return etudiant;
}
void RDV::setEtudiant(Etudiant* etu){
    etudiant = etu;
}

Entreprise* RDV::getEntreprise(){
    return entreprise;
}
void RDV::setEntreprise(Entreprise* ent){
    entreprise = ent;
}

