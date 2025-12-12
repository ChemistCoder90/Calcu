#include<bits/stdc++.h>
#include <cstddef>
using namespace std;
#include<stdio.h>

int k=0, result=0, esc=0, a,b;
char ch, chLast;

char ScanString(){ 				//help of gpt
	string s;
	while(true){
		cin>>ch;
		if(ch=='q' || ch=='r') return ch;
		if(isdigit(ch)) break;
		else s.push_back(ch);
	}
	int Ssize=s.size();
	for(int i=Ssize-1; i>=0; i--){
		if(s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/' || s[i]=='q' || s[i]=='r') {
			chLast=s[i];
			break;
		}
	}
	
	return chLast;

}

void menu(){
	printf("You can perform: Addition\t Subtraction\tMultiplication\tDivision\n");
	printf("*Press 'r' to reset\n");
	printf("*Press 'q' to quit.\n");
	printf("Format: 2 + 3-...<enter>\n");
}
void add(){
	cin.unget();
	scanf(" %d", &b);
	int a=result;
	result+=b;
	printf("Total= %d + %d = %d\n",a,b, result);
}
void sub(){
	cin.unget();
	scanf(" %d", &b);
	int a=result;
	result-=b;
	printf("Total= %d - %d = %d\n",a,b, result);
}
void mul(){
	cin.unget();
  	scanf(" %d", &b);
	int a=result;
	result*=b;
	printf("Total= %d * %d = %d\n",a,b, result);
}
void div(){
	cin.unget();
    scanf(" %d", &b);
	while(b==0){
		printf("You can't divide with 0. Choose Integer value other than 0.\n");
		scanf(" %d", &b);
	}
	int a=result;
	result/=b;
	printf("Total= %d / %d = %d\n",a,b, result);
}
int main(){
	menu();
	while(1){
		if(esc==0){
			scanf(" %d", &a);
			esc=1;
			result=a;
		}
		char op=ScanString();
		switch(op){
			case '+': add(); break;
			case '-': sub(); break;
			case '*': mul(); break;
			case '/': div(); break;
			case 'q': printf("Quiting... Have a Nice Day:)\n");
					  return 0;
			case 'r': result=0;
					 esc=0;
					 system("clear");
					 printf("Old data cleared.\n");
					 menu();
					 break;
			default: printf("Wrong. Choose right operator"); break;
		}
	}
}
