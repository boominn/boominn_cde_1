#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Course {
	
	public:
		int mtG;
		int hwG;
		int finG;
		double mtW;
		double hwW;
		double finW;
		string name;
		string letterGrade;
		
		void setmtG(int midterm) {
			mtG=midterm;
		}
		int getmtG() {
			return mtG;
		}
		void sethwG(int homework) {
			hwG=homework;
		}
		int gethwG() {
			return hwG;
		}
		void setfinG(int final) {
			finG=final;
		}
		int getfinG() {
			return finG;
		}
		void setName(string namee) {
			name=namee;
		}
		string getName() {
			return name;
		}
		
		string getLetter() {
			return letterGrade;
		}
	
	Course() {
		this->mtW=0;
		this->hwW=0;
		this->finW=0;
		this->name="Noname";
	}
	Course (double mtweight,double hmweight, double finweigth) {
		this->mtW=mtweight;
		this->hwW=hmweight;
		this->finW=finweigth;
	}
	
	void calculate() {
		int x,y,z,note;
		x=mtW*mtG;
		y=hwW*hwG,
		z=finW*finG;
		note=x+y+z;
		if(note<34) {
			letterGrade="FF";
		}
		else if(note>34 && note<44) {
			letterGrade="FD";
		}
		
		else if(note>45 && note<49) {
			letterGrade="DD";
		}
		else if(note>50 && note<59) {
			letterGrade="DC";
		}
		else if(note>60 && note<69) {
			letterGrade="CC";
		}
		else if(note>70 && note<79) {
			letterGrade="CB";
		}
		else if(note>80 && note<84) {
			letterGrade="BB";
		}
		else if(note>85 && note<89) {
			letterGrade="BA";
		}
		else if(note>90 && note<100) {
			letterGrade="AA";
		}
		
	}
	
	
};

int main() {

	string str;
	int n1,n2,n3;
	double w1,w2,w3;
	
	cout<<"Enter weights for second course: ";
	cin>>w1>>w2>>w3;
	
	cout<<"Enter first course name: ";
	cin>>str;
	cout<<"Enter first course grades: ";
	cin>>n1>>n2>>n3;
	Course std1(w1,w2,w3);
	std1.setmtG(n1);
	std1.sethwG(n2);
	std1.setfinG(n3);
	std1.setName(str);
	std1.calculate();
	
	cout<<"Enter second course name: ";
	cin>>str;
	cout<<"Enter first course grades: ";
	cin>>n1>>n2>>n3;
	Course std2(w1,w2,w3);
	std2.setmtG(n1);
	std2.sethwG(n2);
	std2.setfinG(n3);
	std2.setName(str);
	std2.calculate();
	
	cout<<"Course"<<setw(20)<<"Midterm"<<setw(19)<<"Homework"<<setw(19)<<"Final"<<setw(19)<<"Letter"<<endl;
	cout<<std1.name<<setw(15)<<std1.mtG<<setw(18)<<std1.hwG<<setw(22)<<std1.finG<<setw(18)<<std1.letterGrade<<endl;
	cout<<std2.name<<setw(15)<<std2.mtG<<setw(18)<<std2.hwG<<setw(22)<<std2.finG<<setw(18)<<std2.letterGrade;
	
	
	return 0;
}
