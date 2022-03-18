#include <iostream>
using namespace std;

int fonks(int a){ //fonksiyon, fonks isimli, a parametreli
	char dizi[a]; //dizi isimli bir dizi (char)
	char doru; //doru variable (char)
	char alfabe[26]= {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'}; //alfabe isimli dizi, 26 eleman
	int sayi, yer; //sayi ve yer variable (int)
	
	for(int i = 0; i <= 25; i++){ //for, i 25 e eþit olana kadar (26 kere)
	
	cout << "\nOk, let's see. Is there any \""<< alfabe[i] << "\" in your vocable ? \t y/n" << endl; //alfabe dizisi elemenlarý var mý?  
	cin >> doru; // doru girilir
	
	if (doru == 'y'){ // y ise 
		cout << "\nGood job me!! Can you tell me if it is more than one?\t y/n" << endl; //birden fazla mý?
		cin >> doru; // doru girilir
		
		if(doru == 'y'){ // y ise 
			tp:
			
			cout << "\nHow many ?" << endl; //kaç tane?
			cin >> sayi; //sayi girilir
			
			
			
			cout << sayi <<", am I right ?\t y/n" << endl;
			cin >> doru;
			
			if(doru == 'y'){
				
				cout << "\n\nOk, that's settled then. Please type the numbers first to last"<< endl;
				int birden_fazla[sayi];
				for(int i = 0; i < sayi; i++){
					cout << "Please type the numbers like lower to higher." << endl;
					cin >> sayi;
					continue;
					
				}
				
				
			}
				
			else{
				
				cout << "Yo, then type again !!" << endl << endl;
				goto tp;
			}	
				
				
		}
	
		
	
	
	
	
		else (doru == 'n');{ //n ise
			
			cout << "Hmm, I see. You don't have more than one aye? Where is the location then? Please type it down."<< endl; //harf yeri
			cin >> yer; //yer girilir
			yer - 1; //yerden 1 çýkarýlýr
			alfabe[yer]; //alfabeye yerleþtirilir
			
		}
	
		
	}
	
	cout << "Well, the moment of truth. Is this your vocable ?" << endl;
	
	}
	
}


int main(){
	char cevap; //cevap isimli bir variable (char)
	int a; //a isimli bir variable (int)
	
	cout << "Let's play a game, shall we ? y\n" << "You think of a vocable and I try to guess it, okay?" << endl; //Bir kelime aklýndan tut
	cout << "Have you thought of one yet ?\t y/n "<< endl; //Tuttun mu, y veya n yaz.
	cin >> cevap; //cevap girilir
	
		if (cevap == 'y'){ //Eðer y ise 
		
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
	cout << endl <<" "<< a << " ha, good one mate!"<< endl; //harf ekrana yazdýrýlýr
	
	fonks(a);	//fonksiyon aktif edilir, a variable ý girilir
}
