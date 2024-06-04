#include<iostream>
#include"Fraction.h"
using namespace std;
int GreatestCommanDivisor(int a, int b) 
{
    if (b == 0) {
        return a;
    }
    return GreatestCommanDivisor(b, a % b);

}
Fraction::Fraction(Fraction &m)
{
    int denome = m.denomenator;
    int numer= m.numerator;
     if(denome < 0)
    {numer = (-1)*numer;denome = (-1)*denome;}

    int gcd = GreatestCommanDivisor((numer < 0) ? -numer : numer, (denome < 0) ? -denome : denome);
    numer /= gcd;
    denome /= gcd;
    numerator=numer;
    denomenator=denome;
}
Fraction::Fraction()
{
    numerator=0;
    denomenator=1;
}
Fraction::Fraction(int numer)
{
    numerator=numer;
    denomenator=1;
}
Fraction::Fraction(int numer, int denome)
{
    if(denome < 0)
    {numer = (-1)*numer;denome = (-1)*denome;}

    int gcd = GreatestCommanDivisor((numer < 0) ? -numer : numer, (denome < 0) ? -denome : denome);
    numer /= gcd;
    denome /= gcd;
    numerator=numer;
    denomenator=denome;
}
int Fraction::getNumerator()
{
    return numerator;
}
int Fraction::getDenomerator()
{
    return denomenator;
}
void Fraction::displayFraction()
{
    cout<<"RESULT = "<<numerator<<"/"<<denomenator<<endl;
}
Fraction Fraction::operator+(Fraction m)
{ 
    Fraction temp;
    temp.numerator=(numerator*m.denomenator)+(denomenator*m.numerator);
    temp.denomenator=denomenator*m.denomenator;

    if(temp.denomenator < 0)
    {temp.numerator = (-1)*temp.numerator;temp.denomenator = (-1)*temp.denomenator;}

    int gcd = GreatestCommanDivisor((temp.numerator < 0) ? -temp.numerator : temp.numerator, (temp.denomenator < 0) ? -temp.denomenator : temp.denomenator);
    temp.numerator /= gcd;
    temp.denomenator /= gcd;
return temp;
}
Fraction Fraction::operator-(Fraction m)
{
 Fraction temp;
    temp.numerator=(numerator*m.denomenator)-(denomenator*m.numerator);
    temp.denomenator=denomenator*m.denomenator;

    if(temp.denomenator < 0)
    {temp.numerator = (-1)*temp.numerator;temp.denomenator = (-1)*temp.denomenator;}

    int gcd = GreatestCommanDivisor((temp.numerator < 0) ? -temp.numerator : temp.numerator, (temp.denomenator < 0) ? -temp.denomenator : temp.denomenator);
    temp.numerator /= gcd;
    temp.denomenator /= gcd;
return temp;
}
Fraction Fraction::operator*(Fraction m)
{
     Fraction temp;
    temp.numerator=numerator*m.numerator;
    temp.denomenator=denomenator*m.denomenator;

    if(temp.denomenator < 0)
    {temp.numerator = (-1)*temp.numerator;temp.denomenator = (-1)*temp.denomenator;}

    int gcd = GreatestCommanDivisor((temp.numerator < 0) ? -temp.numerator : temp.numerator, (temp.denomenator < 0) ? -temp.denomenator : temp.denomenator);
    temp.numerator /= gcd;
    temp.denomenator /= gcd;
return temp;
}
Fraction Fraction::operator/(Fraction m)
{
    Fraction temp;
    temp.numerator=numerator*m.denomenator;
    temp.denomenator=denomenator*m.numerator;

    if(temp.denomenator < 0)
    {temp.numerator = (-1)*temp.numerator;temp.denomenator = (-1)*temp.denomenator;}

    int gcd = GreatestCommanDivisor((temp.numerator < 0) ? -temp.numerator : temp.numerator, (temp.denomenator < 0) ? -temp.denomenator : temp.denomenator);
    temp.numerator /= gcd;
    temp.denomenator /= gcd;
return temp;
}
void Fraction::operator+=(Fraction m)
{
    
    numerator=(numerator*m.denomenator)+(denomenator*m.numerator);
    denomenator=denomenator*m.denomenator;

    if(denomenator < 0)
    {numerator = (-1)*numerator;denomenator = (-1)*denomenator;}

    int gcd = GreatestCommanDivisor((numerator < 0) ? -numerator :numerator, (denomenator < 0) ? -denomenator : denomenator);
    numerator /= gcd;
    denomenator /= gcd;
}
void Fraction::operator-=(Fraction m)
{
     numerator=(numerator*m.denomenator)-(denomenator*m.numerator);
    denomenator=denomenator*m.denomenator;

    if(denomenator < 0)
    {numerator = (-1)*numerator;denomenator = (-1)*denomenator;}

    int gcd = GreatestCommanDivisor((numerator < 0) ? -numerator :numerator, (denomenator < 0) ? -denomenator : denomenator);
    numerator /= gcd;
    denomenator /= gcd;
}
void Fraction::operator*=(Fraction m)
{
     numerator=numerator*m.numerator;
    denomenator=denomenator*m.denomenator;

    if(denomenator < 0)
    {numerator = (-1)*numerator;denomenator = (-1)*denomenator;}

    int gcd = GreatestCommanDivisor((numerator < 0) ? -numerator :numerator, (denomenator < 0) ? -denomenator : denomenator);
    numerator /= gcd;
    denomenator /= gcd;
}
void Fraction::operator/=(Fraction m)
{
    numerator=numerator*m.denomenator;
    denomenator=denomenator*m.numerator;

    if(denomenator < 0)
    {numerator = (-1)*numerator;denomenator = (-1)*denomenator;}

    int gcd = GreatestCommanDivisor((numerator < 0) ? -numerator :numerator, (denomenator < 0) ? -denomenator : denomenator);
    numerator /= gcd;
    denomenator /= gcd;
}
bool Fraction::operator==(Fraction m)
{
    bool flag = false;
    if(numerator==m.numerator && denomenator==m.denomenator){flag = true;}
    return flag;
}
bool Fraction::operator!=(Fraction m)
{
     bool flag = false;
    if(numerator!=m.numerator || denomenator!=m.denomenator){flag = true;}
    return flag;
}
bool Fraction::operator<(Fraction m)
{
    bool flag = false;
    float a=0,b=0;
    a=numerator/denomenator;
    b=m.numerator/m.denomenator;
    if(a<b){flag = true;}
    return flag;
}
bool Fraction::operator>(Fraction m)
{
     bool flag = false;
    float a=0,b=0;
    a=numerator/denomenator;
    b=m.numerator/m.denomenator;
    if(a>b){flag = true;}
    return flag;
}
bool Fraction::operator<=(Fraction m)
{
    bool flag = false;
    float a=0,b=0;
    a=numerator/denomenator;
    b=m.numerator/m.denomenator;
    if(a<=b){flag = true;}
    return flag;
}
bool Fraction::operator>=(Fraction m)
{
    bool flag = false;
    float a=0,b=0;
    a=numerator/denomenator;
    b=m.numerator/m.denomenator;
    if(a>=b){flag = true;}
    return flag;
}
Fraction Fraction::operator++()
{
    Fraction temp;
    numerator=numerator+denomenator;
    denomenator=denomenator*1;
    temp.numerator=numerator;
    temp.denomenator=denomenator;
    return temp;
}
Fraction Fraction::operator++(int)
{
    Fraction temp;
    numerator=numerator+denomenator;
    denomenator=denomenator*1;
    temp.numerator=numerator;
    temp.denomenator=denomenator;
    return temp;
}
Fraction Fraction::operator--()
{
    Fraction temp;
    numerator=numerator-denomenator;
    denomenator=denomenator*1;
    temp.numerator=numerator;
    temp.denomenator=denomenator;
    return temp;
}
Fraction Fraction::operator--(int)
{
    Fraction temp;
    numerator=numerator-denomenator;
    denomenator=denomenator*1;
    temp.numerator=numerator;
    temp.denomenator=denomenator;
    return temp;
}
bool Fraction::operator&&(Fraction m)
{
            bool f1, f2;
            f1 = (numerator != 0) && (denomenator != 0);
            f2 = (m.numerator != 0) && (m.denomenator != 0);
            return f1 && f2;
}
bool Fraction::operator||(Fraction m)
{           bool f1, f2;
            f1 = (numerator != 0) || (denomenator != 0);
            f2 = (m.numerator != 0) || (m.denomenator != 0);
            return f1 || f2;
}
int Fraction::operator&(Fraction m)
{
            int frac1 = numerator & denomenator;
            int frac2 = m.numerator & m.denomenator;
            return frac1 & frac2;
}
ostream& operator<<(ostream& input, const Fraction& f) 
{
            input << f.numerator << "/" << f.denomenator;
            return input;
}
istream& operator>>(istream& input, Fraction& f)
{
            
            input >> f.numerator >> f.denomenator;
            return input;
}
void Fraction::operator()(int i, int j)
{
    numerator=i;
    denomenator=j;
    
}
