#include <bits/stdc++.h>
using namespace std;

int func(int n)
{
  
  
  int h=1;
  for(int i=1;i<=n;i++)
  {
     if(i%2!=0)
        h=h*2;
     else
        h++;    
      
  }
  return h;
  
   
}



int main()
{
   int n=4;
   cout<<func(n);
   

   return 0;
    
    
}
