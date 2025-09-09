#include <iostream>
#include "Entreprise.h"
#include "mission.h"

int main() {
    // Création d'une entreprise avec le constructeur paramétré
    Entreprise maSuperEntre("comcyber", "Paris");
    std::cout << "Nom de l'entreprise : " << maSuperEntre.getNomEntreprise() << std::endl;
    std::cout << "Ville de l'entreprise : " << maSuperEntre.getVilleEntreprise() << std::endl;

    // Modification des attributs privés via les méthodes publiques
    maSuperEntre.setEntreprise("lesBTSciel");
    maSuperEntre.setVilleEntreprise("guer");
    std::cout << "Nom modifie : " << maSuperEntre.getNomEntreprise() << std::endl;
    std::cout << "Ville modifiee : " << maSuperEntre.getVilleEntreprise() << std::endl;

    // Création d'une mission avec le constructeur paramétré
    mission mamission("5", "Développement logiciel cyber", "40");
    std::cout << "Nombre de personnes : " << mamission.getNbPersonne() << std::endl;
    std::cout << "Descriptif : " << mamission.getDescriptifMission() << std::endl;
    std::cout << "Nombre d'heures : " << mamission.getNbHeure() << std::endl;

    // Modification des attributs privés via les méthodes publiques
    mamission.setNbPersonne("13");
    mamission.setDescriptifMission("apprendre le c++");
    mamission.setNbHeure("8");
    std::cout << "Nombre de personnes modifie : " << mamission.getNbPersonne() << std::endl;
    std::cout << "Descriptif modifie : " << mamission.getDescriptifMission() << std::endl;
    std::cout << "Nombre d'heures modifie : " << mamission.getNbHeure() << std::endl;

    return 0;
}