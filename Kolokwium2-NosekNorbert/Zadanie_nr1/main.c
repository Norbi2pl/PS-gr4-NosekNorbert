#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Zdefiniuj stałą MAX_LEN, a następnie zdefiniuj C-strukturę Produkt o polach nazwa typu char[MAX_LEN], cenaBrutto typu double oraz stawkaVAT typu float. Zdefiniuj następujęce funkcje:
Produkt makeProdukt(const char *nazwa, double cenaBrutto, float stawkaVAT)
Produkt makeProdukt(const Produkt *produkt);
double cenaNetto(const Produkt *produkt);
double kwotaVAT(const Produkt *produkt);
void show(const Produkt *produkt);
Napisz program testujący napisane funkcje.
*/

#define MAX_LEN 500

typedef struct Produkt
{
    char nazwa[MAX_LEN];
    double cenaBrutto;
    float stawkaVAT;

}Produkt;

Produkt makeProdukt(const char *nazwa, double cenaBrutto, float stawkaVAT)
{
    Produkt prod1;
    strcpy(prod1.nazwa, nazwa);
    prod1.cenaBrutto = cenaBrutto;
    prod1.stawkaVAT = stawkaVAT;
    return prod1;
}

Produkt makeProdukt2(const Produkt *produkt)
{
    Produkt prod2;
    strcpy(prod2.nazwa, produkt->nazwa);
    prod2.cenaBrutto = produkt->cenaBrutto;
    prod2.stawkaVAT = produkt->stawkaVAT;
    return prod2;
}

double cenaNetto(const Produkt *produkt)
{
    double cena;
    double VAT = (produkt->stawkaVAT);
    VAT = VAT / 100;
    VAT += 1;
    cena = produkt->cenaBrutto/VAT;
    return cena;
}

double kwotaVAT(const Produkt *produkt)
{
    return produkt->cenaBrutto - cenaNetto(produkt);
}

void show(const Produkt *produkt)
{
    printf("Nazwa produktu : %s\n", produkt->nazwa);
    printf("Cena brutto produktu : %lf\n", produkt->cenaBrutto);
    printf("Stawka VAT produktu : %f", produkt->stawkaVAT);
}

int main()
{
    Produkt prod = makeProdukt("Volvo_S40", 12900, 23);
    show(&prod);
    printf("\n");
    Produkt prod2 = makeProdukt2(&prod);
    show(&prod2);
    printf("\n");
    printf("Kwota podatkowa :%f", kwotaVAT(&prod));
    printf("\n");
    printf("Cena netto produktu :%f", cenaNetto(&prod));

    return 0;
}

