// Paquet.h
#ifndef PAQUET_H
#define PAQUET_H

#include "Carte.h"
#include <QVector>

class Paquet {
public:
    Paquet(const QVector<Carte>& cartesInitiales);
    void melanger();
    Carte piocherCarte();
    int nombreDeCartes() const;
    QVector<Carte> getCartes() const;

private:
    QVector<Carte> cartes;
};

#endif // PAQUET_H
