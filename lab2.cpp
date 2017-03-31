#include <iostream> 
#include <unistd.h> 
#include <cmath> 
#include "class.h" 
#include <fstream> 

using namespace std; 

int main(){ 
int K, n; 
float Ra, Rb; 
float RankA, RankB, ExpectedA, ExpectedB, ScoreA, DebugA, DebugB; 
int intRA, intRB; 

ifstream inFile("infile", ios::in); 
ofstream outFile("outfile", ios::out); 

inFile>>K>>Ra>>Rb; 
Lab2 lab2(Ra,Rb,K); 

Ra=lab2.getRa(); 
Rb=lab2.getRb(); 
K=lab2.getK(); 

outFile<<Ra<<"\t"<<Rb<<endl; 

for(n=1;n<=6;n++){ 
inFile>>ScoreA; 
Ra=lab2.getRa(); 
Rb=lab2.getRb(); 
K=lab2.getK(); 

ExpectedA=1/(1+pow(10,(Rb-Ra)/400)); 
ExpectedB=1/(1+pow(10,(Ra-Rb)/400)); 
RankA=Ra+K*(ScoreA-ExpectedA); 
RankB=Rb+K*((1-ScoreA)-ExpectedB); 

intRA=RankA; 
intRB=RankB; 
DebugA=RankA-intRA; 
DebugB=RankB-intRB; 
if(DebugA>=0.5){ 
RankA=intRA+1; 
} 
else{ 
RankA=intRA; 
} 
if(DebugB>=0.5){ 
RankB=intRB+1; 
} 
else{ 
RankB=intRB; 
} 
Ra=RankA; 
Rb=RankB; 

outFile<<Ra<<"\t"<<Rb<<endl; 
lab2.setRa(Ra); 
lab2.setRb(Rb); 
} 
return 0; 
}
