/*****************************************************************//**
 * \file   Entreprise.cpp
 * \brief  Definition de la classe Entreprise
 *
 * \author arthur
 * \version 0.1
 * \date   september 2025
 *
 * Programme Cpp permettant de creer des objets pour décrire les missions
 *********************************************************************/

#include "entreprise.h"



using namespace std;

/**
 * \brief Constructeur par default
 * \li nbPersonne = inconnu
 * \li descriptifMission = inconnu
 * \li nbHeure = inconnu
 */
Entreprise::Entreprise() {

	this->nbPersonne = "inconnu";
	this->descriptifMission = "inconnu";
	this->nbHeure = "inconnu";
}

/**
 * \brief Constructeur avec parametres rentres en argument
 *
 * \param nombre de personnes pour la mission
 * \param descriptif de la mission
 * \param nombre d'heures de la mission
 */
Entreprise::Entreprise(std::string personne, std::string mission, std::string heure) {
	this->nbPerssone = personne;
	this->descriptifMission = mission;
	this-> nbHeure = heure;
}
