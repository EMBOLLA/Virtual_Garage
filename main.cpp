#include <iostream>
#include <string>
#include <vector>

class Vehicle {
    std::string Marque;
    std::string Modele;
    int Annee;
    std::string Immatriculation;
    int Entretien;
    public:
    Vehicle(const std::string& marque, const std::string& modele, int annee, const std::string& immatriculation, int entretien){
        Marque = marque;
        Modele = modele;
        this->Annee = annee;
        this->Immatriculation = immatriculation;
        this->Entretien = entretien;

    }
    std::string marque(){
        return Marque;
    }
    std::string modele(){
        return Modele;
    }
    int annee(){
        return Annee;
    }
    std::string immatriculation(){
        return Immatriculation;
    }
    int entretien(){
        return Entretien;
    }
    void PrintVehicle(){
        std::cout << "Marque: " << Marque << std::endl;
        std::cout << "Modele: " << Modele << std::endl;
        std::cout << "Annee: " << Annee << std::endl;
        std::cout << "Immatriculation: " << Immatriculation << std::endl;
        std::cout << "Entretien: " << Entretien << std::endl;
    }
    void SetMarque(const std::string& marque) {
        Marque = marque;
    }
    void SetMarque(const std::string& modele) {
        Modele = modele;
    }
    void SetAnnee(int annee) {
        Annee = annee;
    }
    void SetImmatriculation(const std::string& immatriculation) {
        Immatriculation = immatriculation;
    }
    void SetEntretien(int entretien) {
        Entretien = entretien;
    }
    ~Vehicle(){

    }
};

class Car : public Vehicle {
    public:
    Car(const std::string& marque, const std::string& modele, int annee, const std::string& immatriculation, int entretien)
        : Vehicle(marque, modele, annee, immatriculation, entretien) {}
};
class Truck : public Vehicle {
    public:
    Truck(const std::string& marque, const std::string& modele, int annee, const std::string& immatriculation, int entretien)
        : Vehicle(marque, modele, annee, immatriculation, entretien) {}
};
class Moto : public Vehicle {
    public:
    Moto(const std::string& marque, const std::string& modele, int annee, const std::string& immatriculation, int entretien)
        : Vehicle(marque, modele, annee, immatriculation, entretien) {}
};

class garage{
    std::vector<Vehicle*> vehicles;
    public:
    void AjouterVehicle(Vehicle* vehicle) {
        vehicles.push_back(vehicle);
    }
    void AfficherVehicles() {
        for (const auto& vehicle : vehicles) {
            vehicle->PrintVehicle();
            std::cout << "~~~~~~~~~~~~~~~~~~" << std::endl;
        }
    }
    void SupprimerVehicle(const std::string& immatriculation) {
        auto it = std::remove_if(vehicles.begin(), vehicles.end(), [&immatriculation](Vehicle* v) { v->immatriculation() == immatriculation; });
        if (it != vehicles.end()) {
            delete *it; 
            vehicles.erase(it, vehicles.end());
        } else {
            std::cout << "Véhicule non trouvé." << std::endl;
        }
    }
};


int main(int argc,char** argv[]){
int choix = 0;
while (choix != 4) {
    std::cout << "=======MENU======= \n";
    std::cout << "1. Ajouter un vehicule\n";
    std::cout << "2. Afficher les vehicules\n";
    std::cout << "3. Supprimer un vehicule\n";
    std::cout << "4. Quitter\n";
    std::cout << "Choisissez une option: ";
    std::cin >> choix;

    switch (choix) {
        case 1:
            
            break;
        case 2:
            
            break;
        case 3:
            
            break;
        case 4:
            std::cout << "Au revoir!" << std::endl;
            break;
        default:
            std::cout << "Option invalide, essayez encore." << std::endl;
            break;
    }
} 
    return 0;
}