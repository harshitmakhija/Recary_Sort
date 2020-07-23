#include<bits/stdc++.h>
using namespace std;
void binrec(int *a,int n){
if(n<2)
return ;
int x=a[n-1];
binrec(a,n-1);
int i=0,j=n-2;
int ans=n-1;
while(i<=j){
int mid=i+(j-i)/2;
if(a[mid]>=x){
ans=mid;
j=mid-1;
}
else{
i=mid+1;
}
}
for(int i=n-1;i>=ans+1;i--){
a[i]=a[i-1];
}
a[ans]=x;
return;
}
int main(){
int n;
cin>>n;
int *a=new int[n];
for(int i=0;i<n;i++)
cin>>a[i];
binrec(a,n);
cout<<"Here comes the sort"<<endl;
for(int i=0;i<n;i++)
cout<<a[i]<<" ";
cout<<endl;
return 0;
}
