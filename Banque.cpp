#include "Banque.h"
#include <iostream>

using namespace std;
using namespace banque;

Compte::Compte(){
    this->numCompte = 0;
    strcpy(this->nomProprietaire,"");
    this->solde = 0;
}

Compte::Compte(int nc, char* np, double sol){
    this->numCompte = nc;
    strcpy(this->nomProprietaire,np);
    this->solde = sol;
}

bool Compte::retirerArgent(double val){
    if (this->solde >= val){
        this->solde -= val;
        return true;
    }
    else
        return false;
}

void Compte::deposerArgent(double val){
    this->solde += val;
}

void Compte::consulterSolde(){
    cout << "Compte num " << this->numCompte << "\n";
    cout << "Proprietaire : " << this->nomProprietaire << "\n";
    cout << "Solde : " << this->solde <<"dhs\n";
}

void Compte::transfererArgent(Compte* cpt, double val){
    if(this->retirerArgent(val))
        cpt->deposerArgent(val);
}