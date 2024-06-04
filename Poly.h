#ifndef POLYNOMIAL
#define POLYNOMIAL
#include<iostream>
using namespace std;
class Polynomial
{
    private:
        int degree;
        float *Poly;
    public:
        Polynomial();
        Polynomial(int degree);
        Polynomial(const Polynomial &poly);
        Polynomial& operator=(const Polynomial &poly);
        bool operator==(const Polynomial &poly);
        Polynomial& operator+(const Polynomial &poly);
        Polynomial& operator-(const Polynomial &poly);
        void operator+=(const Polynomial &poly);
        void operator-=(const Polynomial &poly);
        ~Polynomial();
friend ostream& operator<<(ostream& input, const Polynomial& poly);
friend istream& operator>>(istream& output, const Polynomial& poly);

};
ostream& operator<<(ostream& input, const Polynomial& poly);
istream& operator>>(istream& output, const Polynomial& poly);


#endif