# Rencontres Étudiants-Entreprises (C++)

## Description
Ce projet est une application en C++ qui simule un système de gestion de rencontres entre étudiants et entreprises. Il permet de gérer les inscriptions, les rendez-vous et les interactions entre les deux parties.

## Fonctionnalités
- **Inscription des étudiants** : Les étudiants peuvent s'inscrire avec leurs informations personnelles.
- **Inscription des entreprises** : Les entreprises peuvent s'inscrire et proposer des offres de stage ou d'emploi.
- **Gestion des rendez-vous** : Les étudiants peuvent réserver des créneaux pour rencontrer des entreprises.
- **Affichage des informations** : Consultation des listes d'étudiants, d'entreprises et des rendez-vous planifiés.

## Technologies utilisées
- **Langage** : C++
- **Bibliothèques** : Standard Template Library (STL)
- **Compilation** : GCC ou tout autre compilateur C++
## Exemple d'utilisation
1. **Inscription d'un étudiant**
 - **Nom** : Jean Dupont  
 - **Spécialité** : Informatique 
 - **Niveau** : L3
2. **Inscription d'une entreprise**
 - **Nom** : TechCorp
 - **Secteur** : Développement logiciel
 - **Offres** : Stage en C++

3.**Planification d'un rendez-vous**
 - **Étudiant** : Jean Dupon
 - **Entreprise** : TechCorp
 - **Date** : 29/01/2025
 - **Heure** : 14h00
## Comment lancer le projet
1. **Cloner le dépôt** :
   ```bash
   git clone https://github.com/Tikinas/Rencontres_etudiants_entreprises_cpp.git
   cd Rencontres_etudiants_entreprises_cpp
2.**Compilation**
-Option 1 : avec CMake (recommandé)
```bash
  mkdir build && cd build
  cmake ..
  make
  ./ree
```
#Option 2 : compilation directe avec g++
```bash
  g++ src/*.cpp -I include -o ree
  ./ree 
```
