/*****************************************************************//**
 * \file   mission.cpp
 * \brief  Definition de la classe mission
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

/**
 * \brief Constructeur de copie
 *
 * \param entre Objet de type mission
 */
mission::mission(const mission& miss)
{
    cout << "Copie de Capitaine" << endl;
	this->nbPersonne = miss.nbPersonne;
	this->descriptifMission = miss.descriptifMission;
	this->nbHeure = miss.nbHeure;
}

/**
 * \brief Operateur d'affectation
 *
 * \param entre Objet de type mission
 * \return Nouvelle objet de type mission
 */
mission::operator=(const mission& miss)
{
    cout << "Affectation de la mission" << std::endl;
    if (this != &entre)  // Pour éviter que l'on ne se recopie pas...
    {
		this->nbPersonne = miss.nbPersonne;
		this->descriptifMission = miss.descriptifMission;
		this->nbHeure = miss.nbHeure;
    }
    return *this;
}

/**
 * \brief Accesseur de l'attribut nbPersonne
 *
 * \return nombre de personnes pour la mission
 */
std::string mission::getNbPersonne()
{
	return this->nbPersonne;
}

/**
 * \brief Accesseur de l'attribut descriptifMission
 *
 * \return descriptif de la mission
 */
std::string mission::getDescriptifMission()
{
	return this->descriptifMission;
}


/**
 * \brief Accesseur de l'attribut nbHeure
 *
 * \return nombre d'heures de la mission
 */
std::string mission::getNbHeure()
{
	return this->nbHeure;
}

/**
 * \brief Mutateur de l'attribut nbPersonne
 *
 * \param nouveauNbPersonne nouveau nombre de personnes pour la mission
 */
void  mission::setNbPersonne(std::string nouveauNbPersonne) {
	this->nbPersonne = nouveauNbPersonne;
}

/**
 * \brief Mutateur de l'attribut descriptifMission
 *
 * \param nouveauDescriptifMission nouveau descriptif de la mission
 */
void  mission::setDescriptifMission(std::string nouveauDescriptifMission) {
	this->descriptifMission = nouveauDescriptifMission;
}

/**
 * \brief Mutateur de l'attribut nbHeure
 *
 * \param nouveauNbHeure nouveau nombre d'heures de la mission
 */
void  mission::setNbHeure(std::string nouveauNbHeure) {
	this->nbHeure = nouveauNbHeure;
}