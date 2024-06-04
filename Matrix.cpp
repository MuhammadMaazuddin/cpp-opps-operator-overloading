#include<iostream>
#include"Matrix.h"
using namespace std;
Matrix::Matrix(){}
Matrix::Matrix(int n1, int n2, int n3, int n4, int row = 2, int col = 2)
{
    this->row = row;
    this->column = col;
    matrix = new int*[row];
    for (int i = 0; i < row; i++) 
    {
        matrix[i] = new int[col];
    }
    matrix[0][0] = n1;
    matrix[0][1] = n2;
    matrix[1][0] = n3;
    matrix[1][1] = n4;
}
Matrix::Matrix (int n1, int n2, int n3, int n4, int n5, int n6, int n7, int n8, int n9, int row = 3, int col = 3)
{
    this->row = row;
    this->column = col;
        matrix = new int*[row];
    for (int i = 0; i < row; i++) 
    {
        matrix[i] = new int[col];
    }
    matrix[0][0] = n1;
    matrix[0][1] = n2;
    matrix[0][2] = n3;
    matrix[1][0] = n4;
    matrix[1][1] = n5;
    matrix[1][2] = n6;
    matrix[2][0] = n7;
    matrix[2][1] = n8;
    matrix[2][2] = n9;
}
Matrix::Matrix (int n1, int n2, int n3, int n4, int n5, int n6, int n7, int n8, int n9, int n10, int n11,int n12, int n13, int n14, int n15, int n16, int row = 4, int col = 4)
{
    this->row = row;
    this->column = col;
        matrix = new int*[row];
    for (int i = 0; i < row; i++) 
    {
        matrix[i] = new int[col];
    }
    matrix[0][0] = n1;
    matrix[0][1] = n2;
    matrix[0][2] = n3;
    matrix[0][3] = n4;
    matrix[1][0] = n5;
    matrix[1][1] = n6;
    matrix[1][2] = n7;
    matrix[1][3] = n8;
    matrix[2][0] = n9;
    matrix[2][1] = n10;
    matrix[2][2] = n11;
    matrix[2][3] = n12;
    matrix[3][0] = n13;
    matrix[3][1] = n14;
    matrix[3][2] = n15;
    matrix[3][3] = n16;
}
Matrix::Matrix(int row, int col)
{
    this->row = row;
    this->column = col;
        matrix = new int*[row];
    for (int i = 0; i < row; i++) 
    {
        matrix[i] = new int[col];
    }
}
Matrix::Matrix(Matrix &m)
{
    row = m.row;
    column = m.column;
    matrix = new int*[row];
    for (int i = 0; i < row; i++) 
    {
        matrix[i] = new int[column];
        for (int j = 0; j < column; j++) 
        {
            matrix[i][j] = m.matrix[i][j];
        }
    }
}
float Matrix::operator()(int &i, int &j)
{
float num;
    for(int m=0;m<row;m++)
    {
        if(m==i)
        {
        for(int n=0;n<column;n++)
        {
            if(n==j)
            {
                num=matrix[m][n];
            }
        }
        }
        }
        return num;
}
float Matrix::operator()(int &i, int &j)const
{
    float num;
    for(int m=0;m<row;m++)
    {
        if(m==i)
        {
        for(int n=0;n<column;n++)
        {
            if(n==j)
            {
                num=matrix[m][n];
            }
        }
        }
        }
        return num;
}
Matrix Matrix::operator=(const Matrix &m)
{
    Matrix temp;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            temp.matrix[i][j]=m.matrix[i][j];
        }
    }
    return temp;
}
bool Matrix::operator==(const Matrix &m)
{
    bool flag = false;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
        if(m.matrix[i][j]==matrix[i][j])
        {
            flag=true;
        }
        }
    }
return flag;
}
Matrix Matrix::operator+(const Matrix &m)
{
    Matrix temp;
    temp.matrix = new int*[row];
    for (int i = 0; i < row; i++) 
    {
        temp.matrix[i] = new int[column];
    }
    
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            temp.matrix[i][j]=m.matrix[i][j]+matrix[i][j];
        }
    }
    return temp;
}
Matrix Matrix::operator-(const Matrix &m)
{
Matrix temp;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            temp.matrix[i][j]=m.matrix[i][j]-matrix[i][j];
        }
    }
    return temp;
}
Matrix Matrix::operator*(const Matrix &m)
{
    int sum;
        Matrix temp;
            for(int i = 0; i<row; i++)
                {for(int j=0; j<row;j++)
                    {sum=0;for(int k=0; k<row;k++)
                        {sum += matrix[i][k] * m.matrix[k][j];}
                            temp.matrix[i][j] = sum;}}
return temp;  
}
Matrix Matrix::operator++(int)
{
    Matrix temp;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            temp.matrix[i][j]=matrix[i][j];
        }
    }
for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            temp.matrix[i][j]++;
        }
    }
    return temp;
}
void Matrix::operator+=(const Matrix &)
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            matrix[i][j]+=matrix[i][j];
        }
    }
}
void Matrix::operator-=(const Matrix &)
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            matrix[i][j]-=matrix[i][j];
        }
    }
}
ostream& operator<<(ostream& input,const  Matrix& m)
{
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            input<<m.matrix[i][j]<<"  ";
        }
        input<<endl;
        
    }        input<<endl;
return input;
}
istream& operator>>(istream& input, Matrix&m )
{
    // for(int i=0;i<m.row;i++)
    // {
    //     for(int j=0;j<m.column;j++)
    //     {
    //         input>>m.matrix[i][j];
    //     }
        
    // }        
return input;
}
void Matrix::Display()
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            cout<<matrix[i][j]<<" ";
        }cout<<endl;
    }
}
Matrix::~Matrix(){}