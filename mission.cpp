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

#include "mission.h"



using namespace std;

/**
 * \brief Constructeur par default
 * \li nbPersonne = inconnu
 * \li descriptifMission = inconnu
 * \li nbHeure = inconnu
 */
mission::mission() {

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
mission::mission(std::string personne, std::string mission, std::string heure) {
	this->nbPerssone = personne;
	this->descriptifMission = mission;
	this->nbHeure = heure;
}


/**
 * \brief Destructeur
 *
 */
mission::~mission() {

	cout << "Destrcution de l'entreprise " << this->nbPersonne << " " << this->descriptifMission << " " << this->nbHeure << endl;

}