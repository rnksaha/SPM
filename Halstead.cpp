#include <bits/stdc++.h>
#include<math.h> 
using namespace std; 

int main(){
	double n1,n2,n,N1,N2,N,	V,D,L,E,T,B;
	cout<<"\nEnter number of unique (distinct) operators (n1): ";
	cin>>n1;
	cout<<"\nEnter number of unique (distinct) operands (n2): ";
	cin>>n2;
	cout<<"\nEnter total number of operators (N1): ";
	cin>>N1;
	cout<<"\nEnter total number of operands (N2): ";
	cin>>N2;
	n = n1 + n2;
	N = N1 + N2;
	V = N*log2(n);
	D = ( n1 / 2 ) * ( N2 / n2 );
	L = 1 / D;
	E = V * D;
	T = E / 18;
	cout<<"Size of vocabulary(n) is: "<< n<<endl;
	cout<<"Program length(N) is: "<< N<<endl;
	cout<<"Program volume(V) is: "<< V<<endl;
	cout<<"Difficulty level(D) is "<< D<<endl;
	cout<<"Program level(L) is "<< L<<endl;
	cout<<"Effort of implement(E) is "<< E<<endl;
	cout<<"Time of implement(T) is "<< T<<endl;

	return 0;
}
