#include <iostream>
#include <string>
#include <iomanip>
using namespace std;



class Contact {
	private: 
	string name;
	string number;
	public:
	void print() {
		cout<<"1. Display Address Book"<<endl<<"2. Add New Contact"<<endl<<"3. Remove Contact"<<endl<<"4. Exit"<<endl<<"Enter your choice: ";
			

	}
	void print1() {
		int x;
		x=name.length();
		cout<<name<<setw(20-x)<<number<<endl<<endl;
	}
	void setName(string k) {
		name=k;
	}
	void setNumber(string l) {
		number=l;
	}
	string getName() {
		return name;
	}
	string getNumber() {
		return number;
	}
	void remove() {
		cout<<"Contact Removed"<<endl<<endl;
	}
	
	Contact() {
		this->name = "Unknown";
		this->number = "0";
	}
	void print(string str,string str1) {
		this->name =str;
		this->number = str1;
	}
	void add(string nme ,string nmb) {
		name=nme;
		number=nmb;
		
	}
	
	
	
};

int main() {
	
	Contact ct[5];
	string isim;
	string sayi;
	int i=0,counter=0,k,y;
	cout<<"1. Display Address Book"<<endl<<"2. Add New Contact"<<endl<<"3. Remove Contact"<<endl<<"4. Exit"<<endl<<"Enter your choice: ";
	cin>>k;
	while(k<=4) {
		
		if(k==1 && i==0) {
			cout<<"No contacts available."<<endl<<endl;
			
		}
		else if (k==1 && i>0) {
			cout<<"Name"<<setw(15)<<"number"<<endl;
			for(y=0;y<i;y++) {
			ct[y].print1();
	}
		}
		else if(k==2) {
			cout<<"Enter name: ";
			cin>>isim;
			ct[i].setName(isim);
			cout<<"Enter number: ";
			cin>>sayi;
			ct[i].setNumber(sayi);
			cout<<"Contact added."<<endl<<endl;
			i++;
		}
		else if (k==3) {
			ct[i].remove();
		}
		else if(k==4) {
			cout<<"Bye.";
			break;
		}
		cout<<"1. Display Address Book"<<endl<<"2. Add New Contact"<<endl<<"3. Remove Contact"<<endl<<"4. Exit"<<endl<<"Enter your choice: ";
		cin>>k;
	}
	
	
	

	
	
	
	return 0;
}
