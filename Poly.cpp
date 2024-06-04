#include<iostream>
#include"Poly.h"
using namespace std;
        Polynomial::Polynomial(){}
        Polynomial::Polynomial(int degree)
        {
            Poly = new float[degree];
        }
        Polynomial::Polynomial(const Polynomial &poly)
        {
            Poly = new float[degree];
                for(int i=0;i<poly.degree;i++)
                {
                    Poly[i]=poly.Poly[i];
                }
        }
        Polynomial& Polynomial::operator=(const Polynomial &poly)
        {
            Polynomial temp;
            temp.Poly = new float[degree];
                for(int i=0;i<poly.degree;i++)
                {
                    temp.Poly[i]=poly.Poly[i];
                }
                return temp;
        }
        bool Polynomial::operator==(const Polynomial &poly)
        {
            bool flag = false;
            if(degree==poly.degree)
            {for(int i=0;i<degree;i++)
            {if(Poly[i]==poly.Poly[i]){flag=true;}
            else if(Poly[i]!=poly.Poly[i]){flag=false;break;}}}
            else{flag=false;}
            return flag;

        }
        Polynomial& Polynomial::operator+(const Polynomial &poly)
        {int i=0;
        Polynomial temp;
            if(degree>poly.degree)
            {
                for(i;i<poly.degree;i++)
                {temp.Poly[i]=Poly[i]+poly.Poly[i];}
                for(int j=i;j<degree;j++)
                {temp.Poly[j]=Poly[j]+0;}
            }
            else if(poly.degree>degree)
            {
                for(i;i<degree;i++)
                {temp.Poly[i]=Poly[i]+poly.Poly[i];}
                for(int j=i;j<poly.degree;j++)
                {temp.Poly[j]=poly.Poly[j]+0;}
            }
return temp;
        }
        Polynomial& Polynomial::operator-(const Polynomial &poly)
        {
int i=0;
        Polynomial temp;
            if(degree>poly.degree)
            {
                for(i;i<poly.degree;i++)
                {temp.Poly[i]=Poly[i]-poly.Poly[i];}
                for(int j=i;j<degree;j++)
                {temp.Poly[j]=Poly[j]-0;}
            }
            else if(poly.degree>degree)
            {
                for(i;i<degree;i++)
                {temp.Poly[i]=Poly[i]-poly.Poly[i];}
                for(int j=i;j<poly.degree;j++)
                {temp.Poly[j]=poly.Poly[j]-0;}
            }
return temp;
        }
        void Polynomial::operator+=(const Polynomial &poly)
        {
           int i=0;
            if(degree>poly.degree)
            {
                for(i;i<poly.degree;i++)
                {Poly[i]+=poly.Poly[i];}
                for(int j=i;j<degree;j++)
                {Poly[j]+=0;}
            }
            else if(poly.degree>degree)
            {
                for(i;i<degree;i++)
                {Poly[i]+=poly.Poly[i];}
                for(int j=i;j<poly.degree;j++)
                {poly.Poly[j]+=0;}
            }
        }
        void Polynomial::operator-=(const Polynomial &poly)
        {
int i=0;
            if(degree>poly.degree)
            {
                for(i;i<poly.degree;i++)
                {Poly[i]+=poly.Poly[i];}
                for(int j=i;j<degree;j++)
                {Poly[j]+=0;}
            }
            else if(poly.degree>degree)
            {
                for(i;i<degree;i++)
                {Poly[i]+=poly.Poly[i];}
                for(int j=i;j<poly.degree;j++)
                {poly.Poly[j]+=0;}
            }
        }
        Polynomial::~Polynomial(){}
        ostream& operator<<(ostream& input, const Polynomial& poly)
        {
            for(int i=0;i<poly.degree;i++)
            {
                input<<poly.Poly[i]<<"x"<<i<<" ";
            }
            input<<endl;
            return input;
        }
        istream& operator>>(istream& output, const Polynomial& poly)
        {
            for(int i=0;i<poly.degree;i++)
            {
                output>>poly.Poly[i];
            }
            return output;
        }