#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>> t;

int n[t];

for (int i = 0; i < t; i++)
{
    cin>>n[i];
}
int totalNeed = 0;

for (int i = 0; i < t; i++)
{
    for (int j = 0; j < 5; j++)
    {
        if(j+j+1 == n[i])
        {
             totalNeed++;
        }
    }
   cout<<totalNeed<<endl;
}
return 0;
}