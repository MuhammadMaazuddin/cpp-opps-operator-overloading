#include<iostream>
#include"Matrix.cpp"
using namespace std;
int main()
{
    Matrix N1(1,1,1,1,2,2,2,2,3,3,3,3,4,4,4,4,4,4);
    Matrix N2(2,2,2,2,1,1,1,1,4,4,4,4,3,3,3,3,4,4);
    Matrix MM(4,4);
    MM=N1+N2;
    MM.Display();
    return 0;
}