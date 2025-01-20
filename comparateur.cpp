#include "comparateur.hpp"
#include "RDV.cpp"

bool comparateurRDVEtudiant(RDV* rdv1, RDV* rdv2)
{
    if (rdv1->getDate().annee == rdv2->getDate().annee){
        if (rdv1->getDate().mois == rdv2->getDate().mois){
            if (rdv1->getDate().jour == rdv2->getDate().jour){
                return (rdv1->getHeureDebut() < rdv2->getHeureDebut());
            }
            return (rdv1->getDate().jour < rdv2->getDate().jour);
        }
        return (rdv1->getDate().mois < rdv2->getDate().mois);
    }
    else return (rdv1->getDate().annee < rdv2->getDate().annee);
}
bool comparateurRDVEntreprise(RDV* rdv1, RDV* rdv2)
{
    if (rdv1->getEntreprise()->getNom() == rdv2->getEntreprise()->getNom()){
        if (rdv1->getDate().annee == rdv2->getDate().annee){
            if (rdv1->getDate().mois == rdv2->getDate().mois){
                if (rdv1->getDate().jour == rdv2->getDate().jour){
                    return (rdv1->getHeureDebut() < rdv2->getHeureDebut());
                }
                return (rdv1->getDate().jour < rdv2->getDate().jour);
            }
            return (rdv1->getDate().mois < rdv2->getDate().mois);
        }
        return (rdv1->getDate().annee < rdv2->getDate().annee);
    }
    else return (rdv1->getEntreprise()->getNom() < rdv2->getEntreprise()->getNom());
}