#include <bits/stdc++.h> 
using namespace std; 

void printPascal(int n) 
{ 
for (int i = 1; i <= n; i++) 
{ 
   int c = 1; 
   for (int j = 1; j <= i; j++)  
   { 
      cout<< c<<" ";  
      c = c * (i - j) / j;  
   } 
   cout<<"\n"; 
} 
} 

int main() 
{ 
   int n = 5; 
   printPascal(n); 

   return 0; 
}
