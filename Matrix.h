#ifndef MATRIX
#define MATRIX
#include<iostream>
using namespace std;
class Matrix
{
    private:
        int row;
        int column;
        int **matrix;
       
    public:
        Matrix();
        Matrix(int , int , int , int , int , int );
        Matrix(int , int , int , int , int , int , int , int , int , int , int );
        Matrix(int , int , int , int , int , int , int , int , int , int , int ,int , int , int , int , int , int, int);
        Matrix(int ,int);
        Matrix(Matrix &m);
        void Display();
        float operator()(int &i, int &j);
        float operator()(int &i, int &j)const;
        Matrix operator=(const Matrix &);
        bool operator==(const Matrix &);
        Matrix operator+(const Matrix &);
        Matrix operator-(const Matrix &);
        Matrix operator*(const Matrix &);
        Matrix operator++(int);
        void operator+=(const Matrix &);
        void operator-=(const Matrix &);
        friend ostream& operator<<(ostream& input,const  Matrix& );
        friend  istream& operator>>(istream& input, Matrix& );

        ~Matrix();
};
 ostream& operator<<(ostream& input,const  Matrix& );
istream& operator>>(istream& input, Matrix& );
#endif