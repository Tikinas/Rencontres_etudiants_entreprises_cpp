#include <iostream>
#include "Etudiant.cpp"
#include "EtudiantPremierCycle.cpp"
#include "EtudiantDeuxiemeCycle.cpp"
#include "Diplome.cpp"
#include "DiplomeActuel.cpp"
#include "DiplomeObtenu.cpp"
#include "ExperienceProf.cpp"
#include "Entreprise.cpp"
#include "comparateur.cpp"

using namespace std;

int main(void){
    DiplomeActuel* dip_l3 = new DiplomeActuel("19", "Licence Informatique", {11, 9, 2022}, "3");
    DiplomeActuel* dip_m1 = new DiplomeActuel("51", "Master Informatique", {2, 9, 2025}, "1");

    DiplomeObtenu* d_o = new DiplomeObtenu("41", "baccalauréat", {10, 7, 2022}, "meknès");
    DiplomeObtenu* d_o2 = new DiplomeObtenu("65", "Licence Informatique", {3, 6, 2025}, "FST limoges");

    EtudiantPremierCycle* etu1 = new EtudiantPremierCycle("1", "Boussaid", "Hamid", "*adresse*", "*tel*", dip_l3, "*serie_bac*", 2022, "Maroc");
    etu1->ajoutDiplomeObtenu(d_o);
    etu1->ajoutEtudiant();
   
    EtudiantPremierCycle* etu2 = new EtudiantPremierCycle("2", "Hizouni", "Mohammed", "*adresse*", "*tel*", dip_l3, "*serie_bac*", 2022, "Congo");
    etu2->ajoutDiplomeObtenu(d_o);
    etu2->ajoutEtudiant();

    EtudiantDeuxiemeCycle* etu3 = new EtudiantDeuxiemeCycle("3", "Abboud", "Tikinas", "*adresse*", "*tel*", dip_m1, "Informatique");
    etu3->ajoutDiplomeObtenu(d_o);
    etu3->ajoutDiplomeObtenu(d_o2);
    etu3->ajoutEtudiant();
    
    EtudiantDeuxiemeCycle* etu4 = new EtudiantDeuxiemeCycle("3", "Abboud", "Tikinas", "*adresse*", "*tel*", dip_m1, "Informatique");
    etu4->ajoutEtudiant(); //Cet étudiant existe déjà dans la liste
    //delete etu4;

    ExperienceProf* exp1 = new ExperienceProf({21, 6, 2022}, {5, 9, 2022}, "HP", "Stagaire", etu2);
    ExperienceProf* exp2 = new ExperienceProf({6, 7, 2023}, {17, 10, 2023}, "Google", "Stagaire", etu3);
    ExperienceProf* exp3 = new ExperienceProf({23, 9, 2022}, {10, 1, 2023}, "Google", "Chef de projet", etu3);

    Entreprise* ent1 = new Entreprise("Dell", "*adresse*", "Olivier", "*tel*");
    ent1->ajoutEntreprise();
    Entreprise* ent2 = new Entreprise("Samsung", "*adresse*", "Raphael", "*tel*");
    ent2->ajoutEntreprise();
    Entreprise* ent3 = new Entreprise("Samsung", "*adresse*", "Raphael", "*tel*");
    ent3->ajoutEntreprise(); //Cet entreprise existe déjà dans la liste
    delete ent3;

    RDV* rdv1 = new RDV({8, 4, 2025}, 10, 12, etu1, ent1);
    rdv1->ajoutRDV();
    RDV* rdv2 = new RDV({8, 4, 2025}, 11, 12, etu1, ent2);
    rdv2->ajoutRDV(); //Rendez-vous non compatible car il est confondu avec rdv1 donc n'est pas ajouté
    RDV* rdv4 = new RDV({8, 4, 2025}, 9, 10, etu2, ent1);
    rdv4->ajoutRDV(); //Etudiant non existant
    RDV* rdv5 = new RDV({14, 3, 2025}, 15, 16, etu2, ent2);
    rdv5->ajoutRDV();
    RDV* rdv6 = new RDV({5, 6, 2027}, 11, 13, etu3, ent1);
    rdv6->ajoutRDV();

    //Liste triée (sur la date et l’heure) des rendez-vous d’un étudiant identifié par son nom et prénom
    Etudiant::affiche_rdv("Hizouni", "Mohammed");

    cout << "------------------------------------------------------------------------------------" << endl;

    //Liste triée (sur la date et l’heure) des rendez-vous d’un étudiant identifié par son numero
    Etudiant::affiche_rdv("1");

    cout << "------------------------------------------------------------------------------------" << endl;

    //Liste triée (sur le nom de l’entreprise puis sur la date et l’heure) des rendez-vous pour toutes les entreprises donnant des rendez-vous
    RDV::afficheTout();

    cout << "------------------------------------------------------------------------------------" << endl;

    //« CV » d’un étudiant : informations administratives, diplômes obtenus, expériences professionnelles
    etu1->afficheCV();
    cout << "------------------------------------------------------------------------------------" << endl;
    etu2->afficheCV();
    cout << "------------------------------------------------------------------------------------" << endl;
    etu3->afficheCV();
    cout << "------------------------------------------------------------------------------------" << endl;

}