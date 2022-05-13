// <meta name="google-site-verification" 
// content="wdu9iQJBm8jwdeoVMGQG7U4Zy66wPkASoAIicSBPwJ0"/>


#include<string>

using namespace std;
class Client{
    public:
        Client();
        Client(string username, string password);

        void setUsername(string username);
        void setPassword(string password);
        void changePassWord(string oldPasswrd, string newPassWord);

        string getUsername();
        string getPassword();

    private:
        string username;
        string password;
};

class Compte{
    public:
        Compte();
        Compte(Client client, string codeCompte, float solde);

        void setClient(Client client);
        void setCodeCompte(string codeCompte);
        void setSolde(float solde);
        void setCredit(float credit);

        Client getClient();
        string getCodeCompte();
        float getSolde();
        float getDette();

        void depot(float montant);
        void retrait(float montant);
        void virement(Compte recipiandeur, float montant);
        void demandeCredit(float montant);
        void remboursement(float montant);
        void verifieSolde();

    private:
        Client client;
        string codeCompte;
        float solde;
        float dette;
};
