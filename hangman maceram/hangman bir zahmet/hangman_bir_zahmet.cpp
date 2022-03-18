#include <iostream>
using namespace std;

struct database{
	int kelime_sayisi, location;
	int yedek;
	string alfabe [26] = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z"};
	string kelime[yedek];
};

void print(){
database d1;
string cevap; 
d1.yedek = d1.kelime_sayisi - 1;

for(int i = 0; i <= 26; i++){
	
	cout << "Is there any " << d1.alfabe[i] << "in your word? \ty/n" <<endl,	
	cin >> cevap;
	
	while ((cevap != "n") || (cevap != "y")){
		cout << "There happens to be a misunderstanding, please type again" << endl;
		cin >> cevap;	
		
	if(cevap == "n"){
	// içi boþ	
	}	
		
	else if (cevap == "y"){
		
		cout << "Is that so, do you have more than one? \ty/n" << endl;
		cin >> cevap;
		
		if(cevap == "n"){
			cout << "OK, can you type down the location of your letter? "<< endl;
			cin >> d1.location;
		}
		
		else if (cevap == "y"){
			
			
		}
		
	}
	
	
		
		
	}
}
	


}


int main(){
	database d1;
	cout << "-----------------------------------------------------------------\n" << endl;
	cout << "Hello there my dear customer, mind if we play a game" << endl;
	cout << "You think of a word and I guess it, OK ?" << endl << endl;
	
	cout << "Alright then, can you tell me how many letters your word is ? (please type it down)" << endl;
	cin >> d1.kelime_sayisi;
	
	while(d1.kelime_sayisi <= 0){
		cout << "There happens to be a misunderstanding, please type again" << endl;
		cin >> d1.kelime_sayisi;
	}
	
	cout << "Ok,so you got a word with '" << d1.kelime_sayisi << "' letters." << endl;
	cout << "Now I'll be trying to guess your vocable." << endl;
	cout << "-------------------------------------------------------------------\n" << endl;
	
}
