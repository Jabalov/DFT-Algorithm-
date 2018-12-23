#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <complex.h>

#include<bits/stdc++.h>
using namespace std;

#define PI 3.14159265359
typedef long double LD;
typedef long long ll;

#define sc scanf
#define pf printf

struct complexNum {
  LD real, imaginary;
};

ll i, j;
int main(){

    ll N;
    cout << "Enter the number of Samples \n"; 
    cin >> N;

    double Xn[N] , ph[N] , mag[N];
    complexNum w[N][N], Xk[N];


    for(int i = 0; i < N; i++)
      for (int j = 0; j < N; j++)
      {
        w[i][j].real = cos((2*PI*i*j) / N);
        w[i][j].imaginary = -1*sin((2*PI*i*j) / N);
        pf("%Lf + %Lf j\n", w[i][j].real, w[i][j].imaginary);
      }
    

    for(int i = 0; i < N; i++)
        Xk[i].real = 0, Xk[i].imaginary = 0;


    cout << "Enter Xn: \n";
    for(int i = 0; i < N; i++)
        cin >> Xn[i]

    

    for(int i = 0; i < N; i++)
    {
      for (int j = 0; j < N; j++)
      {
        Xk[i].real += (w[i][j].real * Xn[j]);
        Xk[i].imaginary += (w[i][j].imaginary * Xn[j]);
      }

      pf("%Lf + %Lf j\n",Xk[j].real, Xk[j].imaginary);

      mag[i]= sqrt((Xk[i].real * Xk[i].real) + (Xk[i].imaginary * Xk[i].imaginary) );
      ph[i]= atan(Xk[i].imaginary / Xk[i].real);

      pf("mag is %Lf and phase is %Lf \n" ,mag[i], 180 * ph[i]/ PI);
    }
}