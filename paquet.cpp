// Paquet.cpp
#include "Paquet.h"
#include <QRandomGenerator>

Paquet::Paquet(const QVector<Carte>& cartesInitiales)
    : cartes(cartesInitiales) {}

void Paquet::melanger() {
    // Mélanger les cartes dans le paquet
    std::random_shuffle(cartes.begin(), cartes.end());
}

Carte Paquet::piocherCarte() {
    // Retirer et renvoyer la carte du haut du paquet
    Carte carte = cartes.takeFirst();
    return carte;
}

int Paquet::nombreDeCartes() const {
    return cartes.size();
}

QVector<Carte> Paquet::getCartes() const {
    return cartes;
}
