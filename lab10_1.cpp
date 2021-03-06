#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	

	double PrevBalance , Interest1 , Interest , Payment , Total , NewBalance ;

	cout << "Enter initial loan: ";
	cin >> PrevBalance ;
	cout << "Enter interest rate per year (%): ";
	cin >> Interest1 ;
	cout << "Enter amount you can pay per year: ";
	cin >> Payment ;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
		for (int i = 1 ; NewBalance > 0 ; i++){
			if ( i > 1) {
			PrevBalance = NewBalance ;
		}
		
		Interest = (PrevBalance*Interest1)/100.0 ;
		Total = PrevBalance + Interest ;
		if (Total < Payment){
			Payment = Total ;
		}
		NewBalance = Total - Payment ;
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	cout << fixed << setprecision(2); 
	cout << setw(13) << left << i ; 
	cout << setw(13) << left << PrevBalance ;
	cout << setw(13) << left << Interest ;
	cout << setw(13) << left << Total ;
	cout << setw(13) << left << Payment ;
	cout << setw(13) << left << NewBalance ;
	cout << "\n";	
	
	}

	return 0;
}
