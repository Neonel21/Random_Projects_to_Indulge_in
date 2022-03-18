#include <iostream>
using namespace std;

database(){
int sayilar[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
int tahmin;	
string yes_no;	

	for(int i = 0; i< 9; i++){
			
		cout << "Perhaps your number is : " << sayilar[i] << "\t y/n" << endl;
		cin >> yes_no;	
			
		if(yes_no == "y"){
				
			sayilar[i] = tahmin;
			break;
		}
			
		else{
				
			cout << "Ahh, unlucky me! Let me try again\n" << endl; 
				
		}
			
	}
		
	cout << "\n\nNow I'm sure, this is your number: '" << tahmin << "'."<< endl;
	
	}
	
		
		
	



int main(){
	string dogru_yanlis;
	cout << "Hello, good sir! I am a forteller and I belive I can guess a number between 1-10.\nWell then, have you thought of one yet?\t y/n"<< endl;
	cin >> dogru_yanlis;
	
	while (dogru_yanlis == "n"){
	
		cout << "I'll wait for three seconds, then you have to answer again." << endl;
		
		for(int i = 1; i <= 3; i++){
			cout << i  <<" Seconds" << endl;
			
		} 
		
		cout << "Have u thought of one yet?" << endl;
		cin >> dogru_yanlis;
			
	}
	cout << "\n\n\nGood. Let's get into it then.\n" << endl;
	database();
		
		

	
}
