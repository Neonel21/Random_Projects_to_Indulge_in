#include <iostream>
using namespace std;

struct database{
	int kelime_sayisi;
	char kelime_sayisi2[];
	const char alfabe[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
	char cikti[];
	string cevap;
	int location;
	int as = 0; // while döngüsü için gereken alfabe þeyþeysi  ^
														   // ||	
};														   // ^

void GuessVocable(){
database d1;

	while(d1.as <= 23){
		cout << "Is there any '" << d1.alfabe[d1.as] << "' in your vocable\t y/n" << endl;
		cin >> d1.cevap;
		
		if(d1.cevap == "y"){
			cout << "Is that so, another question; is it more than one ?\t y/n" << endl;
			cin >> d1.cevap;
			
			if(d1.cevap == "n"){
				cout << "Then, can you please write the exact location of your letter:" << endl;
				cin >> d1.location;
				d1.kelime_sayisi2[d1.location] = {d1.alfabe[d1.as]};
				
			}
			
			else if(d1.cevap == "y"){
				cout << "Alright! What I want u to do now is to type their location lowest to highest number. But firstly, how many?" << endl;
				int sayi;
				cin >> sayi;
				
				for(int s = 1; s <= sayi; s++ ){
					cout << s <<". word's location:" << endl;
					cin >> d1.location;
					d1.kelime_sayisi2[d1.location] = {d1.alfabe[d1.as]};
				}
			
				
			}
		}
		
		else {
			cout << "\nOk, on to the next one:" << endl<< endl;
		}
	d1.as++;
	}
	
	
}


int main(){
database d1;
	cout << "Hello my dear customer. I do foretelling for living.. Please think of a vocable so that I can guess it." << endl;
	cout << "OK. Please type the amount of letters it contains:" << endl;
	cin >> d1.kelime_sayisi;
	 	
	cout << d1.kelime_sayisi << " ha. Good, Let's guess it then." << endl << endl;
	
GuessVocable();

cout << "I think we are all set. Now, IS THIS YOUR WORD?" << endl;
	cout << "'";
	for(int i = 0; i < d1.kelime_sayisi; i++){
		
		cout << d1.kelime_sayisi2[i];
	}
	cout << "'";
	

	
}

