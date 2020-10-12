/*int occurences(string str, char checkCharacter)
{


    int count = 0;

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] ==  checkCharacter)
        {
            ++ count;
        }
    }


    return count;
}*/

string processing(string word_to_process){
     string word_processed="";
     int l = word_to_process.length();
     word_processed.push_back(toupper(word_to_process[0]));
     for(int i=1;i<l;i++){
        word_processed.push_back(tolower(word_to_process[i]));
     }
     return word_processed;
}

 /*int n,h;
    cin>>n>>h;
    int ai;
    int roadWidth=0;
    while (n--) {
            cin>>ai;
            if(ai>h)roadWidth+=2;
            else roadWidth+=1;
    }

    cout<<roadWidth<<endl;*/
    /*int numberOfGamesPlayed;
    cin>>numberOfGamesPlayed;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    string resultsOfGames;
    getline(cin,resultsOfGames);
    int Anton=occurences(resultsOfGames, 'A');
    int Danik=occurences(resultsOfGames, 'D');
    if(Anton > Danik) cout<<"Anton"<<endl;
    else if(Anton < Danik) cout<<"Danik"<<endl;
    else cout<<"Friendship"<<endl;*/

    /*int limak_weight, bob_weight;
    cin>>limak_weight>>bob_weight;
    int nbr_years=0;
    while(limak_weight<=bob_weight){
        limak_weight*=3;
        bob_weight*=2;
        nbr_years++;


    }
    cout<<nbr_years<<endl;*/
    /*int number_of_problems;
    cin>>number_of_problems;
    int petya, vasya, tonya;
    int problems_to_submit=0;
    while(number_of_problems--){
        cin>>petya>>vasya>>tonya;
        int local_count=0;
        if(petya==1) local_count++;
        if(vasya==1) local_count++;
        if(tonya==1) local_count++;
        if (local_count>=2) problems_to_submit++;
    }
    cout<<problems_to_submit<<endl;*/

    /*int weight;
    cin>>weight;
    if(weight%2==0 && weight!=2) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;*/

    /*int number, nbrOfSubstractions;
    cin>>number>>nbrOfSubstractions;
    while(nbrOfSubstractions--){
        int lastDigit = number%10;
        if(lastDigit!=0) {
                lastDigit--;
                number=(number/10)*10+lastDigit;

        }else{
            number=number/10;
        }
    }
    cout<<number<<endl;*/

    /* string word_to_process;
     cin>>word_to_process;
     int l=word_to_process.length();
     int i=1;
     bool process;
     for(int i=1;i<l;i++){
        if(islower(word_to_process[i])){
            process=false;
            break;
        }

     }
     if(process==false) word_to_process=processing(word_to_process);
     cout<<word_to_process<<endl;*/

















     /*another to consider for CAPS problem
     #include <bits/stdc++.h>
#include <cstdio>
#include <cstring>
#include <cmath>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define pii pair<int,int>
#define pll pair<long long, long long>
#define mp(x,y) make_pair(x,y)
#define pb push_back
#define rep(i,a,b) for(int i=a;i<b;++i)
#define repa(i,a,b) for(int i=a;i<=b;++i)
#define fr first
#define sr second
using namespace std;

int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    //cin>>t;
    t=1;
    while(t-->0){
        string s;
        cin>>s;
        int cnt=1;
        rep(i,1,s.length()){
            if(s[i]>=65 && s[i]<=90)
                cnt++;
        }
        if(cnt==s.length()){
            if(s[0]>=65 && s[0]<=90)
                s[0]+=32;
            else
                s[0]-=32;
            rep(i,1,s.length()){
                s[i]+=32;
            }
        }

        cout<<s;

    }*/



}
