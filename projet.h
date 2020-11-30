#ifndef GTKMM_EXAMPLEWINDOW_H
#define GTKMM_EXAMPLEWINDOW_H

#include <iostream>
#include <string>
#include <vector>
#include <gtkmm-3.0/gtkmm.h>
#include <gtkmm/application.h>
using namespace std;






/********************************************************************************************************/
class DistributionPoints
{
	protected:
		int nbPointsFree;
		int nbPointsExperience;
		
	public:
		void InitAdvantages();
		int GetExperience(int);
		void setExperience(int);
		void changeFreePoints(string);
		void changeExperrience();
};


/********************************************************************************************************/
class OtherTraits
{
	protected:
		
		int nbPointsBackground;
		vector <string> backgroundName;
		vector <int> backgroundPoints;
		
		int nbPointsVirtues;
		int conscience;
		int selfControl;
		int courage;
		
		int humanity; 	// (equal to Conscience + Self-Control), 
		int willpower; 	//(equal to Courage)
		int bloodPool;
		
		int nbPointsMeritsAndFlawsMAX;
		int nbPointsMeritsAndFlaws;
		vector <string> meritsAndFlaws;
		vector <int> valueMeritsAndFlaws;

	public:
		void InitTraits();
		void SetBackground(string, int);
		void setVirtuesPoints(string, int);
		int getVirtuesPoints();
		int getConsience();
		int getSelfControl();
		int getCourage();
		void setHumanity();
		void setWillPower();
};





/********************************************************************************************************/
class Abilities
{
	protected:
		int talents;
		int skills;
		int knowledges;
		int maxInitAbilities;
		
		int tabTalent[11];			/// remplace la liste des 11 talents
		int tabSkills[11];
		int tabKnowledges[11];
		
	public:
		void InitialiseAbilities();
		void getTalentPoints(int);
		void getSkillsPoints(int);
		void getKnowledgesPoints(int);
		void setTalent(int, int);
		int getValueTalent(int);
		void setSkills(int, int);
		int getValueSkills(int);
		void setKnowledges(int, int);
		int getValueKnowledges(int);
};



/********************************************************************************************************/
class Attributes
{
	protected:
		int physical, social, mental;
		
		int strength, dexterity, stamina;
		int charisma, manipulation, appearance;
		int perception, intelligence, wits;
		
	public:
		void InitialiseAttribute(string);
		void getPhysicalPoints(int);
		void getSocialPoints(int);
		void getMentalPoints(int);
		
		void distribPhysical();
		void distribSocial(string);	// attention a l'apparence
		void distribMental();
};




/********************************************************************************************************/
/* Cette classe memorise et manipule les donnees sur les clans de vampire */
class Clan
{
	protected:
		string clanName;						/// Nom du clan de votre vampire
		
		string nickname;						/// Surnom du clan
		string background;						/// Passe commun des membres de votre clan
		string sect;							/// Secte a laquelle les vampires de votre clan appartient habituellement	
		string haven;							///
		string appearance;						///
		string character;
		int nbPointsDisciplines;					/// Nombre de points a distribuer dans les disciples
		vector <string> disciplines;					/// Tableau de nom des disciplines choisies
		vector <int> valueDisciples;					/// Tableau des points investits dans la disciplines choisi
		string weakness; 
		string organization;
		
		string nature_and_demeanor;
		
	public:
		string GetClanName();
		void SetClanName(string);
		string GetNickname();
		void SetNickname(string);
		string GetBackground();
		void SetBackground(string);
		string GetSect();
		void SetSect(string);
		string GetHaven();
		void SetHaven(string);
		string GetAppearance();
		void SetAppearance(string);
		string GetCharacter();
		void SetCharacter(string);
		string GetDisciplinesName(int);
		int GetValueDisciplines(int);
		void SetInitDisciplines(string, string, string);
		void AddValueDisciplines(int, int);
		string GetWeakness();
		void SetWeakness(string);
		string GetOrganization();
		void SetOrganization(string);
		
		string GetNature_and_Demeanor();
		void SetNature_and_Demeanor(string);
		
};


/********************************************************************************************************/
class Personnage : public Clan, Attributes, Abilities, OtherTraits, DistributionPoints
{
	
};


/********************************************************************************************************/
class FirstInterface 
{
	protected:
		//Child widgets:
		Gtk::Grid mainGrid;
		Gtk::Label l_Name, l_Player, l_Chronicle;
		Gtk::Entry e_Name, e_Player, e_Chronicle;
		Gtk::Label l_Nature, l_Concept, l_Demeanor;
		Gtk::Entry e_Concept;
		Gtk::Label l_Clan, l_Generation, l_Sire;
		Gtk::Entry e_Sire;
		Gtk::Label l_Attributes, l_Physical, l_Social, l_Mental;
		Gtk::Label l_Strength, l_Dexterity, l_Stamina;
		Gtk::Label l_Charisma, l_Manipulation, l_Appearance;
		Gtk::Label l_Perception, l_Intelligence, l_Wits;
		Gtk::Label l_Abilities, l_Talents, l_Skills, l_Knowledges;
		Gtk::Label l_Alertness, l_Athletics, l_Awareness, l_Brawl, l_Empathy, l_Expression, l_Intimidation, l_Leadership, l_Streetwise, l_Subterfuge;
		Gtk::Label l_Animal, l_Crafts, l_Drive, l_Etiquette, l_Firearms, l_Larceny, l_Melee, l_Performance, l_Stealth, l_Survival;
		Gtk::Label l_Academics, l_Computer, l_Finance, l_Investigation, l_Law, l_Medicine, l_Occult, l_Politics, l_Science, l_Technology; 
		Gtk::Entry e_Talents, e_Skills, e_Knowledges;
		Gtk::Label l_Advantages, l_Disciplines, l_Backgrounds, l_Virtues;
		Gtk::Image logo;
		Gtk::ComboBoxText c_Nature, c_Demeanor, c_Clan, c_Generation; 
		Gtk::ComboBoxText c_Strength, c_Dexterity, c_Stamina; 
		Gtk::ComboBoxText c_Charisma, c_Manipulation, c_Appearance; 
		Gtk::ComboBoxText c_Perception, c_Intelligence, c_Wits; 
		Gtk::ComboBoxText c_Alertness, c_Athletics, c_Awareness, c_Brawl, c_Empathy, c_Expression, c_Intimidation, c_Leadership, c_Streetwise, c_Subterfuge, c_Talents; 
		Gtk::ComboBoxText c_Animal, c_Crafts, c_Drive, c_Etiquette, c_Firearms, c_Larceny, c_Melee, c_Performance, c_Stealth, c_Survival, c_Skills; 
		Gtk::ComboBoxText c_Academics, c_Computer, c_Finance, c_Investigation, c_Law, c_Medicine, c_Occult, c_Politics, c_Science, c_Technology, c_Knowledges;  
		string nickname, nature, clan, phy, so, men, ta, sk, kn; 
		int physical, social, mental, talents, skills, knowledges; 

	public:
		Gtk::Window fenetre;
		FirstInterface();
		~FirstInterface();
};

#endif //GTKMM_EXAMPLEWINDOW_H

