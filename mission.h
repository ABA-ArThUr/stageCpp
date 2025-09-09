/*****************************************************************//**
* \file   mission.h
* \brief  Declaration de la classe mission
*
* \author Arthur
* \date   september 2025
* ********************************************************************/

#ifndef ENTREPRISE_H
#define ENTREPRISE_H
#define mission_H
#ifndef MISSION_H
#include <iostream>
#include <string>


/*! \class mission
   * \brief classe representant une mission. 3 attributs prives
   */
    class mission
{

private:
    /**
	 * Membre prive nbPersonne : contient le nombre de personnes pour la mission
     */
	std::string nbPersonne;
    /**
	 * Membre prive descriptifMission : contient le descriptif de la mission
     */
	std::string descriptifMission;
    /**
     * Membre prive nbHeure : contient le nombre d'heures de la mission
	 */
	std::string nbHeure;



protected:



public:
    /*Classe sous forme canonique*/
	mission();
	~mission(); 
	mission(const mission& miss);
	mission& operator = (const mission& miss);
	mission(std::string personne, std::string mission, std::string heure);
	std::string getNbPersonne();
	void setNbPersonne(std::string nouveauNbPersonne);
	std::string getDescriptifMission();
	void setDescriptifMission(std::string nouveauDescriptifMission);
	std::string getNbHeure();
	void setNbHeure(std::string nouveauNbHeure);
	};
};

#endif