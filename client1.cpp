#include "client.h"
#include <string>
#include <iostream>
using namespace std;

Client::Client(string username, string password){
    this->username = username;
    this->password = password;
}
void Client::changePassWord(string oldPasswrd, string newPassWord){
    
    if (this->getPassword()==oldPasswrd)
    {
        this->password=newPassWord;
    }
    else
    {
        cout<<"Le password entre ne correspond pas, veuillez entrer un password valide"<<endl;
    } 
}
void Client::setUsername(string username){
    this->username = username;
}
void Client::setPassword(string password){
    this->password = password;
}
string Client::getUsername(){
    return this->username;
}


Compte::Compte(Client client, string codeCompte, float solde){
    this->client = client;
    this->codeCompte = codeCompte;
    this->solde = solde;
}
void Compte::setClient(Client client){
    this->client = client;
}
void Compte::setCodeCompte(string codeCompte){
    this->codeCompte = codeCompte;
}
void Compte::setSolde(float solde){
    this->solde = solde;
}
void Compte::setCredit(float credit){
    this->dette = credit;
}

float Compte::getSolde(){
    return this->solde;
}
float Compte::getDette(){
    return this->solde;
}
Client Compte::getClient(){
    return client;
}
string Compte::getCodeCompte(){
    return this->codeCompte;
}

void Compte::depot(float montant){
    this->solde += montant;
}

void Compte::virement(Compte recepiandeur, float montant){
    if (this->getSolde()>=montant)
    {
        recepiandeur.solde += montant;
        this->solde -= montant;
        cout<<"Le transfert d'argent au compte "<<recepiandeur.client.getUsername()<<" a reussi"<<endl;
    }
    else
    {
        cout<<"Votre solde est insuffisant pour effectuer cette operation"<<endl;
    }   
}

void Compte::demandeCredit(float montant){
    
}
