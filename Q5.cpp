#include<iostream>
#include"Array.cpp"
using namespace std;
int main()
{
    int arr1[3];
    int arr2[3];
    int arr3[3];
    for(int i=0;i<3;i++){arr1[i]=i;}
    for(int i=0;i<3;i++){arr2[i]=i;}
    for(int i=0;i<3;i++){arr3[i]=i;}

    Array A1(arr1,3);
    Array A2(arr2,3);
    Array A3(arr3,3);
    A3=A1+A2;
    A3.display();

    


    return 0;
}