#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
   int n;
   int N[1000];
   cin>>n;
   int i,j,temp;
  for (i=0; i<n; i++) {
  cin>>N[i];
  }
for(i=0, j=n-1; i<n/2; i++, j--){
    temp = N[i];
    N[i]=N[j];
    N[j]=temp;
}
for (i=0; i<n; i++) {
    cout<<N[i]<<" ";
}
   
    return 0;
}
  
