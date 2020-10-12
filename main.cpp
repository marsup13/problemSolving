#include <bits/stdc++.h>
#include<iostream>
#include<ios> //used to get stream size
#include<limits> //used to get numeric limits

using namespace std;

int main(int argc, char** argv) //argc: the number of the arguments that will be passed inside of it,
//argv: array of pointers to strings
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int ligne, colonne;

    for(int i=1;i<=5;i++){
        for (int j=1; j<=5;j++){
            int element;
            cin>>element;
            if(element==1){
                ligne=i;
                colonne=j;
            }
        }
    }
    cout<<abs(3-ligne)+abs(3-colonne)<<endl;





}
