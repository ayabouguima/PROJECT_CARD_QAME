
#include "Carte.h"

Carte::Carte(QString valeur, QString symbole, QString cheminImage)
    : valeur(valeur), symbole(symbole), image(cheminImage) {}

QString Carte::getValeur() const {
    return valeur;
}

QString Carte::getSymbole() const {
    return symbole;
}

QPixmap Carte::getImage() const {
    return image;
}

