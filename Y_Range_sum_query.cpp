#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int a[n];

for (int i = 0; i <=n; i++)
{
    cin>>a[i];
}
//...................//

int tem = 0;

for (int i = 0; i <=n; i++)
{
   if(a[i]== a[i+1])
    {
        tem =1;
    }    
}

if(tem == 1)
{
    cout<<"yes";
}
else{
    cout<<"no";
}

return 0;
}