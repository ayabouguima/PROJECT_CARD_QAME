



#ifndef CARTE_H
#define CARTE_H

#include <QString>
#include <QPixmap>

class Carte {
public:
    Carte(QString valeur, QString symbole, QString cheminImage);
    QString getValeur() const;
    QString getSymbole() const;
    QPixmap getImage() const;

private:
    QString valeur;
    QString symbole;
    QPixmap image;
};

#endif // CARTE_H
