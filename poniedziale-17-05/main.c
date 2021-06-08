#include <stdio.h>
#include <stdlib.h>

struct trojkat
{
    double a, b, c;
}trojkat;

double obwod(struct trojkat t)
{
    return t.a + t.b + t.c;
}

typedef struct zespolone
{
    double re, im;

} zespolone;

zespolone dodaj(zespolone war1, zespolone war2)
{
    zespolone wynik = {war1.re + war2.re, war1.im + war2.im};
    return wynik;
}


typedef struct student{
    char imie[50];
    char nazwisko[50];
    char adres[50];
    int pesel[11];
} student;

void info_student(student *s)
{
    printf("Imie studenta: ");
    gets(s->imie);
    printf("Nazwisko studenta: ");
    gets(s->nazwisko);
    printf("Adres studenta: ");
    gets(s->adres);
    printf("Pesel studenta: ");
    gets(s->pesel);
}


typedef enum zwierzak
{
    kot,
    pies,
    chomik,
    ryba,
    papuga
} zwierzak;


int main()
{
    zwierzak zwierz = kot;
    printf("Numer zwierzaka %d\n", (int)zwierz);

    return 0;
}
