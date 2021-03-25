#include <bits/stdc++.h>
#include<math.h> 
using namespace std;
void hksum(int hk[],int n){
	int sum=0,i;
	for(i=1;i<=n;i++){
		sum=sum+hk[i];
	}
	cout<<"HK for whole program is  "<<sum<<endl;
}
void calculate_hk(int in[],int out[],int n){
	int hk[100],i,modvalue=97, weight=1;
	char mod;
	for(i=1;i<=n;i++){
		hk[i]=weight*(in[i]*out[i])*(in[i]*out[i]);
		mod=(char)modvalue;
		cout<<"\nHK value for "<<mod<<":  "<<hk[i]<<endl;
		modvalue++;
	}
	hksum(hk,n);
}
int main(){
	int n, i=1; 
	int mod[100], in[100],out[100];
	cout<<"\nEnter the number of mod# : ";cin>>n;
	cout<<"\nEnter the values of in and out"<<endl;
	for(i=1;i<=n;i++){
		cout<<"in["<<i<<"]=  ";cin>>in[i];
		cout<<"out["<<i<<"]= ";cin>>out[i];
	}
	calculate_hk(in,out,n);
	
	
	return 0;
	
}
