#pragma once
namespace banque{
    class Compte{
        private:
            int numCompte;
            char* nomProprietaire;
            double solde;
        public:
            Compte();
            Compte(int nc, char* np, double sol);
            bool retirerArgent(double val);
            void deposerArgent(double val);
            void consulterSolde();
            void transfererArgent(Compte* cpt, double val);
    };
}