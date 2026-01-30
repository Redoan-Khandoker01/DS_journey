#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long t; 
 cin>>t; 
 while (t--)
 {  
     long long n;
    cin>>n;

     long long v[n];
    for (int i = 1; i <= n; i++)
    {
        cin>>v[i];
    }
    
    long long  totat_value=0;
  
     for (int i = 1; i <= n; i++)
     {
        totat_value += i*v[i]; 
     }
     
    
    cout<<totat_value<<endl;


 }



return 0;
}