#include <string>
#include <iostream>

class Animal{
public:
    std::string nom;
};

class Chien : public Animal {};

class Chat : public Animal {};


void rencontre(Animal a1, Animal a2) { 
    std::cout << "FALLBACK" << std::endl; 
}

void rencontre(Chien a1, Animal a2){
    std::cout << a1.nom << " est excité de se faire un nouvel ami!" << std::endl;
}

void rencontre(Chien a1, Chien a2){
    std::cout << a1.nom << " et " << a2.nom << " sont maintenant inséparables!" << std::endl;
}

void rencontre(Chat a1, Animal a2){
    std::cout << a1.nom << " ne réagit pas a son environnement..." << std::endl;
}

void rencontre(Chat a1, Chat a2){
    std::cout << a1.nom << " et " << a2.nom << " mangent de la lasagne ensemble." << std::endl;
}

void introduction(Animal a1, Animal a2){
    std::cout << "Resultat de l'introduction: ";
    rencontre(a1, a2);
}


int main(){

    Chien rex;
    rex.nom = "Rex";
    
    Chien buddy;
    buddy.nom = "Buddy";

    Chat garfield;
    garfield.nom = "Garfield";

    Chat grumpy;
    grumpy.nom = "Grumpy Cat";

    // On presente les animaux
    introduction(rex, buddy);
    introduction(rex, grumpy);
    introduction(garfield, buddy);
    introduction(garfield, grumpy);

    return 0;
}