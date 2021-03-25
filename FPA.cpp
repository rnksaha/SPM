#include <bits/stdc++.h> 
using namespace std; 

// Function to calculate Function Point 
void calfp(int frates[5][3], int fac_rate) 
{ 
	// Weight Factors 
	int wtFactors[5][3] = { 
		{ 3, 4, 6 }, 
		{ 4, 5, 7 }, 
		{ 3, 4, 6 }, 
		{ 7, 10, 15 }, 
		{ 5, 7, 10 }, 
	}; 

	int UFP = 0; 

	// Calculating UFP (Unadjusted Function Point) 
	for (int i = 0; i < 5; i++) { 

		for (int j = 0; j < 3; j++) { 

			int freq = frates[i][j]; 

			UFP += freq * wtFactors[i][j]; 
		} 
	} 

	// 14 factors  
		/*"reliable backup and recovery required ?", 
		"data communication required ?", 
		"are there distributed processing functions ?", 
		"is performance critical ?", 
		"will the system run in an existing heavily utilized operational environment ?", 
		"on line data entry required ?", 
		"does the on line data entry require the input transaction to be built over multiple screens or operations ?", 
		"are the master files updated on line ?", 
		"is the inputs, outputs, files or inquiries complex ?", 
		"is the internal processing complex ?", 
		"is the code designed to be reusable ?", 
		"are the conversion and installation included in the design ?", 
		"is the system designed for multiple installations in different organizations ?", 
		"is the application designed to facilitate change and ease of use by the user ?"*/ 
	int sumF = 0; 

	// Taking Input of factors rate 
	for (int i = 0; i < 14; i++) { 

		int rate = fac_rate; 

		sumF += rate; 
	} 

	// Calculate CFP 
	double CAF = 0.65 + 0.01 * sumF; 

	// Calculate Function Point (FP) 
	double FP = UFP * CAF; 

	// Output Values 
	cout << "Function Point Analysis :-" << endl; 

	cout << "Unadjusted Function Points (UFP) : " << UFP << endl; 

	cout << "Complexity Adjustment Factor (CAF) : " << CAF << endl; 

	cout << "Function Points (FP) : " << FP << endl; 
} 

int main() 
{ 
	int frates[5][3] = { { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 } }; 
	int fac_rate,n;
	cout<<"\n1 - Low\n2 - Average\n3 - High\nEnter the system state: ";cin>>n;
	if(n==1){
		cout<<"\nExternal Inputs: ";cin>>frates[0][0]; 
		cout<<"\nExternal Outputs: ";cin>>frates[1][0]; 
		cout<<"\nExternal Inquiries: ";cin>>frates[2][0]; 
		cout<<"\nInternal Logical Files: ";cin>>frates[3][0]; 
		cout<<"\nExternal Interface Files: ";cin>>frates[4][0];
	
	}
	else if(n==2){
		cout<<"\nExternal Inputs: ";cin>>frates[0][1]; 
		cout<<"\nExternal Outputs: ";cin>>frates[1][1]; 
		cout<<"\nExternal Inquiries: ";cin>>frates[2][1]; 
		cout<<"\nInternal Logical Files: ";cin>>frates[3][1]; 
		cout<<"\nExternal Interface Files: ";cin>>frates[4][1];	
	}
	else if(n==3){
		cout<<"\nExternal Inputs: ";cin>>frates[0][2]; 
		cout<<"\nExternal Outputs: ";cin>>frates[1][2]; 
		cout<<"\nExternal Inquiries: ";cin>>frates[2][2]; 
		cout<<"\nInternal Logical Files: ";cin>>frates[3][2]; 
		cout<<"\nExternal Interface Files: ";cin>>frates[4][2];
	}
	else{
		cout<<"Wrong choice";
	}
	cout<<"\nRate the following aspects on a scale of 0-5 :- \n0 - No influence\n1 - Incidental\n2 - Moderate\n3 - Average\n4 - Significant\n5 - Essential\nEnter	Rate Scale of Factors: " ;
	cin>>fac_rate;
	calfp(frates, fac_rate); 

	return 0; 
} 

