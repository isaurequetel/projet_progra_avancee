#include "projet.h"







/********************************************************************************************************/
void DistributionPoints::InitAdvantages()
{
	nbPointsFree = 15; 
	nbPointsExperience = 0;
}

int DistributionPoints::GetExperience(int retirePoints)
{
	nbPointsExperience = nbPointsExperience - retirePoints;
	return nbPointsExperience;
}

void DistributionPoints::setExperience(int initExp)
{
	nbPointsExperience = initExp;
}

void DistributionPoints::changeFreePoints(string type)
{
	if(type.compare("Attribute") == 0)
	{
		if(nbPointsFree > 0 && nbPointsFree - 5 >= 0)
			nbPointsFree = nbPointsFree - 5;
	}
	
	//Attribute		5 per dot
	//Ability		2 per dot
	//Discipline		7 per dot
	//Background		1 per dot
	//Virtue		2 per dot
	//Humanity 		2 per dot
	//Willpower		1 per dot
}

void DistributionPoints::changeExperrience()
{
	//New Ability:3
	//New Discipline:10
	//New Path:7
	//Attribute:CRx4
	//Ability:CRx2
	//Clan Discipline:CRx5
	//Other Discipline:CRx7
	//Secondary Path:CRx4
	//Virtue:CRx2
	//Humanity or Path of Enlightenment:CR2
	//Willpower:CR

	//	!!*CR is the current rating of the trait
}






















/********************************************************************************************************/
void OtherTraits::InitTraits()
{
	nbPointsBackground = 5;
	
	nbPointsVirtues = 7;
	conscience = 0;
	selfControl = 0;
	courage = 0;
	
	humanity = 0;
	willpower = 0;
	bloodPool = 10;
	
	nbPointsMeritsAndFlaws = 0;
	nbPointsMeritsAndFlawsMAX = 7;
}

void OtherTraits::SetBackground(string nomBack, int nbPoints)
{
	if(nbPointsBackground > 0 && nbPointsBackground - nbPoints >= 0)
	{
		backgroundName.push_back(nomBack);
		backgroundPoints.push_back(0);
		
		nbPointsBackground = nbPointsBackground - nbPoints;
	}
}

/*************************************************************************************************************************************************/
/** Cette fonction va d'ajouter des points dans les differentes vertues si c'est possible 
 * @param vertue : le nom de la virtue dans laquelle on veux rajouter des points
 * @param ajout : le nombre de points que l'on veut ajouter a la vertue 
 * @return RIEN */
void OtherTraits::setVirtuesPoints(string vertue, int ajout)
{
	if(nbPointsVirtues > 0 && nbPointsVirtues - ajout >= 0)
	{
		if(vertue.compare("conscience") == 0)
			conscience = conscience + ajout;
		if(vertue.compare("selfControl") == 0)
			selfControl = selfControl + ajout;
		if(vertue.compare("courage") == 0)
			courage = courage + ajout;
		
		nbPointsVirtues = nbPointsVirtues - ajout;
	}
}

int OtherTraits::getVirtuesPoints()
{
	return nbPointsVirtues;
}





/********************************************************************************************************/
void Abilities::InitialiseAbilities()
{
	maxInitAbilities = 3;
	talents = 0;
	skills = 0;
	knowledges = 0;

	for(int i=0; i<11; i++)
		tabTalent[i] = 0;			
	for(int i=0; i<11; i++)
		tabSkills[10] = 0;
	for(int i=0; i<11; i++)
		tabKnowledges[10] = 0;
}

void Abilities::getTalentPoints(int nbPoints)
{
	talents = nbPoints;
}

void Abilities::getSkillsPoints(int nbPoints)
{
	skills = nbPoints;
}

void Abilities::getKnowledgesPoints(int nbPoints)
{
	knowledges  = nbPoints;
}

void Abilities::setTalent(int index, int value)
{
	if(talents > 0 && talents - value >= 0)
	{
		tabTalent[index] = tabTalent[index] + value;
		talents = talents - value;
	}
}

int Abilities::getValueTalent(int index)
{
	return tabTalent[index];
}

void Abilities::setSkills(int index, int value)
{
}

int Abilities::getValueSkills(int index)
{
	return tabSkills[index];
}

void Abilities::setKnowledges(int index, int value)
{
}

int Abilities::getValueKnowledges(int index)
{
	return tabKnowledges[index];
}





/********************************************************************************************************/
void Attributes::InitialiseAttribute(string clanName)
{
	strength = 1; 
	dexterity = 1; 
	stamina = 1; 
	charisma = 1;  
	manipulation = 1; 
	if( clanName == "Nosferatu" )
		appearance = 0; 
	else
		appearance = 1; 
	perception = 1;  
	intelligence = 1; 
	wits = 1; 
	
	physical = 0;		// ordre
	social = 0; 
	mental = 0;
}

void Attributes::getPhysicalPoints(int nbPoints)
{
	physical = nbPoints;
}

void Attributes::getSocialPoints(int nbPoints)
{
	social = nbPoints;
}

void Attributes::getMentalPoints(int nbPoints)
{
	mental  = nbPoints;
}

void Attributes::distribPhysical()
{
	while(physical > 0)
	{
		int choix;
		cout << "Choisissez votre attribut : strength (1), dexterity (2), stamina (3) \n";
		cin >> choix;
		switch(choix)
		{
			case 1:
				strength++;
				break;
			case 2:
				dexterity++;
				break;
			default:
				stamina++;
		}
		physical--;
	}
}

void Attributes::distribSocial(string clanName)
{
	// a vous de remplir
}

void Attributes::distribMental()
{
	// a vous de remplir
}





/********************************************************************************************************/
string Clan::GetClanName()
{
	return clanName;
}

void Clan::SetClanName(string nomDuClan)
{
	
}

string Clan::GetNickname()
{
	return nickname;
}

void Clan::SetNickname(string name)
{
	
}

string Clan::GetBackground()
{
	return background;
}

void Clan::SetBackground(string history)
{
	
}

string Clan::GetSect()
{
	return sect;
}

void Clan::SetSect(string secte)
{
	
}

string Clan::GetHaven()
{
	return haven;
}

void Clan::SetHaven(string maison)
{
	
}

string Clan::GetAppearance()
{
	return appearance;
}

void Clan::SetAppearance(string look)
{
	
}

string Clan::GetCharacter()
{
	return character;
}

void Clan::SetCharacter(string style)
{
	
}

string Clan::GetDisciplinesName(int index)
{
	return disciplines[index];
}

int Clan::GetValueDisciplines(int index)
{
	return valueDisciples[index];
}


void Clan::SetInitDisciplines(string pouvoir1, string pouvoir2, string pouvoir3)
{
	nbPointsDisciplines = 3;
	
	disciplines.push_back(pouvoir1);
	disciplines.push_back(pouvoir2);
	disciplines.push_back(pouvoir3);
	
	valueDisciples.push_back(0);
	valueDisciples.push_back(0);
	valueDisciples.push_back(0);
}

void Clan::AddValueDisciplines(int index, int value)
{
	if(nbPointsDisciplines > 0 && nbPointsDisciplines - value >= 0)
	{
		valueDisciples[index] = valueDisciples[index] + value;
		nbPointsDisciplines = nbPointsDisciplines - value;
	}
}

string Clan::GetWeakness()
{
	return weakness;
}

void Clan::SetWeakness(string faiblesse)
{
	
}

string Clan::GetOrganization()
{
	return organization;
}

void Clan::SetOrganization(string organisation)
{
	
}

string Clan::GetNature_and_Demeanor()
{
	return nature_and_demeanor;
}

void Clan::SetNature_and_Demeanor(string nature)
{
	nature_and_demeanor = nature;
}





/********************************************************************************************************/
FirstInterface::FirstInterface()
{
	fenetre.set_title("Vampire Interface");
	fenetre.set_border_width(5);
	fenetre.set_position(Gtk::WIN_POS_CENTER);
	fenetre.resize(800, 600); 

	l_Name.set_text("Name : \n");
	l_Name.set_alignment(Gtk::ALIGN_START);
	mainGrid.attach(l_Name, 0, 1, 1, 1);

	e_Name.set_max_length(50);
	mainGrid.attach(e_Name, 1, 1, 1, 1);

	Clan c;
	nickname = e_Name.get_text();
	c.SetNickname(nickname);

	l_Player.set_text("Player : \n");
	l_Player.set_alignment(Gtk::ALIGN_START);
	mainGrid.attach(l_Player, 0, 2, 1, 1);

	e_Player.set_max_length(50);
	mainGrid.attach(e_Player, 1, 2, 1, 1);

	l_Chronicle.set_text("Chronicle : \n");
	l_Chronicle.set_alignment(Gtk::ALIGN_START);
	mainGrid.attach(l_Chronicle, 0, 3, 1, 1);

	e_Chronicle.set_max_length(50);
	mainGrid.attach(e_Chronicle, 1, 3, 1, 1);

	l_Nature.set_text("Nature : \n");
	l_Nature.set_alignment(Gtk::ALIGN_START);
	mainGrid.attach(l_Nature, 2, 1, 1, 1);

	c_Nature.append("Architect");
	c_Nature.append("Autocrat");
	c_Nature.append("Bon Vivant");
	c_Nature.append("Bravo");
	c_Nature.append("Capitalist");
	c_Nature.append("Caregiver");
	c_Nature.append("Celebrant");
	c_Nature.append("Chameleon");
	c_Nature.append("Child");
	c_Nature.append("Competitor");
	c_Nature.append("Conformist");
	c_Nature.append("Conniver");
	c_Nature.append("Creep Show");
	c_Nature.append("Curmudgeon");
	c_Nature.append("Dabbler");
	c_Nature.append("Deviant");
	c_Nature.append("Director");
	c_Nature.append("Enigma");
	c_Nature.append("Eye Of The Storm");
	c_Nature.append("Fanatic");
	c_Nature.append("Gallant");
	c_Nature.append("Guru");
	c_Nature.append("Idealist");
	c_Nature.append("Judge");
	c_Nature.append("Loner");
	c_Nature.append("Martyr");
	c_Nature.append("Masochist");
	c_Nature.append("Monster");
	c_Nature.append("Pedagogue");
	c_Nature.append("Penitent");
	c_Nature.append("Perfectionist");
	c_Nature.append("Rebel");
	c_Nature.append("Rogue");
	c_Nature.append("Sadist");
	c_Nature.append("Scientist");
	c_Nature.append("Sociopath");
	c_Nature.append("Soldier");
	c_Nature.append("Survivor");
	c_Nature.append("Thrill-Seeker");
	c_Nature.append("Traditionalist");
	c_Nature.append("Trickster");
	c_Nature.append("Visionary");
	mainGrid.attach(c_Nature, 3, 1, 1, 1);

	nature = c_Nature.get_active_text();
	c.SetNature_and_Demeanor(nature);

	l_Demeanor.set_text("Demeanor : \n");
	l_Demeanor.set_alignment(Gtk::ALIGN_START);
	mainGrid.attach(l_Demeanor, 2, 2, 1, 1);

	c_Demeanor.append("Architect");
	c_Demeanor.append("Autocrat");
	c_Demeanor.append("Bon Vivant");
	c_Demeanor.append("Bravo");
	c_Demeanor.append("Capitalist");
	c_Demeanor.append("Caregiver");
	c_Demeanor.append("Celebrant");
	c_Demeanor.append("Chameleon");
	c_Demeanor.append("Child");
	c_Demeanor.append("Competitor");
	c_Demeanor.append("Conformist");
	c_Demeanor.append("Conniver");
	c_Demeanor.append("Creep Show");
	c_Demeanor.append("Curmudgeon");
	c_Demeanor.append("Dabbler");
	c_Demeanor.append("Deviant");
	c_Demeanor.append("Director");
	c_Demeanor.append("Enigma");
	c_Demeanor.append("Eye Of The Storm");
	c_Demeanor.append("Fanatic");
	c_Demeanor.append("Gallant");
	c_Demeanor.append("Guru");
	c_Demeanor.append("Idealist");
	c_Demeanor.append("Judge");
	c_Demeanor.append("Loner");
	c_Demeanor.append("Martyr");
	c_Demeanor.append("Masochist");
	c_Demeanor.append("Monster");
	c_Demeanor.append("Pedagogue");
	c_Demeanor.append("Penitent");
	c_Demeanor.append("Perfectionist");
	c_Demeanor.append("Rebel");
	c_Demeanor.append("Rogue");
	c_Demeanor.append("Sadist");
	c_Demeanor.append("Scientist");
	c_Demeanor.append("Sociopath");
	c_Demeanor.append("Soldier");
	c_Demeanor.append("Survivor");
	c_Demeanor.append("Thrill-Seeker");
	c_Demeanor.append("Traditionalist");
	c_Demeanor.append("Trickster");
	c_Demeanor.append("Visionary");
	mainGrid.attach(c_Demeanor, 3, 2, 1, 1);

	l_Concept.set_text("Concept : \n");
	l_Concept.set_alignment(Gtk::ALIGN_START);
	mainGrid.attach(l_Concept, 2, 3, 1, 1);

	e_Concept.set_max_length(50);
	mainGrid.attach(e_Concept, 3, 3, 1, 1);

	l_Clan.set_text("Clan : \n");
	l_Clan.set_alignment(Gtk::ALIGN_START);
	mainGrid.attach(l_Clan, 4, 1, 1, 1);

	c_Clan.append("Ahrimanes");
	c_Clan.append("Anda");
	c_Clan.append("Angellis Ater");
	c_Clan.append("Assamite");
	c_Clan.append("Assamite Sorcerer");
	c_Clan.append("Assamite Viziez");
	c_Clan.append("Assamite Warrior");
	c_Clan.append("Bali");
	c_Clan.append("Blood Brothers");
	c_Clan.append("Brahman");
	c_Clan.append("Brujah");
	c_Clan.append("Brujah Antitribu");
	c_Clan.append("Caitiff");
	c_Clan.append("Cappadocian");
	c_Clan.append("Children Of Osiris");
	c_Clan.append("City Gangrel");
	c_Clan.append("Daitya");
	c_Clan.append("Daughters Of Cacophony");
	c_Clan.append("Followers Of Set");
	c_Clan.append("Gangrel");
	c_Clan.append("Gargoyles");
	c_Clan.append("Giovannni");
	c_Clan.append("Harbinger Of Skulls");
	c_Clan.append("Kyasid");
	c_Clan.append("Koldun");
	c_Clan.append("Lamia");
	c_Clan.append("Lasombra");
	c_Clan.append("Lasombra Antitribu");
	c_Clan.append("Lhiannan");
	c_Clan.append("Malkavian");
	c_Clan.append("Malkavian Antitribu");
	c_Clan.append("Mariner Gangrer");
	c_Clan.append("Nagarajah");
	c_Clan.append("Noiad");
	c_Clan.append("Nosferatu");
	c_Clan.append("Nosferatu Antitribu");
	c_Clan.append("Old Clan Tzimisce");
	c_Clan.append("Panders");
	c_Clan.append("Ravnos");
	c_Clan.append("Ravnos Antitribu");
	c_Clan.append("Salubri");
	c_Clan.append("Salubri Antitribu");
	c_Clan.append("Samedi");
	c_Clan.append("Serpents Of The Light");
	c_Clan.append("Telyavelic Tremere");
	c_Clan.append("Tlacique");
	c_Clan.append("Toreador");
	c_Clan.append("Toreador Antitribu");
	c_Clan.append("Tremere");
	c_Clan.append("True Brujah");
	c_Clan.append("Tzimisce");
	c_Clan.append("Ventrue");
	c_Clan.append("Ventrue Antitribu");
	c_Clan.append("Warrior Setite");
	c_Clan.append("Wu Zao");
	mainGrid.attach(c_Clan, 5, 1, 1, 1);

	clan = c_Clan.get_active_text();
	c.SetClanName(clan);

	l_Generation.set_text("Generation : \n");
	l_Generation.set_alignment(Gtk::ALIGN_START);
	mainGrid.attach(l_Generation, 4, 2, 1, 1);

	c_Generation.append("4th");
	c_Generation.append("5th");
	c_Generation.append("6th");
	c_Generation.append("7th");
	c_Generation.append("8th");
	c_Generation.append("9th");
	c_Generation.append("10th");
	c_Generation.append("11th");
	c_Generation.append("12th");
	c_Generation.append("13th");
	c_Generation.append("14th");
	c_Generation.append("15th");
	mainGrid.attach(c_Generation, 5, 2, 1, 1);

	l_Sire.set_text("Sire : \n");
	l_Sire.set_alignment(Gtk::ALIGN_START);
	mainGrid.attach(l_Sire, 4, 3, 1, 1);

	e_Sire.set_max_length(50);
	mainGrid.attach(e_Sire, 5, 3, 1, 1);

	l_Attributes.set_text("Attributes");
	mainGrid.attach(l_Attributes, 2, 4, 2, 1);

	l_Physical.set_text("Physical");
	mainGrid.attach(l_Physical, 0, 5, 2, 1);

	l_Social.set_text("Social");
	mainGrid.attach(l_Social, 2, 5, 2, 1);

	l_Mental.set_text("Mental");
	mainGrid.attach(l_Mental, 4, 5, 2, 1);

	l_Strength.set_text("Strength");
	l_Strength.set_alignment(Gtk::ALIGN_START);
	mainGrid.attach(l_Strength, 0, 6, 1, 1);

	c_Strength.append("0");
	c_Strength.append("1");
	c_Strength.append("2");
	c_Strength.append("3");
	c_Strength.append("4");
	c_Strength.append("5");
	c_Strength.append("6");
	c_Strength.append("7");
	c_Strength.append("8");
	c_Strength.append("9");
	mainGrid.attach(c_Strength, 1, 6, 1, 1);

	l_Dexterity.set_text("Dexterity");
	l_Dexterity.set_alignment(Gtk::ALIGN_START);
	mainGrid.attach(l_Dexterity, 0, 7, 1, 1);

	c_Dexterity.append("0");
	c_Dexterity.append("1");
	c_Dexterity.append("2");
	c_Dexterity.append("3");
	c_Dexterity.append("4");
	c_Dexterity.append("5");
	c_Dexterity.append("6");
	c_Dexterity.append("7");
	c_Dexterity.append("8");
	c_Dexterity.append("9");
	mainGrid.attach(c_Dexterity, 1, 7, 1, 1);

	l_Stamina.set_text("Stamina");
	l_Stamina.set_alignment(Gtk::ALIGN_START);
	mainGrid.attach(l_Stamina, 0, 8, 1, 1);

	c_Stamina.append("0");
	c_Stamina.append("1");
	c_Stamina.append("2");
	c_Stamina.append("3");
	c_Stamina.append("4");
	c_Stamina.append("5");
	c_Stamina.append("6");
	c_Stamina.append("7");
	c_Stamina.append("8");
	c_Stamina.append("9");
	mainGrid.attach(c_Stamina, 1, 8, 1, 1);

	Attributes a; 
	phy = c_Stamina.get_active_text(); 
	physical = atoi(phy.c_str());
	a.getPhysicalPoints(physical);

	l_Charisma.set_text("Charisma");
	l_Charisma.set_alignment(Gtk::ALIGN_START);
	mainGrid.attach(l_Charisma, 2, 6, 1, 1);

	c_Charisma.append("0");
	c_Charisma.append("1");
	c_Charisma.append("2");
	c_Charisma.append("3");
	c_Charisma.append("4");
	c_Charisma.append("5");
	c_Charisma.append("6");
	c_Charisma.append("7");
	c_Charisma.append("8");
	c_Charisma.append("9");
	mainGrid.attach(c_Charisma, 3, 6, 1, 1);

	l_Manipulation.set_text("Manipulation");
	l_Manipulation.set_alignment(Gtk::ALIGN_START);
	mainGrid.attach(l_Manipulation, 2, 7, 1, 1);

	c_Manipulation.append("0");
	c_Manipulation.append("1");
	c_Manipulation.append("2");
	c_Manipulation.append("3");
	c_Manipulation.append("4");
	c_Manipulation.append("5");
	c_Manipulation.append("6");
	c_Manipulation.append("7");
	c_Manipulation.append("8");
	c_Manipulation.append("9");
	mainGrid.attach(c_Manipulation, 3, 7, 1, 1);

	l_Appearance.set_text("Appearance");
	l_Appearance.set_alignment(Gtk::ALIGN_START);
	mainGrid.attach(l_Appearance, 2, 8, 1, 1);

	c_Appearance.append("0");
	c_Appearance.append("1");
	c_Appearance.append("2");
	c_Appearance.append("3");
	c_Appearance.append("4");
	c_Appearance.append("5");
	c_Appearance.append("6");
	c_Appearance.append("7");
	c_Appearance.append("8");
	c_Appearance.append("9");
	mainGrid.attach(c_Appearance, 3, 8, 1, 1);

	so = c_Appearance.get_active_text();
	social = atoi(so.c_str());
	a.getSocialPoints(social);

	l_Perception.set_text("Perception");
	l_Perception.set_alignment(Gtk::ALIGN_START);
	mainGrid.attach(l_Perception, 4, 6, 1, 1);

	c_Perception.append("0");
	c_Perception.append("1");
	c_Perception.append("2");
	c_Perception.append("3");
	c_Perception.append("4");
	c_Perception.append("5");
	c_Perception.append("6");
	c_Perception.append("7");
	c_Perception.append("8");
	c_Perception.append("9");
	mainGrid.attach(c_Perception, 5, 6, 1, 1);

	l_Intelligence.set_text("Intelligence");
	l_Intelligence.set_alignment(Gtk::ALIGN_START);
	mainGrid.attach(l_Intelligence, 4, 7, 1, 1);

	c_Intelligence.append("0");
	c_Intelligence.append("1");
	c_Intelligence.append("2");
	c_Intelligence.append("3");
	c_Intelligence.append("4");
	c_Intelligence.append("5");
	c_Intelligence.append("6");
	c_Intelligence.append("7");
	c_Intelligence.append("8");
	c_Intelligence.append("9");
	mainGrid.attach(c_Intelligence, 5, 7, 1, 1);

	l_Wits.set_text("Wits");
	l_Wits.set_alignment(Gtk::ALIGN_START);
	mainGrid.attach(l_Wits, 4, 8, 1, 1);

	c_Wits.append("0");
	c_Wits.append("1");
	c_Wits.append("2");
	c_Wits.append("3");
	c_Wits.append("4");
	c_Wits.append("5");
	c_Wits.append("6");
	c_Wits.append("7");
	c_Wits.append("8");
	c_Wits.append("9");
	mainGrid.attach(c_Wits, 5, 8, 1, 1);

	men = c_Appearance.get_active_text();
	mental = atoi(men.c_str());
	a.getMentalPoints(mental);

	l_Abilities.set_text("Abilities");
	mainGrid.attach(l_Abilities, 2, 9, 2, 1);

	l_Talents.set_text("Talents");
	mainGrid.attach(l_Talents, 0, 10, 2, 1);

	l_Skills.set_text("Skills");
	mainGrid.attach(l_Skills, 2, 10, 2, 1);

	l_Knowledges.set_text("Knowledges");
	mainGrid.attach(l_Knowledges, 4, 10, 2, 1);

	l_Alertness.set_text("Alertness");
	l_Alertness.set_alignment(Gtk::ALIGN_START);
	mainGrid.attach(l_Alertness, 0, 11, 1, 1);

	c_Alertness.append("0");
	c_Alertness.append("1");
	c_Alertness.append("2");
	c_Alertness.append("3");
	c_Alertness.append("4");
	c_Alertness.append("5");
	c_Alertness.append("6");
	c_Alertness.append("7");
	c_Alertness.append("8");
	c_Alertness.append("9");
	mainGrid.attach(c_Alertness, 1, 11, 1, 1);

	l_Athletics.set_text("Athletics");
	l_Athletics.set_alignment(Gtk::ALIGN_START);
	mainGrid.attach(l_Athletics, 0, 12, 1, 1);

	c_Athletics.append("0");
	c_Athletics.append("1");
	c_Athletics.append("2");
	c_Athletics.append("3");
	c_Athletics.append("4");
	c_Athletics.append("5");
	c_Athletics.append("6");
	c_Athletics.append("7");
	c_Athletics.append("8");
	c_Athletics.append("9");
	mainGrid.attach(c_Athletics, 1, 12, 1, 1);

	l_Awareness.set_text("Awareness");
	l_Awareness.set_alignment(Gtk::ALIGN_START);
	mainGrid.attach(l_Awareness, 0, 13, 1, 1);

	c_Awareness.append("0");
	c_Awareness.append("1");
	c_Awareness.append("2");
	c_Awareness.append("3");
	c_Awareness.append("4");
	c_Awareness.append("5");
	c_Awareness.append("6");
	c_Awareness.append("7");
	c_Awareness.append("8");
	c_Awareness.append("9");
	mainGrid.attach(c_Awareness, 1, 13, 1, 1);

	l_Brawl.set_text("Brawl");
	l_Brawl.set_alignment(Gtk::ALIGN_START);
	mainGrid.attach(l_Brawl, 0, 14, 1, 1);

	c_Brawl.append("0");
	c_Brawl.append("1");
	c_Brawl.append("2");
	c_Brawl.append("3");
	c_Brawl.append("4");
	c_Brawl.append("5");
	c_Brawl.append("6");
	c_Brawl.append("7");
	c_Brawl.append("8");
	c_Brawl.append("9");
	mainGrid.attach(c_Brawl, 1, 14, 1, 1);

	l_Empathy.set_text("Empathy");
	l_Empathy.set_alignment(Gtk::ALIGN_START);
	mainGrid.attach(l_Empathy, 0, 15, 1, 1);

	c_Empathy.append("0");
	c_Empathy.append("1");
	c_Empathy.append("2");
	c_Empathy.append("3");
	c_Empathy.append("4");
	c_Empathy.append("5");
	c_Empathy.append("6");
	c_Empathy.append("7");
	c_Empathy.append("8");
	c_Empathy.append("9");
	mainGrid.attach(c_Empathy, 1, 15, 1, 1);

	l_Expression.set_text("Expression");
	l_Expression.set_alignment(Gtk::ALIGN_START);
	mainGrid.attach(l_Expression, 0, 16, 1, 1);

	c_Expression.append("0");
	c_Expression.append("1");
	c_Expression.append("2");
	c_Expression.append("3");
	c_Expression.append("4");
	c_Expression.append("5");
	c_Expression.append("6");
	c_Expression.append("7");
	c_Expression.append("8");
	c_Expression.append("9");
	mainGrid.attach(c_Expression, 1, 16, 1, 1);

	l_Intimidation.set_text("Intimidation");
	l_Intimidation.set_alignment(Gtk::ALIGN_START);
	mainGrid.attach(l_Intimidation, 0, 17, 1, 1);

	c_Intimidation.append("0");
	c_Intimidation.append("1");
	c_Intimidation.append("2");
	c_Intimidation.append("3");
	c_Intimidation.append("4");
	c_Intimidation.append("5");
	c_Intimidation.append("6");
	c_Intimidation.append("7");
	c_Intimidation.append("8");
	c_Intimidation.append("9");
	mainGrid.attach(c_Intimidation, 1, 17, 1, 1);

	l_Leadership.set_text("Leadership");
	l_Leadership.set_alignment(Gtk::ALIGN_START);
	mainGrid.attach(l_Leadership, 0, 18, 1, 1);

	c_Leadership.append("0");
	c_Leadership.append("1");
	c_Leadership.append("2");
	c_Leadership.append("3");
	c_Leadership.append("4");
	c_Leadership.append("5");
	c_Leadership.append("6");
	c_Leadership.append("7");
	c_Leadership.append("8");
	c_Leadership.append("9");
	mainGrid.attach(c_Leadership, 1, 18, 1, 1);

	l_Streetwise.set_text("Streetwise");
	l_Streetwise.set_alignment(Gtk::ALIGN_START);
	mainGrid.attach(l_Streetwise, 0, 19, 1, 1);

	c_Streetwise.append("0");
	c_Streetwise.append("1");
	c_Streetwise.append("2");
	c_Streetwise.append("3");
	c_Streetwise.append("4");
	c_Streetwise.append("5");
	c_Streetwise.append("6");
	c_Streetwise.append("7");
	c_Streetwise.append("8");
	c_Streetwise.append("9");
	mainGrid.attach(c_Streetwise, 1, 19, 1, 1);

	l_Subterfuge.set_text("Subterfuge");
	l_Subterfuge.set_alignment(Gtk::ALIGN_START);
	mainGrid.attach(l_Subterfuge, 0, 20, 1, 1);

	c_Subterfuge.append("0");
	c_Subterfuge.append("1");
	c_Subterfuge.append("2");
	c_Subterfuge.append("3");
	c_Subterfuge.append("4");
	c_Subterfuge.append("5");
	c_Subterfuge.append("6");
	c_Subterfuge.append("7");
	c_Subterfuge.append("8");
	c_Subterfuge.append("9");
	mainGrid.attach(c_Subterfuge, 1, 20, 1, 1);

	e_Talents.set_max_length(50);
	mainGrid.attach(e_Talents, 0, 21, 1, 1);

	c_Talents.append("0");
	c_Talents.append("1");
	c_Talents.append("2");
	c_Talents.append("3");
	c_Talents.append("4");
	c_Talents.append("5");
	c_Talents.append("6");
	c_Talents.append("7");
	c_Talents.append("8");
	c_Talents.append("9");
	mainGrid.attach(c_Talents, 1, 21, 1, 1);

	Abilities ab; 
	ta = c_Talents.get_active_text(); 
	talents = atoi(ta.c_str());
	ab.getTalentPoints(talents);

	l_Animal.set_text("Animal");
	l_Animal.set_alignment(Gtk::ALIGN_START);
	mainGrid.attach(l_Animal, 2, 11, 1, 1);

	c_Animal.append("0");
	c_Animal.append("1");
	c_Animal.append("2");
	c_Animal.append("3");
	c_Animal.append("4");
	c_Animal.append("5");
	c_Animal.append("6");
	c_Animal.append("7");
	c_Animal.append("8");
	c_Animal.append("9");
	mainGrid.attach(c_Animal, 3, 11, 1, 1);

	l_Crafts.set_text("Crafts");
	l_Crafts.set_alignment(Gtk::ALIGN_START);
	mainGrid.attach(l_Crafts, 2, 12, 1, 1);

	c_Crafts.append("0");
	c_Crafts.append("1");
	c_Crafts.append("2");
	c_Crafts.append("3");
	c_Crafts.append("4");
	c_Crafts.append("5");
	c_Crafts.append("6");
	c_Crafts.append("7");
	c_Crafts.append("8");
	c_Crafts.append("9");
	mainGrid.attach(c_Crafts, 3, 12, 1, 1);

	l_Drive.set_text("Drive");
	l_Drive.set_alignment(Gtk::ALIGN_START);
	mainGrid.attach(l_Drive, 2, 13, 1, 1);

	c_Drive.append("0");
	c_Drive.append("1");
	c_Drive.append("2");
	c_Drive.append("3");
	c_Drive.append("4");
	c_Drive.append("5");
	c_Drive.append("6");
	c_Drive.append("7");
	c_Drive.append("8");
	c_Drive.append("9");
	mainGrid.attach(c_Drive, 3, 13, 1, 1);

	l_Etiquette.set_text("Etiquette");
	l_Etiquette.set_alignment(Gtk::ALIGN_START);
	mainGrid.attach(l_Etiquette, 2, 14, 1, 1);

	c_Etiquette.append("0");
	c_Etiquette.append("1");
	c_Etiquette.append("2");
	c_Etiquette.append("3");
	c_Etiquette.append("4");
	c_Etiquette.append("5");
	c_Etiquette.append("6");
	c_Etiquette.append("7");
	c_Etiquette.append("8");
	c_Etiquette.append("9");
	mainGrid.attach(c_Etiquette, 3, 14, 1, 1);

	l_Firearms.set_text("Firearms");
	l_Firearms.set_alignment(Gtk::ALIGN_START);
	mainGrid.attach(l_Firearms, 2, 15, 1, 1);

	c_Firearms.append("0");
	c_Firearms.append("1");
	c_Firearms.append("2");
	c_Firearms.append("3");
	c_Firearms.append("4");
	c_Firearms.append("5");
	c_Firearms.append("6");
	c_Firearms.append("7");
	c_Firearms.append("8");
	c_Firearms.append("9");
	mainGrid.attach(c_Firearms, 3, 15, 1, 1);

	l_Larceny.set_text("Larceny");
	l_Larceny.set_alignment(Gtk::ALIGN_START);
	mainGrid.attach(l_Larceny, 2, 16, 1, 1);

	c_Larceny.append("0");
	c_Larceny.append("1");
	c_Larceny.append("2");
	c_Larceny.append("3");
	c_Larceny.append("4");
	c_Larceny.append("5");
	c_Larceny.append("6");
	c_Larceny.append("7");
	c_Larceny.append("8");
	c_Larceny.append("9");
	mainGrid.attach(c_Larceny, 3, 16, 1, 1);

	l_Melee.set_text("Melee");
	l_Melee.set_alignment(Gtk::ALIGN_START);
	mainGrid.attach(l_Melee, 2, 17, 1, 1);

	c_Melee.append("0");
	c_Melee.append("1");
	c_Melee.append("2");
	c_Melee.append("3");
	c_Melee.append("4");
	c_Melee.append("5");
	c_Melee.append("6");
	c_Melee.append("7");
	c_Melee.append("8");
	c_Melee.append("9");
	mainGrid.attach(c_Melee, 3, 17, 1, 1);

	l_Performance.set_text("Performance");
	l_Performance.set_alignment(Gtk::ALIGN_START);
	mainGrid.attach(l_Performance, 2, 18, 1, 1);

	c_Performance.append("0");
	c_Performance.append("1");
	c_Performance.append("2");
	c_Performance.append("3");
	c_Performance.append("4");
	c_Performance.append("5");
	c_Performance.append("6");
	c_Performance.append("7");
	c_Performance.append("8");
	c_Performance.append("9");
	mainGrid.attach(c_Performance, 3, 18, 1, 1);

	l_Stealth.set_text("Stealth");
	l_Stealth.set_alignment(Gtk::ALIGN_START);
	mainGrid.attach(l_Stealth, 2, 19, 1, 1);

	c_Stealth.append("0");
	c_Stealth.append("1");
	c_Stealth.append("2");
	c_Stealth.append("3");
	c_Stealth.append("4");
	c_Stealth.append("5");
	c_Stealth.append("6");
	c_Stealth.append("7");
	c_Stealth.append("8");
	c_Stealth.append("9");
	mainGrid.attach(c_Stealth, 3, 19, 1, 1);

	l_Survival.set_text("Survival");
	l_Survival.set_alignment(Gtk::ALIGN_START);
	mainGrid.attach(l_Survival, 2, 20, 1, 1);

	c_Survival.append("0");
	c_Survival.append("1");
	c_Survival.append("2");
	c_Survival.append("3");
	c_Survival.append("4");
	c_Survival.append("5");
	c_Survival.append("6");
	c_Survival.append("7");
	c_Survival.append("8");
	c_Survival.append("9");
	mainGrid.attach(c_Survival, 3, 20, 1, 1);

	e_Skills.set_max_length(50);
	mainGrid.attach(e_Skills, 2, 21, 1, 1);

	c_Skills.append("0");
	c_Skills.append("1");
	c_Skills.append("2");
	c_Skills.append("3");
	c_Skills.append("4");
	c_Skills.append("5");
	c_Skills.append("6");
	c_Skills.append("7");
	c_Skills.append("8");
	c_Skills.append("9");
	mainGrid.attach(c_Skills, 3, 21, 1, 1);

	sk = c_Skills.get_active_text(); 
	skills = atoi(sk.c_str());
	ab.getSkillsPoints(skills);

	l_Academics.set_text("Academics");
	l_Academics.set_alignment(Gtk::ALIGN_START);
	mainGrid.attach(l_Academics, 4, 11, 1, 1);

	c_Academics.append("0");
	c_Academics.append("1");
	c_Academics.append("2");
	c_Academics.append("3");
	c_Academics.append("4");
	c_Academics.append("5");
	c_Academics.append("6");
	c_Academics.append("7");
	c_Academics.append("8");
	c_Academics.append("9");
	mainGrid.attach(c_Academics, 5, 11, 1, 1);

	l_Computer.set_text("Computer");
	l_Computer.set_alignment(Gtk::ALIGN_START);
	mainGrid.attach(l_Computer, 4, 12, 1, 1);

	c_Computer.append("0");
	c_Computer.append("1");
	c_Computer.append("2");
	c_Computer.append("3");
	c_Computer.append("4");
	c_Computer.append("5");
	c_Computer.append("6");
	c_Computer.append("7");
	c_Computer.append("8");
	c_Computer.append("9");
	mainGrid.attach(c_Computer, 5, 12, 1, 1);

	l_Finance.set_text("Finance");
	l_Finance.set_alignment(Gtk::ALIGN_START);
	mainGrid.attach(l_Finance, 4, 13, 1, 1);

	c_Finance.append("0");
	c_Finance.append("1");
	c_Finance.append("2");
	c_Finance.append("3");
	c_Finance.append("4");
	c_Finance.append("5");
	c_Finance.append("6");
	c_Finance.append("7");
	c_Finance.append("8");
	c_Finance.append("9");
	mainGrid.attach(c_Finance, 5, 13, 1, 1);

	l_Investigation.set_text("Investigation");
	l_Investigation.set_alignment(Gtk::ALIGN_START);
	mainGrid.attach(l_Investigation, 4, 14, 1, 1);

	c_Investigation.append("0");
	c_Investigation.append("1");
	c_Investigation.append("2");
	c_Investigation.append("3");
	c_Investigation.append("4");
	c_Investigation.append("5");
	c_Investigation.append("6");
	c_Investigation.append("7");
	c_Investigation.append("8");
	c_Investigation.append("9");
	mainGrid.attach(c_Investigation, 5, 14, 1, 1);

	l_Law.set_text("Law");
	l_Law.set_alignment(Gtk::ALIGN_START);
	mainGrid.attach(l_Law, 4, 15, 1, 1);

	c_Law.append("0");
	c_Law.append("1");
	c_Law.append("2");
	c_Law.append("3");
	c_Law.append("4");
	c_Law.append("5");
	c_Law.append("6");
	c_Law.append("7");
	c_Law.append("8");
	c_Law.append("9");
	mainGrid.attach(c_Law, 5, 15, 1, 1);

	l_Medicine.set_text("Medicine");
	l_Medicine.set_alignment(Gtk::ALIGN_START);
	mainGrid.attach(l_Medicine, 4, 16, 1, 1);

	c_Medicine.append("0");
	c_Medicine.append("1");
	c_Medicine.append("2");
	c_Medicine.append("3");
	c_Medicine.append("4");
	c_Medicine.append("5");
	c_Medicine.append("6");
	c_Medicine.append("7");
	c_Medicine.append("8");
	c_Medicine.append("9");
	mainGrid.attach(c_Medicine, 5, 16, 1, 1);

	l_Occult.set_text("Occult");
	l_Occult.set_alignment(Gtk::ALIGN_START);
	mainGrid.attach(l_Occult, 4, 17, 1, 1);

	c_Occult.append("0");
	c_Occult.append("1");
	c_Occult.append("2");
	c_Occult.append("3");
	c_Occult.append("4");
	c_Occult.append("5");
	c_Occult.append("6");
	c_Occult.append("7");
	c_Occult.append("8");
	c_Occult.append("9");
	mainGrid.attach(c_Occult, 5, 17, 1, 1);

	l_Politics.set_text("Politics");
	l_Politics.set_alignment(Gtk::ALIGN_START);
	mainGrid.attach(l_Politics, 4, 18, 1, 1);

	c_Politics.append("0");
	c_Politics.append("1");
	c_Politics.append("2");
	c_Politics.append("3");
	c_Politics.append("4");
	c_Politics.append("5");
	c_Politics.append("6");
	c_Politics.append("7");
	c_Politics.append("8");
	c_Politics.append("9");
	mainGrid.attach(c_Politics, 5, 18, 1, 1);

	l_Science.set_text("Science");
	l_Science.set_alignment(Gtk::ALIGN_START);
	mainGrid.attach(l_Science, 4, 19, 1, 1);

	c_Science.append("0");
	c_Science.append("1");
	c_Science.append("2");
	c_Science.append("3");
	c_Science.append("4");
	c_Science.append("5");
	c_Science.append("6");
	c_Science.append("7");
	c_Science.append("8");
	c_Science.append("9");
	mainGrid.attach(c_Science, 5, 19, 1, 1);

	l_Technology.set_text("Technology");
	l_Technology.set_alignment(Gtk::ALIGN_START);
	mainGrid.attach(l_Technology, 4, 20, 1, 1);

	c_Technology.append("0");
	c_Technology.append("1");
	c_Technology.append("2");
	c_Technology.append("3");
	c_Technology.append("4");
	c_Technology.append("5");
	c_Technology.append("6");
	c_Technology.append("7");
	c_Technology.append("8");
	c_Technology.append("9");
	mainGrid.attach(c_Technology, 5, 20, 1, 1);

	e_Knowledges.set_max_length(50);
	mainGrid.attach(e_Knowledges, 4, 21, 1, 1);

	c_Knowledges.append("0");
	c_Knowledges.append("1");
	c_Knowledges.append("2");
	c_Knowledges.append("3");
	c_Knowledges.append("4");
	c_Knowledges.append("5");
	c_Knowledges.append("6");
	c_Knowledges.append("7");
	c_Knowledges.append("8");
	c_Knowledges.append("9");
	mainGrid.attach(c_Knowledges, 5, 21, 1, 1);

	kn = c_Knowledges.get_active_text(); 
	knowledges = atoi(kn.c_str());
	ab.getKnowledgesPoints(knowledges);

	l_Advantages.set_text("Advantages");
	mainGrid.attach(l_Advantages, 2, 22, 2, 1);

	l_Disciplines.set_text("Disciplines");
	mainGrid.attach(l_Disciplines, 0, 23, 2, 1);

	l_Backgrounds.set_text("Backgrounds");
	mainGrid.attach(l_Backgrounds, 2, 23, 2, 1);

	l_Virtues.set_text("Virtues");
	mainGrid.attach(l_Virtues, 4, 23, 2, 1);

	logo.set("logo.png");
	mainGrid.attach(logo,1,0,4,1);

	mainGrid.show_all();
	fenetre.add(mainGrid);
	fenetre.show_all_children();
}

FirstInterface::~FirstInterface() {}

