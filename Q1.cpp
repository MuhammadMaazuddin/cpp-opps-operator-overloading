#include<iostream>
#include"Fraction.cpp"
using namespace std;
int main()
{
    Fraction F1(4,4);
    Fraction F2(3,5);
    Fraction F4(3,3);
    Fraction F3;
    F3=F1+F2;
    F3.displayFraction();
    F3=F1-F2;
    F3.displayFraction();
    F3=F1*F2;
    F3.displayFraction();
    F3=F1/F2;
    F3.displayFraction();
    F1+=F2;
    F1.displayFraction();
    F1-=F2;
    F1.displayFraction();
    F2*=F4;
    F2.displayFraction();
    F4/=F1;
    F4.displayFraction();
    F1++;
    F1.displayFraction();
    F2--;
    F2.displayFraction();
    ++F4;
    F4.displayFraction();
    --F3;
    F3.displayFraction();
    if(F1<F2){cout<<"you are lucky\n";}else{cout<<"won\n";}
    if(F1>F2){cout<<"you are too lucky\n";}else{cout<<"won\n";}
    if(F4<=F1){cout<<"you are best\n";}else{cout<<"won\n";}
    if(F4>=F1){cout<<"you are best\n";}else{cout<<"won\n";}
    F1=F2&F1;
    if(F4&&F1){cout<<"you are best\n";}else{cout<<"won\n";}
    if(F4>=F1){cout<<"you are best\n";}else{cout<<"won\n";}
    if(F4&&F1){cout<<"you are best\n";}else{cout<<"won\n";}
    if(F4||F1){cout<<"you are best\n";}else{cout<<"won\n";}
    cin>>F1;
    cout<<F1<<endl;
    



    


      return 0;
}