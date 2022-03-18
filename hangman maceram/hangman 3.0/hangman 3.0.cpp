#include <iostream>
using namespace std;

fonks(int a){	
//struct database{
	
int sayi, yer; //sayi ve yer variable (int)	
char akildaki_sayi[a];
char alfabe[26]= {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'}; //alfabe isimli dizi, 26 eleman	
char dogru_yanlis;	
	
//};

for(int i = 0; i <= 25; i++){ //for, i 25 e eşit olana kadar (26 kere)
	
	cout << "\nOk, let's see. Is there any \""<< alfabe[i] << "\" in your vocable ? \t y/n" << endl; //alfabe dizisi elemenları var mı?  
	cin >> dogru_yanlis; // doru girilir
			


	if(dogru_yanlis == 'y'){ // y ise 
	cout << "\nGood job me!! Can you tell me if it is more than one?\t y/n" << endl; //birden fazla mı?
	cin >> dogru_yanlis; // doru girilir


		if(dogru_yanlis == 'y'){ // y ise 
		tp:
			
		cout << "\nHow many ?" << endl; //kaç tane?
		cin >> sayi; //sayi girilir
		
		cout << sayi <<", am I right ?\t y/n" << endl;
		cin >> dogru_yanlis;
		
			if(dogru_yanlis == 'y'){
			
			cout << "\n\nOk, that's settled then. Please type the numbers first to last"<< endl;
		
				for(int i = 1; i <= sayi; i++){
				cout << i <<". location: ";
				cin >> yer;
				yer =- 1;
				akildaki_sayi[a] = {yer};
				
				}
			}

else{	
cout << "Yo, then type again !!" << endl << endl;
goto tp;
}			

}	

	else if(dogru_yanlis == 'n'){ //n ise		
	cout << "Hmm, I see. You don't have more than one aye? Where is the location then? Please type it down:"<< endl; //harf yeri		
	cin >> yer;
	yer =- 1;
	akildaki_sayi[a] = {i};
		
	}
	
	}
}

cout << "Well, the moment of truth. Is this your vocable ?" << endl;
	
	for(int i = 0; i < a; i++){
		cout << akildaki_sayi[i];
	}

}
	

	
int main(){
	char cevap; //cevap isimli bir variable (char)
	int a; //a isimli bir variable (int)
	
	cout << "Let's play a game, shall we ? y\n" << "You think of a vocable and I try to guess it, okay?" << endl; //Bir kelime aklından tut
	cout << "Have you thought of one yet ?\t y/n "<< endl; //Tuttun mu, y veya n yaz.
	cin >> cevap; //cevap girilir
	
		if (cevap == 'y'){ //Eğer y ise 
		
			cout << "\nGood news ha !! Let's get started then" << "\nP.S: Your vocable shouldn't contain any capitals (like 'I' )" << endl; //Büyük harf yok 
		
		}
	
		while (cevap == 'n'){ //n ise 
		
			cout << "\nWell, that's just a pity how bad your knowledge lacks :D"<< endl;
			cout << "Jk mate, you have time !!" << endl;
			cout << "If you are ready then type it in !!" << endl; //tekrar yaz
			cin >> cevap; //cevap girilir
		}
	
	
	cout << "I don't know if you know yet but i am no magician :D \nI would like you to type the amount of words in your sentence" << endl; //kaç harf ?
	cin >> a; //harf girilir
	cout << endl <<" "<< a << " ha, good one mate!"<< endl; //harf ekrana yazdırılır
	
	fonks(a);	//fonksiyon aktif edilir, a variable ı girilir

}

	
