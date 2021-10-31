#include<bits/stdc++.h>

using namespace std;

int main(){
    long long int i,n,k=0;

    cin>>n;
n--;
    long long int a[n];
for(i=0;i<n;i++){
   
    cin>>a[i];
  
}
sort(a,a+n);
for(i=0;i<n;i++){
    k++;
     if(a[i]!=k){
        cout<<k;
        return 0;
    }

}
k++;
cout<<k;




}
