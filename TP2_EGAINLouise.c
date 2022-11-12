#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ************************************
// definition des types : liste chainee 
// ************************************
typedef struct _TEtudiant
{
	char nom[25];
        char prenom[25];
        int num;
        int noteCC;
} TEtudiant;

typedef struct _Tcell
{
	TEtudiant etu; // un etudiant -- liste TRIEE
	struct _Tcell * suivant; 
} Tcell;

typedef struct _TListe
{
	Tcell * debut;  // liste TRIEE sur le nom et prénom des étudiants
} TListe;

// **************************
//  prototypes des fonctions
// **************************
int saisir_entre(int min, int max); // donne un nombre entre min et max
TEtudiant saisir_etu(int i); // demande à l'utilisateur le nom d'un étudiant, son prénom et initialise sa note de CC à 0 et son numéro d'étudiant par i
void ajout_Etudiant(TListe * liste, int i); // ajoute l'étudiant numéro i dans la liste triée
void creerListeEtudiant(TListe * liste); // ajout de tous les étudiants dans la liste
void libererListeEtudiant(TListe * liste); // supprimer un étudiant
void afficher_etu(TEtudiant etu); // afficher les attributs d'un étudiant
void afficherListeEtudiant(TListe liste); // afficher les attributs de tous les étudiants
void rechercheEtudiant(TListe liste, int i); // rechercher un étudiant et afficher ses attributs
void supprimerListeEtudiant(TListe * liste, int i); // supprimer toute la liste
void modifier_notes(TListe * liste); // modifier les notes de CC de tous les étudiants
void moyenne_notes(TListe liste); // afficher la moyenne des notes de CC

// **********************
//  programme principal
// **********************
int main ()
{
	TListe liste;
	liste.debut = NULL; 

	// A FAIRE -- TESTER AU FUR ET A MESURE 
	// FAIRE EN PRIORITE : AJOUT / AFFICHAGE / LIBERER TOUTE LA LISTE
	// PUIS FAIRE LES AUTRES RECHERCHES ET CALCUL APRES

	return 0;
}

// procédure pour saisir un étudiant
TEtudiant saisir_etu(int i)
{
   // A FAIRE
}

// procédure ajout Etudiant
void ajout_Etudiant (TListe * liste, int i)
{
	 // A FAIRE
}

// procédure pour créer la liste d'Etudiants
void creerListeEtudiant (TListe * liste)
{
	 // A FAIRE
}

void afficher_etu(TEtudiant e)
{ 	
	// A FAIRE
}

// procédure pour afficher une liste d'Etudiants
void afficherListeEtudiant (TListe liste)
{
	// A FAIRE
	
}

// procédure pour libérer une liste d'Etudiants
void libererListeEtudiant (TListe * liste)
{
	// A FAIRE
}

// procédure pour supprimer un élément de la liste
void supprimerListeEtudiant (TListe * liste , int i)
{
	// A FAIRE
}

// fonction saisir_entre
int saisir_entre(int min, int max)
{
    int nb =  0; 
    do
    {
        printf("Donner un nombre entre %d et %d \n", min, max);
        scanf("%d", &nb);
    } while (nb<min || nb>max);

    return nb;
}

// procédure pour rechercher un étudiant dans la liste 
void rechercheEtudiant(TListe liste, int i)
{
	// A FAIRE
    
}

// procédure qui modifie les notes des Etudiants
void modifier_notes(TListe * liste)
{
	// A FAIRE	   
}

// procédure qui calcule la moyenne
void moyenne_notes(TListe liste)
{
	// A FAIRE
}
