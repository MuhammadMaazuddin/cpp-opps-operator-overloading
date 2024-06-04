#ifndef FRACTION
#define FRACTION
#include<iostream>
using namespace std;
class Fraction
{
    private:
        int numerator;
        int denomenator;
        int fraction;
    public:
        Fraction();
        Fraction(int numer);
        Fraction(int numer, int denome);
        Fraction(Fraction &m);
        int getDenomerator();
        int getNumerator();
        void displayFraction();
        Fraction operator+(Fraction m);
        Fraction operator-(Fraction m);
        Fraction operator*(Fraction m);
        Fraction operator/(Fraction m);
        void operator+=(Fraction m);
        void operator-=(Fraction m);
        void operator*=(Fraction m);
        void operator/=(Fraction m);
        bool operator==(Fraction m);
        bool operator!=(Fraction m);
        bool operator<(Fraction m);
        bool operator>(Fraction m);
        bool operator<=(Fraction m);
        bool operator>=(Fraction m);
        Fraction operator++();
        Fraction operator++(int);
        Fraction operator--();
        Fraction operator--(int);
        bool operator&&(Fraction m);
        bool operator||(Fraction m);
        int operator&(Fraction m);
                void operator()(int i, int j);

        friend ostream& operator<<(ostream& os, const Fraction& f);
        friend istream& operator>>(istream& is, Fraction& f);
};
ostream& operator<<(ostream& input, const Fraction& f) ;
istream& operator>>(istream& input, Fraction& f);
#endif